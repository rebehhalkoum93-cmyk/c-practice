#include <stdio.h>
#include <stdlib.h>

// تعريف هيكلة العقدة
struct Node {
    int data;          // بيانات العقدة
    struct Node* next; // مؤشر إلى العقدة التالية
};

int main() {
    int n, value;
    struct Node *head = NULL, *temp = NULL, *newNode = NULL;

    // طلب عدد العقد من المستخدم
    printf("أدخل عدد العقد: ");
    scanf("%d", &n);

    // إنشاء N عقد وربطها ببعضها
    for (int i = 0; i < n; i++) {
        // تخصيص ذاكرة لعقدة جديدة
        newNode = (struct Node*)malloc(sizeof(struct Node));
       
        // إدخال بيانات العقدة
        printf("أدخل قيمة العقدة %d: ", i + 1);
        scanf("%d", &value);
        newNode->data = value;
        newNode->next = NULL; // العقدة الجديدة تشير إلى NULL في البداية

        // إذا كانت العقدة الأولى
        if (head == NULL) {
            head = newNode;
            temp = head;
        } else {
            temp->next = newNode; // ربط العقدة السابقة بالعقدة الجديدة
            temp = newNode;       // تحديث المؤشر إلى العقدة الجديدة
        }
    }

    // طباعة القائمة المتصلة
    printf("\nالعناصر في القائمة المتصلة:\n");
    temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    // تحرير الذاكرة بعد الاستخدام
    temp = head;
    while (temp != NULL) {
        struct Node* nextNode = temp->next;
        free(temp);
        temp = nextNode;
    }

    return 0;
}

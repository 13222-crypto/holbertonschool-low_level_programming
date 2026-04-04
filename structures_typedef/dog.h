#ifndef DOG_H
#define DOG_H

/**
 * struct dog - تعريف هيكل بيانات لكلب
 * @name: اسم الكلب (string)
 * @age: عمر الكلب (float)
 * @owner: اسم المالك (string)
 *
 * الوصف: هذا الهيكل يستخدم لتخزين معلومات الكلب الأساسية
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* DOG_H */

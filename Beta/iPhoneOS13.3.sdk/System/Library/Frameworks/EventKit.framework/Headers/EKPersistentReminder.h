/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKPersistentReminder

+ (Class)meltedClass;
+ (id)reminderWithRandomUUID;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (int)entityType;
- (id)dueDate;
- (void)setDueDate:(id)arg1;
- (unsigned long long)displayOrder;
- (void)setDisplayOrder:(unsigned long long)arg1;
- (void)setCompletionDate:(id)arg1;
- (id)completionDate;
- (id)dueDateTimeZone;
- (_Bool)dueDateAllDay;
- (void)setDueDateTimeZone:(id)arg1;
- (void)setDueDateAllDay:(_Bool)arg1;
- (id)firstAlertDate;
- (void)setFirstAlertDate:(id)arg1;

@end

/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <EventKit/EKCalendarItemChange.h>

@interface EKReminderChange : EKCalendarItemChange

+ (int)entityType;
+ (void)fetchReminderChangesInStore:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
+ (void)fetchReminderChangesInSource:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
+ (void)fetchReminderChangesInCalendar:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;

@end

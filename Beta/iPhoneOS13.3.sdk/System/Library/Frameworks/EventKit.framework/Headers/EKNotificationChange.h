/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <EventKit/EKObjectChange.h>

@interface EKNotificationChange : EKObjectChange

+ (int)entityType;
+ (void)fetchNotificationChangesInStore:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
+ (void)fetchNotificationChangesInSource:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
+ (void)fetchNotificationChangesInCalendar:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;

@end

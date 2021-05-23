/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <EventKit/EKCalendarItemChange.h>

@interface EKEventChange : EKCalendarItemChange

+ (int)entityType;
+ (void)fetchEventChangesInStore:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
+ (void)fetchEventChangesInSource:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
+ (void)fetchEventChangesInCalendar:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;

@end

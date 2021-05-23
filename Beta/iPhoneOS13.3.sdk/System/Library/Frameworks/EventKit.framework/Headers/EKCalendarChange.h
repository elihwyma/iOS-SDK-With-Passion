/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <EventKit/EKObjectChange.h>

@interface EKCalendarChange : EKObjectChange

+ (int)entityType;
+ (void)fetchCalendarChangesInStore:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
+ (void)fetchCalendarChangesInSource:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;

@end

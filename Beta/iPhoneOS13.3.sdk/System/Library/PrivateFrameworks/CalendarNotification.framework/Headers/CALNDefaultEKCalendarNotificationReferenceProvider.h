/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CALNDefaultEKCalendarNotificationReferenceProvider : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)notificationReferenceForObjectID:(id)arg1 withType:(int)arg2 inEventStore:(id)arg3;
- (id)notificationReferenceForObjectID:(id)arg1 withType:(int)arg2 date:(id)arg3 inEventStore:(id)arg4;

@end

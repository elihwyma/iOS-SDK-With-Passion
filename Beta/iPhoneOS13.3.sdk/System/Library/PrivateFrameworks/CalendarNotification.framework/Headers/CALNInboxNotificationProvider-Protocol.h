/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <CalendarNotification/Swift-Protocol.h>

@class NSArray;

@protocol CALNInboxNotificationProvider <Swift>

@property (nonatomic, readonly) NSArray *eventNotificationReferences;
@property (nonatomic, readonly) unsigned long long eventNotificationCount;

@end

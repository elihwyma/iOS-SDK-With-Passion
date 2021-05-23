/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface NCLayoutLoopDetector : NSObject

{
    NSMutableArray *_notificationLayoutsInProgress;
}

@property (retain) NSMutableArray *notificationLayoutsInProgress;

- (id)init;
- (id)_savedNotificationLayoutsInProgress;
- (void)_saveNotificationLayoutsInProgress;
- (_Bool)layoutInProgressContainsNotificationRequest:(id)arg1;
- (void)addNotificationRequestToLayoutsInProgress:(id)arg1;
- (void)removeNotificationRequestFromLayoutsInProgress:(id)arg1;

@end

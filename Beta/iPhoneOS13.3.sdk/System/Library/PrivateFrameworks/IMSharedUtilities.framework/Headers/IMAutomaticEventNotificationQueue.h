/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <IMSharedUtilities/IMEventNotificationQueue.h>

@interface IMAutomaticEventNotificationQueue : IMEventNotificationQueue

- (void)_invokeEvent:(id)arg1;
- (void)_didProcessQueue;
- (void)_didAddNotification:(id)arg1;
- (void)_didCancelNotifications;

@end

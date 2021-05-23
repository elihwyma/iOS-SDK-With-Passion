/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <IMSharedUtilities/IMEventNotificationQueue.h>

@interface IMEventNotificationBroadcaster : IMEventNotificationQueue

- (void)_willProcessQueue;
- (void)_didProcessQueue;
- (void)broadcastEventToListeners:(CDUnknownBlockType)arg1;

@end

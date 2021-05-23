/*
 Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
 */

#import <NSObject.h>

@interface BYTelephonyStateNotifier : NSObject

{
    int _simUnlockNotificationToken;
}

@property (nonatomic) int simUnlockNotificationToken;

+ (unsigned long long)retrieveSIMUnlockStateFromToken:(int)arg1;

- (void)dealloc;
- (void)_beginObservingWithNotificationQueue:(id)arg1 notificationBlock:(CDUnknownBlockType)arg2;
- (void)_endObservingState;
- (id)initWithNotificationQueue:(id)arg1 notificationBlock:(CDUnknownBlockType)arg2;
- (id)initForNotifying;
- (unsigned long long)currentSIMUnlockState;
- (void)notifySIMUnlockStateChangedTo:(unsigned long long)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
 */

#import <Foundation/NSObject.h>

@interface BKUIOrientationStateHandler : NSObject

{
    int _rawOrientationToken;
    int _orientationLockToken;
    int _rotationLockNotificationToken;
    int _orientationNotificationToken;
    long long _lastKownOrientation;
}

@property (nonatomic) int rawOrientationToken;
@property (nonatomic) int orientationLockToken;
@property (nonatomic) int rotationLockNotificationToken;
@property (nonatomic) int orientationNotificationToken;
@property (nonatomic) long long lastKownOrientation;

+ (unsigned long long)bkui_getState:(int)arg1;

- (id)init;
- (void)dealloc;
- (void)_invalidateTokenIfNeeded:(int)arg1;
- (long long)rawDeviceOrientationIgnoringOrientationLocks;
- (_Bool)rotationLockStatusIsLocked;
- (void)registerRotationObserver:(CDUnknownBlockType)arg1;
- (void)registerRotationLockObserver:(CDUnknownBlockType)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString, SBDismissOnlyAlertItem;

@interface SBLockdownManager : NSObject

{
    int _state;
    _Bool _settingUpActivationState;
    SBDismissOnlyAlertItem *_activatingAlertItem;
    NSString *_unqiueDeviceIdentifier;
}

+ (id)sharedInstance;
+ (_Bool)_isDeveloperDevice;

- (id)init;
- (void)_setupActivationState;
- (int)lockdownState;
- (void)_resetActivationState;
- (_Bool)brickedDevice;

@end

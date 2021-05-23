/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <PrototypeTools/PTSettings.h>

@interface CSLockScreenBiometricFailureSettings : PTSettings

{
    _Bool _jiggleLock;
    _Bool _vibrate;
    _Bool _showPasscode;
    _Bool _waitUntilButtonUp;
}

@property (nonatomic) _Bool jiggleLock;
@property (nonatomic) _Bool vibrate;
@property (nonatomic) _Bool showPasscode;
@property (nonatomic) _Bool waitUntilButtonUp;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end

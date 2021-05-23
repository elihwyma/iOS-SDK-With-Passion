/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBHardwareButtonGestureParametersProviderBase.h>

@class NSString;

@interface SBAccessibilityHardwareButtonInteraction : SBHardwareButtonGestureParametersProviderBase

{
    unsigned long long _buttonType;
}

@property (nonatomic, readonly) unsigned long long buttonType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)hardwareButtonInteractionForLockButton;
+ (id)hardwareButtonInteractionForHomeButton;

- (void)dealloc;
- (id)hardwareButtonGestureParameters;
- (_Bool)consumeTriplePressUp;
- (id)initWithButtonType:(unsigned long long)arg1;
- (void)_registerAsNotificationObserver;
- (void)_unregisterAsNotificationObserver;
- (_Bool)_supportsTripleClick;
- (double)_downToDownInterval;
- (_Bool)_presentMigrationAlertIfNeeded;
- (struct __CFString *)_speedChangedNotificationName;
- (void)_accessibilityPrefsDidChange;

@end

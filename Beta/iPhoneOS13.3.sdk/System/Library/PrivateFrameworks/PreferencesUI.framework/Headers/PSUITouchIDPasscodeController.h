/*
 Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

#import <PreferencesUI/PSUIBiometricController.h>

@class BiometricKit, NSObject, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PSUITouchIDPasscodeController : PSUIBiometricController

{
    BiometricKit *_highlightMatcher;
    NSObject<OS_dispatch_queue> *_highlightQueue;
}

@property (retain, nonatomic) BiometricKit *highlightMatcher;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *highlightQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)specifiers;
- (void)statusMessage:(unsigned int)arg1;
- (void)matchResult:(id)arg1;
- (void)enrollResult:(int)arg1 bkIdentity:(id)arg2;
- (void)enrollResult:(int)arg1 identity:(id)arg2;
- (void)enrollBiometric;
- (id)biometricLogo;
- (id)headerForUseBiometricSection;
- (void)enrollmentControllerDidDismiss;
- (void)cancelModalFlow;
- (void)backgrounded:(id)arg1;
- (void)_setupMatching;
- (void)_cancelMatching;
- (id)fingerprintSpecifiers;
- (id)_fingerprintSpecifierForIdentity:(id)arg1;
- (void)addEnrollment:(id)arg1;
- (void)updateAddFingerprintSpecifier;
- (void)highlightFingerprintSpecifier:(id)arg1;
- (void)unhighlightFingerprintSpecifiersAfterDelay:(double)arg1;

@end

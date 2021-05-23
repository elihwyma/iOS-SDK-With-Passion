/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <ScreenTimeUI/STRootGroupSpecifierProvider.h>

@class NSString, PSSpecifier;

__attribute__((visibility("hidden")))
@interface STSignInToiCloudGroupSpecifierProvider : STRootGroupSpecifierProvider

{
    PSSpecifier *_signInSpecifier;
}

@property (retain, nonatomic) PSSpecifier *signInSpecifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)setCoordinator:(id)arg1;
- (void)_updateEnabledValue;
- (void)presentAppleAccountSignInController:(id)arg1;
- (void)signInController:(id)arg1 didCompleteWithSuccess:(_Bool)arg2 error:(id)arg3;
- (void)signInControllerDidCancel:(id)arg1;

@end

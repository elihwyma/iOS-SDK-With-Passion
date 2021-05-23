/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <ScreenTimeUI/STRootGroupSpecifierProvider.h>

@class NSString, PSSpecifier, UIViewController;

__attribute__((visibility("hidden")))
@interface STSetUpForFamilyGroupSpecifierProvider : STRootGroupSpecifierProvider

{
    UIViewController *_presenter;
    PSSpecifier *_setupFamilySpecifier;
}

@property (weak, nonatomic) UIViewController *presenter;
@property (nonatomic, readonly) PSSpecifier *setupFamilySpecifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)providerWithCoordinator:(id)arg1 presenter:(id)arg2;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)setCoordinator:(id)arg1;
- (void)_updateEnabledValue;
- (void)presentAppleAccountSetupFamilyController:(id)arg1;

@end

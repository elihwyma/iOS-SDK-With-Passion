/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <ScreenTimeUI/STRootGroupSpecifierProvider.h>

@class PSListController, PSSpecifier;

__attribute__((visibility("hidden")))
@interface STPasscodeGroupSpecifierProvider : STRootGroupSpecifierProvider

{
    PSSpecifier *_togglePasscodeSpecifier;
    PSListController *_listController;
}

@property (retain, nonatomic) PSSpecifier *togglePasscodeSpecifier;
@property (weak, readonly) PSListController *listController;

+ (id)providerWithCoordinator:(id)arg1 listController:(id)arg2;

- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)isHidden;
- (void)setCoordinator:(id)arg1;
- (void)reloadTogglePasscodeSpecifier;
- (void)changeOrRemovePasscode:(id)arg1;
- (void)_promptForRecoveryAppleIDWithPINController:(id)arg1 passcode:(id)arg2;
- (id)_authenticationContextWithReasonKey:(id)arg1;
- (id)_removePasscodeActionWithPINOptionsTitle:(id)arg1 pinOptionsHandler:(CDUnknownBlockType)arg2 pinValidationHandler:(CDUnknownBlockType)arg3;
- (void)_setManagedPasscode;
- (void)_removeManagedPasscode;

@end

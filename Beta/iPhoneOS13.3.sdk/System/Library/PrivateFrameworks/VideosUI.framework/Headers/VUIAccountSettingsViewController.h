/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Preferences/PSListController.h>

@class NSString, PSSpecifier, UITextField;

__attribute__((visibility("hidden")))
@interface VUIAccountSettingsViewController : PSListController

{
    _Bool _authenticationInProgress;
    long long _watchListAppsCount;
    PSSpecifier *_credentialsAppleIDSpecifier;
    PSSpecifier *_credentialsPasswordSpecifier;
    PSSpecifier *_signInSpecifier;
    PSSpecifier *_createAccountSpecifier;
    UITextField *_credentialsAppleIDTextField;
    UITextField *_credentialsPasswordTextField;
}

@property (nonatomic) _Bool authenticationInProgress;
@property (nonatomic) long long watchListAppsCount;
@property (retain, nonatomic) PSSpecifier *credentialsAppleIDSpecifier;
@property (retain, nonatomic) PSSpecifier *credentialsPasswordSpecifier;
@property (retain, nonatomic) PSSpecifier *signInSpecifier;
@property (retain, nonatomic) PSSpecifier *createAccountSpecifier;
@property (retain, nonatomic) UITextField *credentialsAppleIDTextField;
@property (retain, nonatomic) UITextField *credentialsPasswordTextField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)_dismissViewController;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (long long)_alertStyle;
- (id)specifiers;
- (id)_accountSpecifiers;
- (id)_sourcesSpecifiers;
- (id)_externalSpecifiers;
- (id)_clearHistorySpecifiers;
- (id)_signOutSpecifiers;
- (id)_credentialsSpecifiers;
- (id)_signInSpecifiers;
- (id)_createAccountSpecifiers;
- (void)_checkConnectedApps;
- (void)_didSelectSpecifier:(id)arg1;
- (id)_getConnectedAppsCountString;
- (void)_clearPlayHistory:(id)arg1;
- (void)_openiForgotAppleURL;

@end

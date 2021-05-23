/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUISettingsGroupController.h>

@class NSMapTable, NSString;

__attribute__((visibility("hidden")))
@interface SKUISignInSettingsGroupController : SKUISettingsGroupController

{
    NSString *_accountName;
    _Bool _authenticating;
    NSMapTable *_keyMapping;
    NSString *_password;
    _Bool _valid;
}

- (void)_resignFirstResponder;
- (id)valueForSettingDescription:(id)arg1;
- (void)returnInSettingDescription:(id)arg1;
- (void)setValue:(id)arg1 forSettingDescription:(id)arg2;
- (id)_keyForSettingDescription:(id)arg1;
- (void)_becomeFirstResponderWithKey:(id)arg1;
- (void)_attemptSignInWithAccountName:(id)arg1 password:(id)arg2;
- (void)_updateValidation;
- (void)_updateFieldsAuthenticating:(_Bool)arg1;
- (void)_signInSuccess:(id)arg1;
- (void)_signInFailed:(id)arg1 error:(id)arg2;
- (id)_settingDescriptionForKey:(id)arg1;
- (id)_submitSettingDescription;
- (_Bool)isAuthenticating;
- (void)submitSettingDescription:(id)arg1;

@end

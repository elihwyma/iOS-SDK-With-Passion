/*
 Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

#import <Preferences/PSListController.h>

__attribute__((visibility("hidden")))
@interface MCUIMISDenylistSettingsDetailController : PSListController

{
    _Bool _reenabled;
}

@property _Bool reenabled;

- (id)init;
- (void)dealloc;
- (_Bool)overridden;
- (void)setOverride:(id)arg1;
- (id)specifiers;
- (void)_reloadAsync;
- (void)_askForReenableConfirmation;
- (id)_reenableButtonSpecifier;

@end

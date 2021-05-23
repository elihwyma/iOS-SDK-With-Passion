/*
 Image: /System/Library/PrivateFrameworks/Settings/GeneralSettingsUI.framework/GeneralSettingsUI
 */

#import <Preferences/PSListController.h>

__attribute__((visibility("hidden")))
@interface PSGCertTrustSettings : PSListController

{
    id _profileListChangedNotificationObserver;
}

@property (retain, nonatomic) id profileListChangedNotificationObserver;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)specifiers;
- (id)trustVersionString:(id)arg1;
- (id)trustAssetVersionString:(id)arg1;
- (id)specifierForTrustSettings:(struct __SecCertificate *)arg1 isRestricted:(_Bool)arg2;
- (void)setFullTrustEnabled:(id)arg1 forSpecifier:(id)arg2;
- (id)isFullTrustEnabled:(id)arg1;

@end

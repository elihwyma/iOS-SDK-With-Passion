/*
 Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

#import <Preferences/PSListController.h>

__attribute__((visibility("hidden")))
@interface MCURLListenerListController : PSListController

+ (id)currentInstallationController;
+ (void)setShowingProfileInstallation:(_Bool)arg1;
+ (void)setCurrentInstallationController:(id)arg1;
+ (void)setOriginalURLSender:(id)arg1;
+ (id)originalURLSender;
+ (_Bool)showingProfileInstallation;

- (void)handleURL:(id)arg1;
- (void)_showSheetToInstallConfigurationProfileWithData:(id)arg1;
- (void)_showSheetToInstallConfigurationProfileFromInstallationQueue;
- (void)_showSheetToInstallConfigurationProfileFromPurgatory;
- (void)_showSheetToInstallProvisioningProfile;
- (void)_pushProfileDetailsForProfileWithID:(id)arg1;

@end

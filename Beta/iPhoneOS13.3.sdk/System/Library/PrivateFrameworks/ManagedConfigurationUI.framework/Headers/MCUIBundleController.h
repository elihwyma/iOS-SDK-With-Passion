/*
 Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

#import <Preferences/PSBundleController.h>

@class NPSDomainAccessor, PSListController, PSSpecifier;

@interface MCUIBundleController : PSBundleController

{
    PSListController *_parentController;
    PSSpecifier *_specifier;
    NPSDomainAccessor *_nanoDomainAccessor;
}

@property (weak, nonatomic) PSListController *parentController;
@property (retain, nonatomic) PSSpecifier *specifier;
@property (retain, nonatomic) NPSDomainAccessor *nanoDomainAccessor;
@property (nonatomic) unsigned long long nanoProfileCount;

+ (id)sharedInstance;
+ (id)configurationProfiles;
+ (_Bool)isForPairedDevice;
+ (id)provisioningProfilesWithValidityCheck:(_Bool)arg1;
+ (id)provisioningProfiles;

- (void)dealloc;
- (void)load;
- (void)unload;
- (id)_specifier;
- (id)specifiersWithSpecifier:(id)arg1;
- (id)initWithParentListController:(id)arg1 properties:(id)arg2;
- (void)incrementNanoProfileCount;
- (void)decrementNanoProfileCount;
- (void)_unpairedNotification:(id)arg1;
- (void)updateUI:(id)arg1;
- (id)_profileInfoForSpecifier:(id)arg1;
- (Class)_controllerClassForCurrentProfilesAndUpdatedUserInfo:(id)arg1;
- (_Bool)_isProfileSectionEmpty;
- (void)_updateSpecifierProfileInfo;
- (void)_updateSpecifierControllerClass;

@end

/*
 Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

#import <ManagedConfigurationUI/MCURLListenerListController.h>

@class NSMutableDictionary, NSSManager, NSString, UIImage;

__attribute__((visibility("hidden")))
@interface MCProfileListController : MCURLListenerListController

{
    _Bool _hasFetchedProfilesInfo;
    _Bool _hasFailedFetchingProfilesInfo;
    int _provisioningProfileInstalledToken;
    int _provisioningProfileRemovedToken;
    NSMutableDictionary *_dataDictionary;
    UIImage *_profileListIcon;
    NSSManager *_nssManager;
}

@property (retain, nonatomic) NSMutableDictionary *dataDictionary;
@property (retain, nonatomic) UIImage *profileListIcon;
@property (retain, nonatomic) NSSManager *nssManager;
@property (nonatomic) _Bool hasFetchedProfilesInfo;
@property (nonatomic) _Bool hasFailedFetchingProfilesInfo;
@property (nonatomic) int provisioningProfileInstalledToken;
@property (nonatomic) int provisioningProfileRemovedToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)specifiersForBlockedApps:(id)arg1;

- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)specifiers;
- (void)_showProgressIndicator;
- (void)fetchRemoteProfileList;
- (void)_profileListChanged:(id)arg1;
- (void)_installedApplicationsChanged:(id)arg1;
- (void)_appSignerApplicationsChanged:(id)arg1;
- (long long)_profilesCount;
- (id)_specifiersForDataDictionary;
- (void)_fetchPhoneProfileList;
- (int)_resolveIndexPathForSection:(id)arg1;
- (_Bool)_isSectionPopulated:(int)arg1;
- (id)_dataForIndexPath:(id)arg1;
- (void)_handleProfileCellSelectionAtIndexPath:(id)arg1;
- (_Bool)_showProfileDetailPageForUserEnrollmentProfile:(id)arg1;
- (void)_hideProgressIndicatorAndShowBackButton:(_Bool)arg1;
- (void)handleProfilesInfoResponse:(id)arg1 error:(id)arg2;
- (void)_blockedAppsChanged:(id)arg1;
- (_Bool)_isUIProfileInstallationRestricted;

@end

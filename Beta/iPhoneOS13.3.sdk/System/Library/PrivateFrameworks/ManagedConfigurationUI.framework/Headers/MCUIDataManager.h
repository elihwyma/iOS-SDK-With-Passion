/*
 Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

#import <Foundation/NSObject.h>

@class LSApplicationWorkspace, MCProfileInfo, NSArray, NSString;

@protocol OS_dispatch_queue;

@interface MCUIDataManager : NSObject

{
    _Bool _observing;
    int _appsChangedNotifyToken;
    int _provisioningProfileInstalledToken;
    int _provisioningProfileRemovedToken;
    MCProfileInfo *_mdmProfileInfo;
    NSArray *_configurationProfilesInfo;
    NSArray *_uninstalledProfilesInfo;
    NSArray *_freeDeveloperAppSigners;
    NSArray *_enterpriseAppSigners;
    NSArray *_blockedApplications;
    LSApplicationWorkspace *_appWorkspace;
    NSObject<OS_dispatch_queue> *_reloadQueue;
    NSObject<OS_dispatch_queue> *_memberQueue;
}

@property (retain, nonatomic) LSApplicationWorkspace *appWorkspace;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *reloadQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue;
@property (nonatomic) _Bool observing;
@property (nonatomic) int appsChangedNotifyToken;
@property (nonatomic) int provisioningProfileInstalledToken;
@property (nonatomic) int provisioningProfileRemovedToken;
@property (retain, nonatomic) MCProfileInfo *mdmProfileInfo;
@property (retain, nonatomic) NSArray *configurationProfilesInfo;
@property (retain, nonatomic) NSArray *uninstalledProfilesInfo;
@property (retain, nonatomic) NSArray *freeDeveloperAppSigners;
@property (retain, nonatomic) NSArray *enterpriseAppSigners;
@property (retain, nonatomic) NSArray *blockedApplications;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedManager;
+ (_Bool)isProfileSectionRestricted;

- (id)init;
- (void)dealloc;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (unsigned long long)itemCount;
- (void)profilesChanged:(id)arg1;
- (void)appMovedToBackground:(id)arg1;
- (void)appMovedToForeground:(id)arg1;
- (void)reloadAppSignersAndBlockedAppsInBackgroundWithCompletion:(CDUnknownBlockType)arg1;
- (void)reloadDataInBackgroundIncludingProfiles:(_Bool)arg1 appSigners:(_Bool)arg2 blockedApplications:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)reloadAllDataInBackgroundWithCompletion:(CDUnknownBlockType)arg1;
- (void)_reloadQueueReloadDataInBackgroundIncludingProfiles:(_Bool)arg1 appSigners:(_Bool)arg2 blockedApplications:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)isProfileSectionEmpty;
- (unsigned long long)appSignerCount;
- (unsigned long long)installedProfileCount;
- (id)mdmProfile;
- (id)configurationProfiles;
- (void)allDeviceManagementOutMDMProfileInfo:(id *)arg1 outConfigurationProfilesInfo:(id *)arg2 outUninstalledProfilesInfo:(id *)arg3 outEnterpriseAppSigners:(id *)arg4 outFreeDevAppSigners:(id *)arg5 outBlockedApplications:(id *)arg6;
- (void)reloadProfilesInBackgroundWithCompletion:(CDUnknownBlockType)arg1;

@end

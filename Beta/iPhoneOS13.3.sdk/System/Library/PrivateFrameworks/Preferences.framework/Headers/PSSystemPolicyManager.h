/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Foundation/NSObject.h>

@interface PSSystemPolicyManager : NSObject

+ (id)thirdPartyApplications;
+ (id)specifiersForThirdPartyApps:(id)arg1;
+ (id)_thirdPartyApplicationProxies;
+ (id)_thirdPartyApplicationProxyForBundleID:(id)arg1;
+ (void)_populateBBSectionIDs;
+ (_Bool)_shouldIncludeProxy:(id)arg1;
+ (_Bool)_systemSettingsNeededForProxy:(id)arg1;
+ (_Bool)_privacySettingsNeededForProxy:(id)arg1;
+ (_Bool)_backgroundAppRefreshSettingsNeededForProxy:(id)arg1;
+ (_Bool)_cellularDataSettingsNeededForBundleID:(id)arg1;
+ (_Bool)_notificationSettingsNeededForBundleID:(id)arg1;
+ (_Bool)_documentSettingsNeededForBundleID:(id)arg1;
+ (id)_dataUsageWorkspaceInfo;
+ (id)thirdPartyApplicationForBundleID:(id)arg1;
+ (id)thirdPartyApplicationProxies;
+ (id)thirdPartyApplicationProxyForBundleID:(id)arg1;

@end

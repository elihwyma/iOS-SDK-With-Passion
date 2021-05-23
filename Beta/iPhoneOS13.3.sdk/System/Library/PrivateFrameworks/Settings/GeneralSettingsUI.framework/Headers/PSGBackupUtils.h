/*
 Image: /System/Library/PrivateFrameworks/Settings/GeneralSettingsUI.framework/GeneralSettingsUI
 */

#import <Foundation/NSObject.h>

@interface PSGBackupUtils : NSObject

+ (_Bool)isDomainWhitelisted:(id)arg1;
+ (void)fetchBackupDisabledAppsWithBackupManager:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)configureAlertMessageOfType:(unsigned long long)arg1 AndTitleForBackUpDisabledApps:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (_Bool)shouldIgnoreBundleId:(id)arg1;
+ (_Bool)isiCloudPhotosEnabled;
+ (_Bool)isDomainNameIgnored:(id)arg1;
+ (id)displayNameForDomainInfo:(id)arg1;
+ (_Bool)hasValidDisplayNameOfDomain:(id)arg1;
+ (id)alertTitleForBackupDisabledAppsInfo:(id)arg1;
+ (id)alertBodyForBackupDisabledAppsInfo:(id)arg1 ofType:(unsigned long long)arg2;
+ (id)bundleIdForDomainInfo:(id)arg1;

@end

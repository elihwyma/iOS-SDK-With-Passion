/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Foundation/NSObject.h>

@class NSString, PSPhotosPolicyController;

@interface PSSystemPolicyForApp : NSObject

{
    unsigned long long _policyOptions;
    _Bool _forcePolicyOptions;
    PSPhotosPolicyController *_photosPrivacyController;
    NSString *_bundleIdentifier;
}

@property (copy, nonatomic) NSString *bundleIdentifier;

+ (_Bool)isServiceRestricted:(id)arg1;

- (id)initWithBundleIdentifier:(id)arg1;
- (id)specifiers;
- (id)specifiersForPolicyOptions:(unsigned long long)arg1 force:(_Bool)arg2;
- (id)privacySpecifiers;
- (id)assistantAndSearchSpecifiers;
- (id)notificationSpecifier;
- (id)privacySpecifierForService:(struct __CFString *)arg1;
- (id)backgroundAppRefreshSpecifier;
- (id)wirelessDataSpecifierWithAppName:(id)arg1;
- (id)documentsSpecifier;
- (id)preferredLanguageSpecifier;
- (id)dataUsageWorkspaceInfo;
- (_Bool)isCellularBundleID:(id)arg1;
- (_Bool)_isWirelessDataRestricted;
- (_Bool)_supportsBackgroundAppRefresh;
- (void)setBackgroundRefreshEnabled:(id)arg1 forSpecifier:(id)arg2;
- (id)isBackgroundRefreshEnabled:(id)arg1;
- (_Bool)_isBackgroundAppRefreshAllowed;
- (id)locationStatus:(id)arg1;
- (_Bool)_isLocationServicesRestricted;
- (id)authLevelStringForStatus:(unsigned long long)arg1;
- (id)locationServicesSpecifier;
- (id)photosServicesSpecifier;
- (id)_privacyAccessForService:(struct __CFString *)arg1;
- (void)setPrivacyAccess:(id)arg1 forSpecifier:(id)arg2;
- (id)privacyAccessForSpecifier:(id)arg1;
- (struct __CFBundle *)copyTCCBundleForService:(struct __CFString *)arg1;
- (id)documentSource:(id)arg1;
- (id)preferredLanguage:(id)arg1;

@end

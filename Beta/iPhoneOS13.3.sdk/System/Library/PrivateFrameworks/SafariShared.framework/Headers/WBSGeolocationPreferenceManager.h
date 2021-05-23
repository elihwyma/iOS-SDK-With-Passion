/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <SafariShared/WBSPerSitePreferenceManager.h>

@class NSString, WBSPerSitePreference, WBSPerSitePreferencesSQLiteStore;

@interface WBSGeolocationPreferenceManager : WBSPerSitePreferenceManager

{
    WBSPerSitePreferencesSQLiteStore *_perSitePreferencesStore;
    WBSPerSitePreference *_geolocationPreference;
}

@property (nonatomic, readonly) WBSPerSitePreference *geolocationPreference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) WBSPerSitePreferencesSQLiteStore *perSitePreferencesStore;

- (id)preferences;
- (id)initWithPerSitePreferencesStore:(id)arg1;
- (void)getValueOfPreference:(id)arg1 forDomain:(id)arg2 withTimeout:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)getAllDomainsConfiguredForPreference:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (long long)preferencesStoreKeyForPreference:(id)arg1;
- (id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)arg1;
- (id)valuesForPreference:(id)arg1;
- (id)localizedStringForValue:(id)arg1 inPreference:(id)arg2;
- (void)setValue:(id)arg1 ofPreference:(id)arg2 forDomain:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)removePreferenceValuesForDomains:(id)arg1 fromPreference:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getGeolocationSettingForDomain:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_setValue:(id)arg1 forDomain:(id)arg2 shouldIncludeTimestamp:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)perSitePreferenceValueForGeolocationSetting:(long long)arg1;
- (void)_removePermissionsPassingTest:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)_isDateLessThanOneDayAgo:(id)arg1;
- (void)setGeolocationSetting:(long long)arg1 forDomain:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setDefaultGeolocationSetting:(long long)arg1;
- (void)removeAllTemporaryPermissions;
- (void)removeAllPermissions;
- (void)removeTemporaryPermissionsAddedAfterDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removePermissionsAddedAfterDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

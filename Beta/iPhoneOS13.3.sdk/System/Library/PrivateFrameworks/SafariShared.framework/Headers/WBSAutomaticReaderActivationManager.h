/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <SafariShared/WBSPerSitePreferenceManager.h>

@class NSString, WBSPerSitePreference, WBSPerSitePreferencesSQLiteStore;

@interface WBSAutomaticReaderActivationManager : WBSPerSitePreferenceManager

{
    WBSPerSitePreferencesSQLiteStore *_perSitePreferencesStore;
    WBSPerSitePreference *_readerPreference;
}

@property (nonatomic, readonly) WBSPerSitePreference *readerPreference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) WBSPerSitePreferencesSQLiteStore *perSitePreferencesStore;

- (id)init;
- (id)preferences;
- (id)initWithPerSitePreferencesStore:(id)arg1;
- (void)didUpdatePreference:(id)arg1 toValue:(id)arg2 forDomain:(id)arg3;
- (id)onValueForPreference:(id)arg1;
- (long long)preferencesStoreKeyForPreference:(id)arg1;
- (id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)arg1;
- (id)offValueForPreference:(id)arg1;
- (id)valuesForPreference:(id)arg1;
- (id)localizedStringForValue:(id)arg1 inPreference:(id)arg2;
- (void)getAutomaticReaderEnabledForDomain:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)getAutomaticReaderEnabledByDefaultUsingBlock:(CDUnknownBlockType)arg1;
- (void)_submitOptInOutStateForAnalyticsGivenAutomaticReaderIsNotGloballyEnabled;
- (void)getAutomaticReaderStateForDomain:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)setAutomaticReaderEnabled:(_Bool)arg1 forDomain:(id)arg2;
- (void)setAutomaticReaderEnabledByDefault:(_Bool)arg1 removingExistingPreferencesForSites:(_Bool)arg2;
- (void)submitOptInOutStateForAnalytics;

@end

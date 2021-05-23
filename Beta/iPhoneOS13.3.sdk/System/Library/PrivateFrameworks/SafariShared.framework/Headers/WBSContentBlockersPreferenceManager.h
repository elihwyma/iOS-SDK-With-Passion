/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <SafariShared/WBSPerSitePreferenceManager.h>

@class NSString, WBSPerSitePreference, WBSPerSitePreferencesSQLiteStore;

@interface WBSContentBlockersPreferenceManager : WBSPerSitePreferenceManager

{
    WBSPerSitePreferencesSQLiteStore *_perSitePreferencesStore;
    WBSPerSitePreference *_contentBlockersPreference;
}

@property (nonatomic, readonly) WBSPerSitePreference *contentBlockersPreference;
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
- (void)getContentBlockersEnabledStateForDomain:(id)arg1 withTimeout:(double)arg2 fallbackEnabledState:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end

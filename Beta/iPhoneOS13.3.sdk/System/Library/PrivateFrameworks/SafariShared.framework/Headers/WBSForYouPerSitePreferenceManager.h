/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <SafariShared/WBSPerSitePreferenceManager.h>

@class NSString, WBSPerSitePreference, WBSPerSitePreferencesSQLiteStore;

@interface WBSForYouPerSitePreferenceManager : WBSPerSitePreferenceManager

{
    WBSPerSitePreferencesSQLiteStore *_preferencesStore;
    WBSPerSitePreference *_preference;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) WBSPerSitePreferencesSQLiteStore *perSitePreferencesStore;

- (id)init;
- (id)preferences;
- (id)initWithPerSitePreferencesStore:(id)arg1;
- (long long)preferencesStoreKeyForPreference:(id)arg1;
- (id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)arg1;
- (id)valuesForPreference:(id)arg1;
- (id)localizedStringForValue:(id)arg1 inPreference:(id)arg2;
- (void)setPreferenceValue:(long long)arg1 forURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)allowedForYouRecommendationsFromRecommendations:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <SafariShared/WBSPerSitePreferenceManager.h>

@class NSString, WBSPerSitePreference, WBSPerSitePreferencesSQLiteStore;

@interface WBSPageZoomPreferenceManager : WBSPerSitePreferenceManager

{
    WBSPerSitePreferencesSQLiteStore *_perSitePreferencesStore;
    WBSPerSitePreference *_pageZoomPreference;
}

@property (nonatomic, readonly) WBSPerSitePreference *pageZoomPreference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) WBSPerSitePreferencesSQLiteStore *perSitePreferencesStore;

+ (id)pageZoomFactors;

- (id)preferences;
- (id)initWithPerSitePreferencesStore:(id)arg1;
- (void)didUpdatePreference:(id)arg1 toValue:(id)arg2 forDomain:(id)arg3;
- (long long)preferencesStoreKeyForPreference:(id)arg1;
- (id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)arg1;
- (id)valuesForPreference:(id)arg1;
- (id)localizedStringForValue:(id)arg1 inPreference:(id)arg2;
- (void)getPageZoomFactorForURL:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)zoomInOnURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)zoomOutOnURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)resetZoomLevelOnURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getAvailableActionsForURL:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)removePageZoomPreferencesForHostnames:(id)arg1;
- (void)removeAllPageZoomPreferences;
- (double)_pageZoomStepToZoomFactor:(long long)arg1;
- (void)_getDefaultZoomStep:(CDUnknownBlockType)arg1;
- (void)_getZoomStepForDomain:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_incrementOrDecreaseZoomStep:(_Bool)arg1 forURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)_canChangePageZoom:(_Bool)arg1 fromStep:(long long)arg2;

@end

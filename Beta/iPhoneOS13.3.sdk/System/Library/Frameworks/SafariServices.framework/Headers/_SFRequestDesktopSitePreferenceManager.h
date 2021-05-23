/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <WebUI/WBSPerSitePreferenceManager.h>

@class NSMutableSet, NSString, WBSPerSitePreference, WBSPerSitePreferencesSQLiteStore, _SFRequestDesktopSiteQuirksManager;

@interface _SFRequestDesktopSitePreferenceManager : WBSPerSitePreferenceManager

{
    WBSPerSitePreferencesSQLiteStore *_perSitePreferencesStore;
    _SFRequestDesktopSiteQuirksManager *_quirksManager;
    NSMutableSet *_observers;
    _Bool _clientPrefersMobileUserAgentByDefault;
    WBSPerSitePreference *_requestDesktopSitePreference;
}

@property (nonatomic, readonly) WBSPerSitePreference *requestDesktopSitePreference;
@property (nonatomic) _Bool clientPrefersMobileUserAgentByDefault;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) WBSPerSitePreferencesSQLiteStore *perSitePreferencesStore;

- (id)init;
- (void)dealloc;
- (id)preferences;
- (void)didUpdatePreference:(id)arg1 toValue:(id)arg2 forDomain:(id)arg3;
- (id)initWithPerSitePreferencesStore:(id)arg1 quirksManager:(id)arg2;
- (void)_requestDesktopSitePerSitePreferenceDidChange:(id)arg1;
- (long long)_defaultPreferenceValue;
- (void)getValueOfPreference:(id)arg1 forDomain:(id)arg2 withTimeout:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)getDefaultPreferenceValueIfNotCustomizedForPreference:(id)arg1 domain:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getAllDomainsConfiguredForPreference:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_notifyObserversOfPerSitePreferenceDomainValuesUpdate;
- (void)_notifyObserversOfPerSitePreferenceDefaultValueUpdate;
- (void)getDefaultPreferenceValueForPreference:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getAllRequestDesktopSitePerSitePreferenceValues:(CDUnknownBlockType)arg1;
- (id)onValueForPreference:(id)arg1;
- (long long)preferencesStoreKeyForPreference:(id)arg1;
- (id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)arg1;
- (id)offValueForPreference:(id)arg1;
- (void)addRequestDesktopSitePerSitePreferenceObserver:(id)arg1;
- (void)removeRequestDesktopSitePerSitePreferenceObserver:(id)arg1;
- (void)getRequestDesktopSitePreferenceForDomain:(id)arg1 withTimeout:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)valuesForPreference:(id)arg1;
- (id)localizedStringForValue:(id)arg1 inPreference:(id)arg2;

@end

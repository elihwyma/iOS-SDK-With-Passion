/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <WebUI/WBSPageZoomPreferenceManager.h>

@interface _SFPageZoomPreferenceManager : WBSPageZoomPreferenceManager

+ (id)sharedManager;

- (void)dealloc;
- (id)initWithPerSitePreferencesStore:(id)arg1;
- (void)setValue:(id)arg1 ofPreference:(id)arg2 forDomain:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_didRemoveHostnames:(id)arg1;
- (void)_historyWasCleared:(id)arg1;
- (void)setDefaultValue:(id)arg1 ofPreference:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removePreferenceValuesForDomains:(id)arg1 fromPreference:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

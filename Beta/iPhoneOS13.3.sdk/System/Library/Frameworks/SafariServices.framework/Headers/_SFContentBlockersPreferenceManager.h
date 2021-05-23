/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <WebUI/WBSContentBlockersPreferenceManager.h>

@class NSString;

@interface _SFContentBlockersPreferenceManager : WBSContentBlockersPreferenceManager

{
    _Bool _hasEnabledContentBlockers;
}

@property (nonatomic, readonly) _Bool hasEnabledContentBlockers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)contentBlockerManagerExtensionListDidChange:(id)arg1;
- (id)initWithPerSitePreferencesStore:(id)arg1;
- (void)_checkForContentBlockers;
- (void)didUpdatePreference:(id)arg1 toValue:(id)arg2 forDomain:(id)arg3;

@end

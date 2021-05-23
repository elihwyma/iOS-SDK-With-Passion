/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSNumber, _SFPerSitePreferencesVendor, _SFReloadOptionsController;

@interface _SFNavigationUtilitiesManager : NSObject

{
    _SFPerSitePreferencesVendor *_preferencesVendor;
    NSNumber *_cachedPlayingPauseQuirkEnabled;
    NSNumber *_cachedPerDocumentAutoplayBehaviorQuirkEnabled;
    _SFReloadOptionsController *_reloadOptionsController;
    unsigned long long _persona;
}

@property (weak, nonatomic) _SFReloadOptionsController *reloadOptionsController;
@property (nonatomic) unsigned long long persona;

- (void)websitePoliciesForURL:(id)arg1 isForMainFrameNavigation:(_Bool)arg2 navigationType:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_applyAutoplayQuirksToWebsitePolicies:(id)arg1 desktopSiteSetting:(long long)arg2;
- (_Bool)_shouldOverrideUserAgentSettingForFacebookAuthURL:(id)arg1;
- (id)initWithPerSitePreferencesVendor:(id)arg1;

@end

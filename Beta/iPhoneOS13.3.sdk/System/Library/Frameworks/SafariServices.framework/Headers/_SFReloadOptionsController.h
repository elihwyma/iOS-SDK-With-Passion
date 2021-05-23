/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSMutableSet, NSNumber, NSString, WKWebView, _SFInjectedJavaScriptController, _SFRequestDesktopSitePreferenceManager;

@interface _SFReloadOptionsController : NSObject

{
    _SFRequestDesktopSitePreferenceManager *_perSitePreferenceManager;
    NSDictionary *_perSitePreferenceValues;
    NSNumber *_requestDesktopSiteDefaultValue;
    NSMutableDictionary *_domainToUserAgentPolicyMap;
    NSMutableSet *_domainsOverridenAsMobile;
    WKWebView *_webView;
    _Bool _tryUsingMobileIfPossible;
    _SFInjectedJavaScriptController *_activityJSController;
    long long _effectiveContentMode;
}

@property (nonatomic, readonly) _SFInjectedJavaScriptController *activityJSController;
@property (nonatomic, readonly) _Bool loadedUsingDesktopUserAgent;
@property (nonatomic) _Bool tryUsingMobileIfPossible;
@property (nonatomic) long long effectiveContentMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)invalidate;
- (void)didUpdateRequestDesktopSiteDefaultValue:(long long)arg1;
- (void)didUpdateRequestDesktopSitePerSitePreference:(id)arg1;
- (void)requestStandardSite;
- (void)requestDesktopSite;
- (void)customUserAgentSettingForMainFrameURL:(id)arg1 withTimeout:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithWebView:(id)arg1 activityJSController:(id)arg2 perSitePreferenceManager:(id)arg3;
- (void)logCompletedPageloadToDifferentialPrivacy:(id)arg1;
- (void)requestDesktopSiteWithURL:(id)arg1;
- (void)_loadPerSitePreferences;
- (_Bool)_updateSettingSource:(unsigned long long)arg1 domain:(id)arg2;
- (void)_overrideSettingIfNeeded:(long long)arg1 source:(unsigned long long)arg2 domain:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)didMarkURLAsNeedingDesktopUserAgent:(id)arg1;
- (void)didMarkURLAsNeedingStandardUserAgent:(id)arg1;
- (id)customUserAgentForSetting:(long long)arg1;
- (id)customNavigatorPlatformForSetting:(long long)arg1;

@end

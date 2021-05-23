/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WKWebpagePreferences : NSObject

{
    struct ObjectStorage<API::WebsitePolicies> _websitePolicies;
}

@property (nonatomic) long long preferredContentMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) struct Object *_apiObject;

+ (id)defaultPreferences;

- (id)init;
- (void)dealloc;
- (id)_customUserAgent;
- (void)_setCustomUserAgent:(id)arg1;
- (id)_websiteDataStore;
- (void)_setWebsiteDataStore:(id)arg1;
- (void)_setContentBlockersEnabled:(_Bool)arg1;
- (_Bool)_contentBlockersEnabled;
- (void)_setAllowedAutoplayQuirks:(unsigned long long)arg1;
- (unsigned long long)_allowedAutoplayQuirks;
- (void)_setAutoplayPolicy:(long long)arg1;
- (long long)_autoplayPolicy;
- (void)_setDeviceOrientationAndMotionAccessPolicy:(unsigned long long)arg1;
- (unsigned long long)_deviceOrientationAndMotionAccessPolicy;
- (void)_setPopUpPolicy:(unsigned long long)arg1;
- (unsigned long long)_popUpPolicy;
- (id)_customHeaderFields;
- (void)_setCustomHeaderFields:(id)arg1;
- (void)_setCustomJavaScriptUserAgentAsSiteSpecificQuirks:(id)arg1;
- (id)_customJavaScriptUserAgentAsSiteSpecificQuirks;
- (void)_setCustomNavigatorPlatform:(id)arg1;
- (id)_customNavigatorPlatform;
- (_Bool)_allowSiteSpecificQuirksToOverrideCompatibilityMode;
- (void)_setAllowSiteSpecificQuirksToOverrideCompatibilityMode:(_Bool)arg1;
- (id)_applicationNameForUserAgentWithModernCompatibility;
- (void)_setApplicationNameForUserAgentWithModernCompatibility:(id)arg1;

@end

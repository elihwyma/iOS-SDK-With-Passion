/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, WKWebpagePreferences, WKWebsiteDataStore;

@interface _WKWebsitePolicies : NSObject

{
    struct RetainPtr<WKWebpagePreferences> _webpagePreferences;
}

@property (nonatomic, readonly) WKWebpagePreferences *webpagePreferences;
@property (nonatomic) _Bool contentBlockersEnabled;
@property (nonatomic) unsigned long long allowedAutoplayQuirks;
@property (nonatomic) long long autoplayPolicy;
@property (copy, nonatomic) NSDictionary *customHeaderFields;
@property (nonatomic) unsigned long long popUpPolicy;
@property (retain, nonatomic) WKWebsiteDataStore *websiteDataStore;
@property (copy, nonatomic) NSString *customUserAgent;
@property (copy, nonatomic) NSString *customJavaScriptUserAgentAsSiteSpecificQuirks;
@property (copy, nonatomic) NSString *customNavigatorPlatform;
@property (nonatomic) unsigned long long deviceOrientationAndMotionAccessPolicy;

- (id)init;
- (id)description;
- (id).cxx_construct;
- (struct Object *)_apiObject;

@end

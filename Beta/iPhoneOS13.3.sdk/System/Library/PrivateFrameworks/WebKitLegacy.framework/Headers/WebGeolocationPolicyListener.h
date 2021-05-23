/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebGeolocationPolicyListener : NSObject

{
    struct RefPtr<WebCore::Geolocation, WTF::DumbPtrTraits<WebCore::Geolocation>> _geolocation;
    struct RetainPtr<WebView> _webView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id).cxx_construct;
- (void)allow;
- (void)deny;
- (_Bool)shouldClearCache;
- (void)denyOnlyThisRequest;
- (id)initWithGeolocation:(struct Geolocation *)arg1 forWebView:(id)arg2;

@end

/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class WKGeolocationProviderIOS;

@protocol WKProcessGroupDelegate;

@interface WKProcessGroup : NSObject

{
    struct RefPtr<WebKit::WebProcessPool, WTF::DumbPtrTraits<WebKit::WebProcessPool>> _processPool;
    struct WeakObjCPtr<id<WKProcessGroupDelegate>> _delegate;
    struct RetainPtr<WKGeolocationProviderIOS> _geolocationProvider;
}

@property (readonly) struct OpaqueWKContext *_contextRef;
@property (readonly) WKGeolocationProviderIOS *_geolocationProvider;
@property id <WKProcessGroupDelegate> delegate;

- (id)init;
- (id).cxx_construct;
- (id)initWithInjectedBundleURL:(id)arg1;
- (id)initWithInjectedBundleURL:(id)arg1 andCustomClassesForParameterCoder:(id)arg2;
- (void)_setAllowsSpecificHTTPSCertificate:(id)arg1 forHost:(id)arg2;

@end

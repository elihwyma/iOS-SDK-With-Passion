/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WKGeolocationProviderIOS : NSObject

{
    struct RefPtr<WebKit::WebGeolocationManagerProxy, WTF::DumbPtrTraits<WebKit::WebGeolocationManagerProxy>> _geolocationManager;
    struct RetainPtr<id<_WKGeolocationCoreLocationProvider>> _coreLocationProvider;
    _Bool _isWebCoreGeolocationActive;
    struct RefPtr<WebKit::WebGeolocationPosition, WTF::DumbPtrTraits<WebKit::WebGeolocationPosition>> _lastActivePosition;
    struct Vector<GeolocationRequestData, 0, WTF::CrashOnOverflow, 16> _requestsWaitingForCoreLocationAuthorization;
}

- (id)init;
- (id).cxx_construct;
- (id)initWithProcessPool:(struct WebProcessPool *)arg1;
- (void)decidePolicyForGeolocationRequestFromOrigin:(struct SecurityOrigin *)arg1 frame:(struct WebFrameProxy *)arg2 completionHandler:(Function_da50b38b *)arg3 view:(id)arg4;
- (void)_startUpdating;
- (void)_stopUpdating;
- (void)_setEnableHighAccuracy:(_Bool)arg1;
- (void)geolocationAuthorizationGranted;
- (void)geolocationAuthorizationDenied;
- (void)positionChanged:(id)arg1;
- (void)errorOccurred:(id)arg1;
- (void)resetGeolocation;

@end

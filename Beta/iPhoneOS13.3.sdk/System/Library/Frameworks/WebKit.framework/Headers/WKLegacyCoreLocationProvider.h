/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol _WKGeolocationCoreLocationListener;

__attribute__((visibility("hidden")))
@interface WKLegacyCoreLocationProvider : NSObject

{
    id <_WKGeolocationCoreLocationListener> _listener;
    struct RetainPtr<WebGeolocationCoreLocationProvider> _provider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)stop;
- (void)start;
- (id).cxx_construct;
- (void)setListener:(id)arg1;
- (void)setEnableHighAccuracy:(_Bool)arg1;
- (void)requestGeolocationAuthorization;
- (void)geolocationAuthorizationGranted;
- (void)geolocationAuthorizationDenied;
- (void)positionChanged:(struct GeolocationPosition *)arg1;
- (void)errorOccurred:(id)arg1;
- (void)resetGeolocation;

@end

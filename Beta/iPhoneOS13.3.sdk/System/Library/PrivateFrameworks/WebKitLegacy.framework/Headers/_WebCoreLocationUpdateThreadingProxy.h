/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <Foundation/NSObject.h>

@class WebGeolocationProviderIOS;

__attribute__((visibility("hidden")))
@interface _WebCoreLocationUpdateThreadingProxy : NSObject

{
    WebGeolocationProviderIOS *_provider;
}

- (id)initWithProvider:(id)arg1;
- (void)geolocationAuthorizationGranted;
- (void)geolocationAuthorizationDenied;
- (void)positionChanged:(struct GeolocationPosition *)arg1;
- (void)errorOccurred:(id)arg1;
- (void)resetGeolocation;

@end

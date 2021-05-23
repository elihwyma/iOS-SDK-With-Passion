/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@protocol WebGeolocationCoreLocationUpdateListener

- (unsigned short)geolocationAuthorizationGranted;
- (unsigned short)geolocationAuthorizationDenied;
- (unsigned short)positionChanged: /* Error: Ran out of types for this method. */;
- (unsigned short)errorOccurred: /* Error: Ran out of types for this method. */;
- (unsigned short)resetGeolocation;

@end

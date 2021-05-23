/*
 Image: /System/Library/PrivateFrameworks/SensorKitUI.framework/SensorKitUI
 */

#import <SensorKitUI/Swift-Protocol.h>

@class NSDictionary;

@protocol SRAuthorizationStore <Swift>

@property (copy, readonly) NSDictionary *authorizationValues;
@property (copy, readonly) NSDictionary *lastModifiedAuthorizationTimes;

- (unsigned short)addDelegate: /* Error: Ran out of types for this method. */;
- (unsigned short)removeDelegate: /* Error: Ran out of types for this method. */;
- (unsigned short)serviceAuthorized:forBundleId: /* Error: Ran out of types for this method. */;
- (unsigned short)serviceAuthorized: /* Error: Ran out of types for this method. */;

@end

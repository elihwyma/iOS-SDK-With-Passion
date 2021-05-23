/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Navigation/Swift-Protocol.h>

@protocol MNSessionUpdateManagerDelegate <Swift>

- (unsigned short)updateManager:willSendTransitUpdateRequests: /* Error: Ran out of types for this method. */;
- (unsigned short)updateManager:didReceiveTransitUpdateResponse: /* Error: Ran out of types for this method. */;
- (unsigned short)updateManager:willSendTransitUpdateRequestForRouteIDs: /* Error: Ran out of types for this method. */;
- (unsigned short)updateManager:didReceiveTransitUpdates: /* Error: Ran out of types for this method. */;
- (unsigned short)updateManager:didReceiveTransitError: /* Error: Ran out of types for this method. */;
- (unsigned short)updateManager:willSendETARequest: /* Error: Ran out of types for this method. */;
- (unsigned short)updateManager:didReceiveETAResponse:toRequest: /* Error: Ran out of types for this method. */;
- (unsigned short)updateManager:didUpdateETAForRouteInfo: /* Error: Ran out of types for this method. */;
- (unsigned short)updateManager:didReceiveETAError: /* Error: Ran out of types for this method. */;
- (unsigned short)wantsETAUpdates;
- (unsigned short)routeInfoForUpdateManager: /* Error: Ran out of types for this method. */;
- (unsigned short)userLocationForUpdateManager: /* Error: Ran out of types for this method. */;

@end

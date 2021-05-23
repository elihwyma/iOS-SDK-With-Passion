/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Navigation/Swift-Protocol.h>

@protocol MNRouteRefreshPolicyRules <Swift>

@property (nonatomic, readonly) unsigned long long policy;
@property (nonatomic, readonly) _Bool canWakeClientForUpdates;
@property (nonatomic, readonly) _Bool canWakeDeviceForUpdates;

- (unsigned short)canMakeNetworkRequestsForDestination:atDate: /* Error: Ran out of types for this method. */;
- (unsigned short)timeIntervalForDestinationRefresh:lastUpdate: /* Error: Ran out of types for this method. */;
- (unsigned short)maxTimeIntervalFromNowForDestinationRefresh:fromDate: /* Error: Ran out of types for this method. */;

@end

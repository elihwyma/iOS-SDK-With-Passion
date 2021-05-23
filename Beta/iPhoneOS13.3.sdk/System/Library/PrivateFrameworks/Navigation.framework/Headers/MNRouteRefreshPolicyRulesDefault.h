/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MNRouteRefreshPolicyRulesDefault : NSObject

{
    unsigned long long _policy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long policy;
@property (nonatomic, readonly) _Bool canWakeClientForUpdates;
@property (nonatomic, readonly) _Bool canWakeDeviceForUpdates;

- (id)init;
- (_Bool)canMakeNetworkRequestsForDestination:(id)arg1 atDate:(id)arg2;
- (double)timeIntervalForDestinationRefresh:(id)arg1 lastUpdate:(id)arg2;
- (double)maxTimeIntervalFromNowForDestinationRefresh:(id)arg1 fromDate:(id)arg2;

@end

/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/HMAccessoryProfile.h>

@class NSArray, NSString;

@protocol HMNetworkRouterProfileDelegate;

@interface HMNetworkRouterProfile : HMAccessoryProfile

{
    id <HMNetworkRouterProfileDelegate> _delegate;
}

@property (readonly) unsigned long long networkStatus;
@property (weak) id <HMNetworkRouterProfileDelegate> delegate;
@property (readonly, getter=isSatellite) _Bool satellite;
@property (readonly) NSArray *satelliteProfiles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)services;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (id)initWithNetworkRouterProfile:(id)arg1;
- (id)networkRouterProfile;
- (id)identifiersForSatelliteProfiles;
- (void)setIdentifiersForSatelliteProfiles:(id)arg1;
- (void)routerProfileDidUpdateIdentifiersForSatellites:(id)arg1;
- (void)routerProfileDidUpdateNetworkStatus:(id)arg1;

@end

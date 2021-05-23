/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/_HMAccessoryProfile.h>

@class NSSet;

@protocol _HMNetworkRouterProfileDelegate;

__attribute__((visibility("hidden")))
@interface _HMNetworkRouterProfile : _HMAccessoryProfile

{
    _Bool _satellite;
    unsigned long long _networkStatus;
    NSSet *_identifiersForSatelliteProfiles;
    id <_HMNetworkRouterProfileDelegate> _delegate;
}

@property (readonly) unsigned long long networkStatus;
@property (readonly, getter=isSatellite) _Bool satellite;
@property (readonly) NSSet *identifiersForSatelliteProfiles;
@property (weak, nonatomic) id <_HMNetworkRouterProfileDelegate> delegate;

+ (_Bool)supportsSecureCoding;

- (id)initWithCoder:(id)arg1;
- (id)messageTargetUUID;
- (id)messageReceiveQueue;
- (void)_registerNotificationHandlers;
- (void)handleRuntimeStateUpdate:(id)arg1;
- (id)messageDestination;
- (void)_handleNetworkStatusUpdated:(id)arg1;
- (void)_handleSatelliteProfilesUpdated:(id)arg1;
- (void)setIdentifiersForSatelliteProfiles:(id)arg1;
- (void)setNetworkStatus:(unsigned long long)arg1;
- (_Bool)checkForUpdatedIdentifiersForSatellites:(id)arg1;
- (_Bool)checkForUpdatedNetworkStatus:(unsigned long long)arg1;
- (void)__handleNetworkStatusUpdated:(id)arg1;
- (void)setSatellite:(_Bool)arg1;

@end

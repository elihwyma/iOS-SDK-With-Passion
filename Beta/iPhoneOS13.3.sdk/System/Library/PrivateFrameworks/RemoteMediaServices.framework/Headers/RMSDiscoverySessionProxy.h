/*
 Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

#import <RemoteMediaServices/RMSSessionProxy.h>

@class NSArray, NSString, RMSIDSClient;

@protocol RMSDiscoverySessionDelegate;

__attribute__((visibility("hidden")))
@interface RMSDiscoverySessionProxy : RMSSessionProxy

{
    RMSIDSClient *_idsClient;
    long long _retryRate;
    _Bool _discovering;
    _Bool _wifiAvailable;
    _Bool _networkAvailable;
    id <RMSDiscoverySessionDelegate> _delegate;
    long long _discoveryTypes;
    NSArray *_availableServices;
    NSArray *_pairedNetworkNames;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <RMSDiscoverySessionDelegate> delegate;
@property (nonatomic) long long discoveryTypes;
@property (nonatomic, readonly) NSArray *availableServices;
@property (nonatomic, readonly, getter=isNetworkAvailable) _Bool networkAvailable;
@property (retain, nonatomic) NSArray *pairedNetworkNames;

- (id)init;
- (void)dealloc;
- (void)endDiscovery;
- (void)beginDiscovery;
- (void)_availableServicesDidUpdateNotification:(id)arg1;
- (void)_handleSessionDidEndNotification:(id)arg1;
- (void)_companionAvailabilityDidChange:(id)arg1;
- (void)_wifiAvailabilityDidChange:(id)arg1;
- (void)_updateNetworkAvailability;
- (void)heartbeatDidFail;

@end

/*
 Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableSet, NSString, Reachability;

@protocol RMSDiscoverySessionDelegate;

__attribute__((visibility("hidden")))
@interface RMSLocalDiscoverySession : NSObject

{
    long long _discoveryTypes;
    Reachability *_reachability;
    NSMutableSet *_availableServices;
    NSArray *_providers;
    _Bool _networkAvailable;
    id <RMSDiscoverySessionDelegate> _delegate;
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
- (void)serviceProvider:(id)arg1 serviceDidBecomeAvailable:(id)arg2;
- (void)serviceProvider:(id)arg1 serviceDidBecomeUnavailable:(id)arg2;
- (void)_handleHSGroupIDDidChangeNotification:(id)arg1;
- (void)_handleReachabilityChangedNotification:(id)arg1;
- (void)_enableProviders;
- (void)_updateWifiAvailability;
- (id)_providerForDiscoveryType:(long long)arg1;

@end

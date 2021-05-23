/*
 Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

#import <RemoteMediaServices/RMSBonjourServiceProvider.h>

@class NSArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface RMSPairingServiceProvider : RMSBonjourServiceProvider

{
    NSMutableDictionary *_unmonitoredServices;
    NSArray *_pairedNetworkNames;
}

@property (retain, nonatomic) NSArray *pairedNetworkNames;

- (id)init;
- (void)dealloc;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(_Bool)arg3;
- (id)searchType;
- (long long)serviceDiscoverySource;
- (long long)serviceFlagsFromTXTDictionary:(id)arg1;

@end

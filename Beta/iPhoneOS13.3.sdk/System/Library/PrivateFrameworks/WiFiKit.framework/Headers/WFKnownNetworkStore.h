/*
 Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

#import <Foundation/NSObject.h>

@class NSSet, WFClient;

@protocol OS_dispatch_queue;

@interface WFKnownNetworkStore : NSObject

{
    _Bool _hasHS20Networks;
    NSObject<OS_dispatch_queue> *_knownNetworksQueue;
    NSSet *_knownNetworks;
    NSSet *_managedNetworkNames;
    WFClient *_wifiClient;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *knownNetworksQueue;
@property (retain, nonatomic) NSSet *knownNetworks;
@property (retain, nonatomic) NSSet *managedNetworkNames;
@property (nonatomic) _Bool hasHS20Networks;
@property (weak, nonatomic) WFClient *wifiClient;

+ (id)sharedInstance;

- (id)init;
- (id)initWithClient:(id)arg1;
- (void)_forceUpdateKnownNetworksAndWait:(_Bool)arg1;
- (void)_clientServerRestarted:(id)arg1;
- (void)_preferredNetworksDidChange:(id)arg1;
- (id)_networkProfileFromNetworkAttributes:(id)arg1;
- (void)_forceUpdateKnownNetworks;
- (id)networkProfileWithSSID:(id)arg1 securityMode:(long long)arg2;
- (void)updateKnownNetworks;
- (id)networkProfileForNetwork:(id)arg1;
- (id)networkProfileWithSSID:(id)arg1;
- (_Bool)saveNetworkProfile:(id)arg1 forReason:(unsigned long long)arg2 error:(out id *)arg3;
- (_Bool)removeNetworkProfile:(id)arg1 error:(id *)arg2;
- (_Bool)setAutoJoinEnabled:(_Bool)arg1 forProfile:(id)arg2 error:(out id *)arg3;
- (_Bool)networkMatchesManagedProfile:(id)arg1;
- (id)getGeoTagsForNetworkProfile:(id)arg1;
- (id)getScoreForNetworkProfile:(id)arg1;

@end

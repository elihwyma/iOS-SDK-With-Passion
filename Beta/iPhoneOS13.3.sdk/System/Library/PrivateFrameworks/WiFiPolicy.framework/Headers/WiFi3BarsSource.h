/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, NSURL, TBDataSourceMediator, WiFi3BarsTileFetcher;

@protocol OS_dispatch_queue;

@interface WiFi3BarsSource : NSObject

{
    CDUnknownBlockType changeHandler;
    CDUnknownBlockType relevancyHandler;
    unsigned long long _cacheExpirationInDays;
    NSMutableDictionary *_networks;
    NSObject<OS_dispatch_queue> *_queue;
    NSURL *_storeURL;
    TBDataSourceMediator *_sourceMediator;
    WiFi3BarsTileFetcher *_tileFetcher;
}

@property (retain, nonatomic) NSMutableDictionary *networks;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) NSURL *storeURL;
@property (retain, nonatomic) TBDataSourceMediator *sourceMediator;
@property (retain, nonatomic) WiFi3BarsTileFetcher *tileFetcher;
@property (nonatomic) unsigned long long cacheExpirationInDays;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) CDUnknownBlockType changeHandler;
@property (copy, nonatomic) CDUnknownBlockType relevancyHandler;

- (void)prune3BarsNetworks:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)relevantNetworks;
- (void)fetchCandidateNetworksMatchingBSSIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_descriptorForType:(unsigned long long)arg1;
- (void)fetch3BarsNetworksForLocation:(id)arg1 forceRemote:(_Bool)arg2 trigger:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_handleRemoteFetchResponse:(id)arg1;
- (id)_matchSearchBSSIDs:(id)arg1 toResponse:(id)arg2;
- (id)initWithChangeHandler:(CDUnknownBlockType)arg1 localStoreType:(unsigned long long)arg2;
- (void)fetch3BarsNetworksFor:(id)arg1;
- (void)fetch3BarsNetworksPredictedForLocation:(id)arg1 duration:(double)arg2 maxLocations:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)forceFetch3BarsNetworkMatchingBSSID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)submitCacheAnalyticsEvent;

@end

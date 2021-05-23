/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSArray, NSMutableArray, NSMutableSet, NWNetworkOfInterestManager, SSPromise;

@protocol OS_dispatch_queue;

@interface SSNetworkQualityInquiry : NSObject

{
    NSArray *_lastKnownReports;
    long long _lastReportRefreshTimestamp;
    SSPromise *_currentInvestigation;
    NWNetworkOfInterestManager *_manager;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_knownNetworks;
    NSMutableArray *_knownNetworksReadyHandlers;
}

@property (nonatomic, readonly) NWNetworkOfInterestManager *manager;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSMutableSet *knownNetworks;
@property (retain, nonatomic) NSMutableArray *knownNetworksReadyHandlers;

+ (id)sharedInstance;
+ (_Bool)isEntitled;

- (id)init;
- (void)dealloc;
- (id)investigateNetworks;
- (void)performWhenKnownNetworksReady:(CDUnknownBlockType)arg1;
- (_Bool)areKnownNetworksReady;
- (void)drainKnownNetworksReadyHandlers;
- (void)didStopTrackingNOI:(id)arg1;
- (void)didStartTrackingNOI:(id)arg1;
- (void)didStopTrackingAllNOIs:(id)arg1;

@end

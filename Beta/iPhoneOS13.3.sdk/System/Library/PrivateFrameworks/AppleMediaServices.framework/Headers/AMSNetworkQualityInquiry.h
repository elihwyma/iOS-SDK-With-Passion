/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class AMSPromise, NSArray, NSMutableArray, NSMutableSet, NWNetworkOfInterestManager;

@protocol OS_dispatch_queue;

@interface AMSNetworkQualityInquiry : NSObject

{
    NSArray *_lastKnownReports;
    long long _lastReportRefreshTimestamp;
    AMSPromise *_currentInvestigation;
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
+ (void)updateLastConnectionReportWithTask:(id)arg1;
+ (id)reportForTask:(id)arg1 fromReports:(id)arg2;
+ (_Bool)isEntitled;
+ (id)lastConnectionReport;

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

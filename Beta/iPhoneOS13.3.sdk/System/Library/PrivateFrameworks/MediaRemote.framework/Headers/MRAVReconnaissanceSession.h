/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSObject.h>

@class MRAVEndpoint, MRAVRoutingDiscoverySession, NSArray, NSMutableArray, NSMutableSet, NSSet, NSString;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MRAVReconnaissanceSession : NSObject

{
    double _timeoutTimerTimeout;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableSet *_localMatchingDevicesFound;
    _Bool _useWeakMatching;
    _Bool _returnPartialResults;
    _Bool _searchInProgress;
    _Bool _shouldWaitForUnanimousEndpoints;
    unsigned int _endpointFeatures;
    MRAVRoutingDiscoverySession *_discoverySession;
    NSArray *_matchingLogicalDeviceIDs;
    NSSet *_matchingOutputDeviceUIDsSet;
    NSString *_matchingOutputDeviceGroupID;
    id _discoverySessionCallbackToken;
    CDUnknownBlockType _callback;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    NSObject<OS_dispatch_queue> *_callbackSyncQueue;
    NSMutableSet *_matchingDevicesFound;
    NSMutableArray *_matchingEndpointsFound;
    MRAVEndpoint *_unanimousEndpoint;
    NSArray *_availableOutputDevices;
    NSArray *_availableEndpoints;
    unsigned long long _updatesReceived;
    NSArray *_lastProcessedOutputDevices;
    NSArray *_lastProcessedEndpoints;
}

@property (retain, nonatomic) NSSet *matchingOutputDeviceUIDsSet;
@property (retain, nonatomic) NSString *matchingOutputDeviceGroupID;
@property (retain, nonatomic) MRAVRoutingDiscoverySession *discoverySession;
@property (retain, nonatomic) id discoverySessionCallbackToken;
@property (copy, nonatomic) CDUnknownBlockType callback;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timeoutTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackSyncQueue;
@property (nonatomic) _Bool searchInProgress;
@property (nonatomic) _Bool shouldWaitForUnanimousEndpoints;
@property (retain, nonatomic) NSMutableSet *matchingDevicesFound;
@property (retain, nonatomic) NSMutableArray *matchingEndpointsFound;
@property (retain, nonatomic) MRAVEndpoint *unanimousEndpoint;
@property (retain, nonatomic) NSArray *availableOutputDevices;
@property (retain, nonatomic) NSArray *availableEndpoints;
@property (nonatomic) unsigned long long updatesReceived;
@property (retain, nonatomic) NSArray *lastProcessedOutputDevices;
@property (retain, nonatomic) NSArray *lastProcessedEndpoints;
@property (nonatomic, readonly) NSArray *matchingOutputDeviceUIDs;
@property (nonatomic, readonly) unsigned int endpointFeatures;
@property (nonatomic) _Bool useWeakMatching;
@property (nonatomic) _Bool returnPartialResults;
@property (copy, nonatomic) NSArray *matchingLogicalDeviceIDs;

- (void)dealloc;
- (void)cancelSearch;
- (id)initWithOutputDeviceUIDs:(id)arg1 outputDeviceGroupID:(id)arg2 features:(unsigned int)arg3;
- (void)beginSearchWithTimeout:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_onQueue_timeoutTimerFired;
- (void)_discoverySessionEndpointsChangedCallback:(id)arg1;
- (void)_discoverySessionOutputDevicesChangedCallback:(id)arg1;
- (void)_onQueue_cancelSearch;
- (void)beginSearchWithTimeout:(double)arg1 endpointsCompletion:(CDUnknownBlockType)arg2;
- (void)_processSearchLoop;
- (void)_onQueue_updateCachedOutputDevices:(id)arg1 endpoints:(id)arg2;
- (void)_onQueue_concludeSearch;
- (void)_onQueue_endSearch;

@end

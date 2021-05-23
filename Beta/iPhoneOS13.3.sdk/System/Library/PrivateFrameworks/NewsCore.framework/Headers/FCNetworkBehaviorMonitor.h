/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class FCKeyValueStore, NSArray, NSMutableArray, NSMutableIndexSet, NSString;

@protocol FCOperationThrottler, OS_dispatch_queue;

@interface FCNetworkBehaviorMonitor : NSObject <Swift>

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableArray *_sessions;
    NSMutableIndexSet *_sessionIDsThisLaunch;
    NSMutableArray *_events;
    FCKeyValueStore *_localStore;
    id <FCOperationThrottler> _saveThrottler;
}

@property (copy, nonatomic, readonly) NSArray *sessions;
@property (copy, nonatomic, readonly) NSArray *networkEvents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithCacheDirectory:(id)arg1;
- (void)operationThrottlerPerformOperation:(id)arg1;
- (void)_visitEventGroupsFromDate:(id)arg1 toDate:(id)arg2 block:(CDUnknownBlockType)arg3;
- (_Bool)_shouldFilterNetworkEvent:(id)arg1;
- (void)_sanitizeNetworkEvent:(id)arg1;
- (id)_respondingPOPFromEvent:(id)arg1;
- (int)_cacheStateFromEvent:(id)arg1;
- (void)wifiReachabilityDidChange:(id)arg1;
- (id)initTransient;
- (void)populateTelemetry:(id)arg1 withNetworkEventsFromDate:(id)arg2 toDate:(id)arg3;
- (void)logNetworkEvent:(id)arg1;

@end

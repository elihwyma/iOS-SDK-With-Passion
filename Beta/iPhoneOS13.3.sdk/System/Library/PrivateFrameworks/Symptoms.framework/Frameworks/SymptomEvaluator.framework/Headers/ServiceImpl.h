/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class FlowAnalyticsEngine, NOIAnalyticsEngine, NSMutableDictionary, NSString, NetworkAnalyticsEngine;

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface ServiceImpl : NSObject

{
    FlowAnalyticsEngine *f_engine;
    NetworkAnalyticsEngine *n_engine;
    NOIAnalyticsEngine *noi_engine;
    NSObject<OS_dispatch_semaphore> *svc_sema;
    NSObject<OS_dispatch_queue> *queue;
    NSMutableDictionary *lastAllowedRequests;
    id featureReadyObserver;
    _Bool _isHelper;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)initWithQueue:(id)arg1;
- (void)shutdown;
- (void)performQueryOnEntity:(id)arg1 pred:(id)arg2 sort:(id)arg3 actions:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)setOption:(id)arg1 inScopes:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)getOption:(id)arg1 inScopes:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)resetDataFor:(id)arg1 nameKind:(id)arg2 inScopes:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)createSnapshotFor:(id)arg1 pred:(id)arg2 actions:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)subscribeToNOIsFor:(id)arg1 orPredicate:(id)arg2 options:(id)arg3;
- (void)inquireNOIFor:(id)arg1 orPredicate:(id)arg2 requestedKeys:(id)arg3 options:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)unsubscribeToNOIs:(id)arg1;
- (void)identifierForUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)trainModelAndScore:(_Bool)arg1 lastScoreDate:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)performPersistentStoreHealthCheckWithReply:(CDUnknownBlockType)arg1;
- (void)setUsageOption:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)resetUsageFor:(id)arg1 nameKind:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)getNetworkBitmapsWithNames:(id)arg1 startTime:(unsigned long long)arg2 endTime:(unsigned long long)arg3 Reply:(CDUnknownBlockType)arg4;
- (void)getExpertSystemsStatus:(CDUnknownBlockType)arg1;
- (void)startRNFTestWithOptions:(id)arg1 scenarioName:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)abortRNFTestWithReply:(CDUnknownBlockType)arg1;
- (void)waitForOSLogErrorSymptomWithReply:(CDUnknownBlockType)arg1;
- (void)assertFactString:(id)arg1 module:(id)arg2 asSymptom:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;
- (void)postAWDEvent:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)clientTransactionsRelease;
- (_Bool)assertEntitlement:(id)arg1 entitlement:(id)arg2 orWaiveOnIntent:(id)arg3;
- (void)_serviceReadyCheckPoint;
- (_Bool)_serviceReady;
- (void)_serviceReadyCheckPointRelease;
- (_Bool)_checkRateLimitForConnection:(id)arg1;

@end

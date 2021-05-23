/*
 Image: /System/Library/PrivateFrameworks/C2.framework/C2
 */

#import <Foundation/NSObject.h>

@class C2RoutingTable, C2SessionTLSCache, NSMapTable, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface C2SessionPool : NSObject

{
    _Bool _cleanUp_running;
    _Bool _testBehavior_disableAutomaticCleanup;
    NSObject<OS_dispatch_queue> *_underlyingDelegateQueue;
    NSObject<OS_dispatch_queue> *_sessionCreation_queue;
    NSObject<OS_dispatch_queue> *_cleanUp_queue;
    C2RoutingTable *_routingTable;
    C2SessionTLSCache *_sessionTLSCache;
    NSMapTable *_useCountByObject;
    NSMutableDictionary *_sessionGroupForSessionConfigurationName;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *underlyingDelegateQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sessionCreation_queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cleanUp_queue;
@property (nonatomic) _Bool cleanUp_running;
@property (retain, nonatomic) C2RoutingTable *routingTable;
@property (retain, nonatomic) C2SessionTLSCache *sessionTLSCache;
@property (retain, nonatomic) NSMapTable *useCountByObject;
@property (retain, nonatomic) NSMutableDictionary *sessionGroupForSessionConfigurationName;
@property (nonatomic) _Bool testBehavior_disableAutomaticCleanup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)removeSession:(id)arg1;
- (void)C2Session:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)C2Session:(id)arg1 originalHost:(id)arg2 updatedRoute:(id)arg3;
- (id)createDataTaskWithRequestIdentifer:(id)arg1 request:(id)arg2 options:(id)arg3 delegate:(id)arg4 sessionHandle:(id *)arg5;
- (void)_unsafe_willCreate:(id)arg1;
- (_Bool)_unsafe_isCreating:(id)arg1;
- (void)_unsafe_didCreate:(id)arg1;
- (void)_unsafe_removeSessionGroupIfEmpty:(id)arg1;
- (void)ensureCleanUpRunning;
- (void)_unsafe_removeSession:(id)arg1;
- (_Bool)_cleanUp_job;
- (void)_cleanUp_schedule;
- (_Bool)testBehavior_cleanUp;

@end

/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <Foundation/NSObject.h>

@class BKSHIDEventDeliveryManager, BKSHIDEventObserver, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString, NSXPCConnection;

@protocol BSInvalidatable, OS_dispatch_queue;

@interface BKSEventFocusManager : NSObject

{
    BKSHIDEventObserver *_observer;
    struct os_unfair_lock_s _focusDataLock;
    BKSHIDEventDeliveryManager *_focusDataLock_manager;
    _Bool _focusDataLock_adjustsFocusTargetPID;
    int _focusDataLock_adjustedFocusTargetPID;
    id <BSInvalidatable> _queue_keyCommandRulesAssertion;
    NSMutableSet *_focusDataLock_currentState;
    NSMutableDictionary *_focusDataLock_pendingStatesByPriority;
    NSMutableArray *_focusDataLock_assertions;
    int _pid;
    NSString *_clientIdentifier;
    id <BSInvalidatable> _observingAssertion;
    NSObject<OS_dispatch_queue> *_focusClientQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    unsigned long long _propertyUpdateGeneration;
    _Bool _needsFlush;
    NSXPCConnection *_connection;
    NSMapTable *_infoPerFocusChangeObserver;
    NSSet *_cachedFocusedDeferralProperties;
}

@property (nonatomic) _Bool needsFlush;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSMapTable *infoPerFocusChangeObserver;
@property (retain, nonatomic) NSSet *cachedFocusedDeferralProperties;
@property (nonatomic, readonly) int pid;
@property (copy, nonatomic, readonly) NSString *clientIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)flush;
- (void)deferringResolutionsChanged;
- (id)_initWithManager:(id)arg1 observer:(id)arg2 pid:(int)arg3 clientIdentifier:(id)arg4;
- (void)deferEventsForClientWithProperties:(id)arg1 toClientWithProperties:(id)arg2;
- (void)deferEventsForClientWithProperties:(id)arg1 toClientWithProperties:(id)arg2 withPriority:(int)arg3;
- (void)setSystemAppControlsFocusOnMainDisplay:(_Bool)arg1;
- (void)setForegroundApplicationOnMainDisplay:(id)arg1 pid:(int)arg2;
- (void)_focusClientQueue_deferringResolutionsChanged;
- (id)_queryDeferralResolutions;
- (void)_focusDataLock_updateKeyCommandDispatching;
- (void)_focusDataLock_updateFocusTargetOverride;
- (void)_pruneSet:(id)arg1 ofDeferralsPassingTest:(CDUnknownBlockType)arg2;
- (void)_focusDataLock_rebuildPendingStatesByPriority;
- (void)_focusDataLock_reallyFlushWithSet:(id)arg1;
- (void)_syncObserverState;

@end

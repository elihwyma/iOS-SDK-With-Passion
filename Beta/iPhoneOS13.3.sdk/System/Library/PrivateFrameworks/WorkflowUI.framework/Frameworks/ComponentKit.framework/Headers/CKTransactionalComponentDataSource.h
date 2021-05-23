/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
 */

#import <Foundation/NSObject.h>

@class CKTransactionalComponentDataSourceListenerAnnouncer, CKTransactionalComponentDataSourceState, NSMutableArray, NSString, NSThread;

@protocol OS_dispatch_queue;

@interface CKTransactionalComponentDataSource : NSObject

{
    CKTransactionalComponentDataSourceState *_state;
    CKTransactionalComponentDataSourceListenerAnnouncer *_announcer;
    unordered_map_097a8478 _pendingAsynchronousStateUpdates;
    unordered_map_097a8478 _pendingSynchronousStateUpdates;
    NSMutableArray *_pendingAsynchronousModifications;
    NSThread *_workThreadOverride;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)state;
- (id).cxx_construct;
- (id)initWithConfiguration:(id)arg1;
- (void)addListener:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)applyChangeset:(id)arg1 mode:(unsigned long long)arg2 userInfo:(id)arg3;
- (void)reloadWithMode:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)updateConfiguration:(id)arg1 mode:(unsigned long long)arg2 userInfo:(id)arg3;
- (void)componentScopeHandleWithIdentifier:(int)arg1 rootIdentifier:(int)arg2 didReceiveStateUpdate:(CDUnknownBlockType)arg3 mode:(unsigned long long)arg4;
- (void)didReceiveReflowComponentsRequest;
- (void)_enqueueModification:(id)arg1;
- (void)_startFirstAsynchronousModification;
- (id)_cancelEnqueuedModificationsOfType:(Class)arg1;
- (void)_synchronouslyApplyChange:(id)arg1;
- (void)_processStateUpdates;
- (void)_applyModificationPair:(id)arg1;

@end

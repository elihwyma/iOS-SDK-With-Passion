/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <Foundation/NSObject.h>

@class NSConditionLock, NSMutableSet, PFSerialQueue, PFWeakContainer, PGGraphUpdateManager, PGManager, PHAManager;

@interface PHAGraphManager : NSObject

{
    struct PFDirectMessagingMulticaster *_clientMulticaster;
    NSMutableSet *_clientsWantingUpdates;
    long long _updateManagerSuspendCount;
    _Bool _rebuildInProgress;
    PFSerialQueue *_serializer;
    PGManager *_graphManager;
    PFWeakContainer *_graphMonitor;
    NSConditionLock *_graphLoadedCondition;
    PGGraphUpdateManager *_updateManager;
    PHAManager *_photoAnalysisManager;
}

@property (nonatomic, readonly) PGGraphUpdateManager *updateManager;
@property (retain, nonatomic) PHAManager *photoAnalysisManager;

- (void)dealloc;
- (id)initWithManager:(id)arg1;
- (void)weakReferenceBecameNil:(id)arg1;
- (void)multicasterHasNoReceivers:(id)arg1 invalidateBlock:(CDUnknownBlockType)arg2;
- (void)shutdown;
- (void)unloadGraph;
- (id)statusAsDictionary;
- (void)_graphBecameReady:(id)arg1;
- (_Bool)graphNeedsRebuild;
- (id)registerGraphClient:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (void)unregisterGraphClient:(id)arg1;
- (id)loadGraphWithProgressBlock:(CDUnknownBlockType)arg1;
- (void)performFullRebuildWithProgressBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)performLightWeightRebuildWithProgressBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_performRebuildFullRebuild:(_Bool)arg1 withProgressBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)suspendGraphUpdateAndPerformBlock:(CDUnknownBlockType)arg1;
- (void)_configureGraphManagerWithProgressBlock:(CDUnknownBlockType)arg1;
- (void)_startListeningWithClient:(id)arg1;
- (void)_stopListeningWithClient:(id)arg1;
- (void)_startUpdateManager;
- (void)_stopUpdateManager;

@end

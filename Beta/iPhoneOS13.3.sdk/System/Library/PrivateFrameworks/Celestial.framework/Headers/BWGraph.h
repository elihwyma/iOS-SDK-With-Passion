/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWMemoryPool, NSArray, NSMutableArray, NSMutableDictionary, NSString;

@protocol BWGraphStatusDelegate, OS_dispatch_group, OS_dispatch_queue;

@interface BWGraph : NSObject

{
    NSMutableArray *_nodes;
    NSMutableArray *_sourceNodes;
    NSMutableArray *_sinkNodes;
    NSMutableArray *_connections;
    NSMutableArray *_outputsWithSharedPools;
    NSMutableDictionary *_outputsWithSharedPoolsForAttachedMedia;
    NSMutableArray *_nodesToPrepareConcurrently;
    NSArray *_nodesToPrepareAfterGraphStart;
    NSMutableArray *_deferredPreparePrioritySinks;
    _Bool _deferredNodePrepareCancelled;
    NSMutableArray *_deferredStartSourceNodes;
    _Bool _haveStartedOrCancelledDeferredSourceNodes;
    _Bool _running;
    _Bool _beingConfigured;
    long long _inflightConfigurationID;
    NSObject<OS_dispatch_group> *_sourceNodesStartGroup;
    NSObject<OS_dispatch_group> *_nonDeferredSourceNodesStartGroup;
    NSObject<OS_dispatch_queue> *_sourceStartQueue;
    NSObject<OS_dispatch_group> *_startGroup;
    NSObject<OS_dispatch_group> *_commitGroup;
    _Bool _supportsLiveReconfiguration;
    int _errorStatus;
    id <BWGraphStatusDelegate> _statusDelegate;
    _Bool _classicRetainedBufferCount;
    BWMemoryPool *_memoryPool;
    NSString *_applicationID;
    NSString *_modeDescription;
    NSString *_sourceDescription;
    int _graphStateTransitionTimeoutSeconds;
    unsigned int _configurationQueuePriority;
}

@property int errorStatus;
@property (nonatomic, readonly) _Bool deferredNodePrepareEnabled;
@property (nonatomic, readonly) _Bool supportsLiveReconfiguration;
@property (nonatomic) id <BWGraphStatusDelegate> statusDelegate;
@property (retain, nonatomic) BWMemoryPool *memoryPool;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (_Bool)start:(id *)arg1;
- (_Bool)stop:(id *)arg1;
- (void)beginConfiguration;
- (id)dotString;
- (_Bool)addNode:(id)arg1 error:(id *)arg2;
- (_Bool)connectOutput:(id)arg1 toInput:(id)arg2 pipelineStage:(id)arg3;
- (id)applicationID;
- (void)cancelDeferredSourceNodeStart;
- (void)cancelDeferredNodePrepare;
- (void)waitForStartOrCommitToComplete;
- (void)startDeferredSourceNodesIfNeeded;
- (void)startDeferredNodePrepareIfNeededWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)enableDeferredStartForSourceNode:(id)arg1;
- (_Bool)commitConfigurationWithID:(long long)arg1 error:(id *)arg2;
- (void)notifyWhenNonDeferredSourceNodesHaveStarted:(CDUnknownBlockType)arg1;
- (id)_sourceNodes;
- (id)_sinkNodes;
- (void)enableConcurrentPrepareForNode:(id)arg1;
- (void)setApplicationID:(id)arg1;
- (id)initWithConfigurationQueuePriority:(unsigned int)arg1;
- (void)_resumeInputConnectionsForNodes:(id)arg1 eventsOnly:(_Bool)arg2;
- (void)_getNodesToPrepareSeriallyBeforeGraphStart:(id *)arg1 concurrentlyBeforeGraphStart:(id *)arg2 afterGraphStart:(id *)arg3;
- (void)_suspendInputConnectionsForNodes:(id)arg1;
- (id)_newDispatchGroupForSinksToTransitionToState:(int)arg1;
- (void)_waitForStartOrCommitToComplete;
- (void)_logActiveNodesAfterGraphStopTimeout;
- (void)_logActiveSinkNodesAfterGraphStopTimeout;
- (void)_timedOutWaitingForOperationToCompleteWithDescription:(id)arg1;
- (_Bool)_resolveFormats:(id *)arg1;
- (_Bool)_resolveRetainedBufferCounts:(id *)arg1;
- (_Bool)_prepareNodesWithConfigurationChanges:(id *)arg1;
- (void)_makeParentConfigurationChangesLive;
- (id)_newDispatchGroupForSinksToBecomeLiveWithConfigurationID:(long long)arg1;
- (void)_waitForSourceNodesToStart;
- (id)_reverseDepthFirstEnumeratorWithVertexOrdering:(int)arg1;
- (void)_resolveVideoRetainedBufferCountsForOutput:(id)arg1 forAttachedMediaKey:(id)arg2 outputsWithSharedPools:(id)arg3;
- (id)_nodesInSubgraphOfSinkNode:(id)arg1;
- (id)_depthFirstEnumeratorWithVertexOrdering:(int)arg1;
- (void)enableDeferredPrepareForNodesNotInPathOfSinkNode:(id)arg1;
- (id)modeDescription;
- (void)setModeDescription:(id)arg1;
- (id)sourceDescription;
- (void)setSourceDescription:(id)arg1;
- (id)_breadthFirstEnumerator;
- (id)_reverseBreadthFirstEnumerator;
- (void)_writeDotStringToFile;

@end

/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSObject.h>

@class AXMImageRegistrationNode, AXMSequenceRequestManager, AXMService, AXMTaskDispatcher, AXMVisionEngineCache, NSArray, NSMutableArray, NSString, _AXMVisionEngineAnalysisTask;

@protocol OS_dispatch_queue;

@interface AXMVisionEngine : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_queue_sourceNodes;
    NSMutableArray *_queue_evaluationNodes;
    AXMImageRegistrationNode *_queue_imageRegistrationNode;
    NSMutableArray *_queue_resultHandlers;
    _Bool _queue_shouldNotifyServiceOfEngineConfigChange;
    _AXMVisionEngineAnalysisTask *_queue_currentTask;
    _Bool _prioritySchedulingEnabled;
    _Bool _prioritySchedulingAllowMultipleNodeExecution;
    _Bool _imageRegistrationFilteringEnabled;
    _Bool _diagnosticsEnabled;
    _Bool _disableResultLogging;
    NSString *_identifier;
    long long _maximumQueueSize;
    unsigned long long _thresholdPriority;
    long long _minimumImageRegistrationSignalLevel;
    AXMVisionEngineCache *_cache;
    AXMService *_axMediaUtilsService;
    AXMTaskDispatcher *_taskDispatcher;
    AXMSequenceRequestManager *_sequenceRequestManager;
}

@property (copy) NSString *identifier;
@property (retain, nonatomic) AXMService *axMediaUtilsService;
@property (retain, nonatomic) AXMVisionEngineCache *cache;
@property (retain, nonatomic) AXMTaskDispatcher *taskDispatcher;
@property (retain, nonatomic) AXMSequenceRequestManager *sequenceRequestManager;
@property (nonatomic, readonly) NSArray *sourceNodes;
@property (nonatomic, readonly) NSArray *evaluationNodes;
@property long long maximumQueueSize;
@property _Bool prioritySchedulingEnabled;
@property _Bool prioritySchedulingAllowMultipleNodeExecution;
@property unsigned long long thresholdPriority;
@property (nonatomic) _Bool imageRegistrationFilteringEnabled;
@property (nonatomic) long long minimumImageRegistrationSignalLevel;
@property (nonatomic, readonly) _Bool isCachingEnabled;
@property (nonatomic, readonly) long long cacheSize;
@property (nonatomic, getter=areDiagnosticsEnabled) _Bool diagnosticsEnabled;
@property (nonatomic) _Bool disableResultLogging;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (void)_commonInit;
- (_Bool)isEqualToEngine:(id)arg1;
- (void)addSourceNode:(id)arg1;
- (void)addEvaluationNode:(id)arg1;
- (void)_queue_handleEvaluatedContext:(id)arg1 result:(id)arg2 error:(id)arg3;
- (_Bool)_queue_shouldEvaluateNode:(id)arg1 withOptions:(id)arg2;
- (id)_queue_activeEvaluationNodesForOptions:(id)arg1 applyPriorityScheduling:(_Bool)arg2 prioritySchedulingAllowMultipleNodeExecution:(_Bool)arg3;
- (_Bool)_queue_activeEvaluationNodesExclusivelyUseVisionFramework:(id)arg1;
- (void)_queue_logEvaluatedResult:(id)arg1;
- (id)resultHandlers;
- (void)_invokeResultHandlers:(id)arg1 withError:(id)arg2;
- (void)_invokeResultHandlers:(id)arg1 withResult:(id)arg2;
- (_Bool)canAddSourceNode:(id)arg1;
- (_Bool)canAddEvaluationNode:(id)arg1;
- (id)_queue_sourceNodeWithIdentifier:(id)arg1;
- (id)_queue_evaluationNodeWithIdentifier:(id)arg1;
- (id)_queue_makeUniqueIdentifierForNode:(Class)arg1;
- (_Bool)_queue_nodeIdentifierExists:(id)arg1;
- (void)_queue_addResultHandler:(CDUnknownBlockType)arg1;
- (void)_queue_removeResultHandler:(CDUnknownBlockType)arg1;
- (void)_queue_removeAllResultHandlers;
- (id)axmDescription;
- (void)axmAppendRecursiveDescription:(id)arg1 withIndentation:(long long)arg2;
- (_Bool)_queue_shouldContinueWithoutResultHandlers:(id)arg1;
- (void)_queue_remotelyEvaluateWithSource:(id)arg1 context:(id)arg2;
- (void)_queue_evaluateWithSource:(id)arg1 context:(id)arg2;
- (void)_invokeFullQueueResultHandlersForContext:(id)arg1;
- (void)triggerWithSource:(id)arg1 context:(id)arg2;
- (_Bool)engineWillAcceptTiggerWithSource:(id)arg1;
- (void)captureSessionNodeDidBeginProcessingFrames:(id)arg1;
- (void)captureSessionNodeDidEndProcessingFrames:(id)arg1;
- (void)captureSessionNodeWillProcessFrame:(id)arg1;
- (void)captureSessionNodeDidDropFrame:(id)arg1;
- (void)dispatcher:(id)arg1 handleTask:(id)arg2;
- (_Bool)canAddSourceNodeClass:(Class)arg1;
- (void)insertSourceNode:(id)arg1 atIndex:(long long)arg2;
- (void)removeSourceNode:(id)arg1;
- (void)removeAllSourceNodes;
- (_Bool)canAddEvaluationNodeClass:(Class)arg1;
- (void)insertEvaluationNode:(id)arg1 atIndex:(long long)arg2;
- (void)removeEvaluationNode:(id)arg1;
- (void)removeAllEvaluationNodes;
- (void)addSourceNodes:(id)arg1 evaluationNodes:(id)arg2;
- (id)sourceNodeWithIdentifier:(id)arg1;
- (id)evaluationNodeWithIdentifier:(id)arg1;
- (id)makeUniqueIdentifierForNode:(Class)arg1;
- (_Bool)nodeIdentifierExists:(id)arg1;
- (void)addResultHandler:(CDUnknownBlockType)arg1;
- (void)removeResultHandler:(CDUnknownBlockType)arg1;
- (void)removeAllResultHandlers;
- (void)enableResultCachingWithCacheSize:(long long)arg1;
- (void)disableResultCaching;
- (void)updateEngineConfiguration:(CDUnknownBlockType)arg1;
- (void)prewarmEngine;
- (void)purgeResources:(CDUnknownBlockType)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RERelevanceEngineSubsystem.h>

@class NSMutableArray, NSMutableSet, NSObject, RELiveElementCoordinator, REMLModelManager, RERemoteTrainingClientListener, RETrainingContext, RETrainingScheduler;

@protocol OS_dispatch_queue;

@interface RETrainingManager : RERelevanceEngineSubsystem

{
    RELiveElementCoordinator *_coordinator;
    REMLModelManager *_modelManager;
    RETrainingScheduler *_trainingScheduler;
    NSMutableSet *_trainingContexts;
    NSObject<OS_dispatch_queue> *_queue;
    RERemoteTrainingClientListener *_remoteTrainingListener;
    NSMutableArray *_trainingFeatureMaps;
    NSMutableArray *_trainingContents;
    NSMutableArray *_trainingEvents;
    NSMutableArray *_interactionTypes;
    RETrainingContext *_currentTrainingContext;
}

@property (retain) RETrainingContext *currentTrainingContext;
@property (nonatomic, readonly) NSMutableArray *trainingEvents;
@property (nonatomic, readonly) RETrainingScheduler *trainingScheduler;

- (void)dealloc;
- (void)remoteTrainingClientListenerDidDisconnectContext:(id)arg1;
- (void)remoteTrainingClientListenerDidConnectContext:(id)arg1;
- (void)_performTrainingForPredictionElement:(id)arg1 isPositiveEvent:(_Bool)arg2 interaction:(id)arg3 context:(id)arg4;
- (id)initWithRelevanceEngine:(id)arg1;
- (void)makeContextCurrent:(id)arg1;
- (void)performTrainingForElementWithIdentifier:(id)arg1 isPositiveEvent:(_Bool)arg2 interaction:(id)arg3 context:(id)arg4;
- (void)performTrainingForElement:(id)arg1 isPositiveEvent:(_Bool)arg2 interaction:(id)arg3 context:(id)arg4;
- (void)_queue_trainElementWithIdentifier:(id)arg1 relevanceProviders:(id)arg2 featureMap:(id)arg3 isPositiveEvent:(_Bool)arg4 interaction:(id)arg5 context:(id)arg6;
- (void)flushTraining;
- (void)_performTraining:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addTrainingContext:(id)arg1;
- (void)removeTrainingContext:(id)arg1;
- (void)performTrainingForElementWithIdentifier:(id)arg1 isPositiveEvent:(_Bool)arg2 interaction:(id)arg3;
- (void)performTrainingForElement:(id)arg1 isPositiveEvent:(_Bool)arg2 interaction:(id)arg3;
- (void)manuallyPerformTrainingWithCompletion:(CDUnknownBlockType)arg1;

@end

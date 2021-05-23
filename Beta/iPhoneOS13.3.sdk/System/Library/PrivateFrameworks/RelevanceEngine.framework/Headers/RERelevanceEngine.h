/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, REActivityTracker, REDataSourceCatalog, REDataSourceManager, REEngineLocationManager, REFeatureMapGenerator, REFeatureSet, REFeatureTransmuter, RELiveElementCoordinator, REMLModelManager, RERelevanceEngineConfiguration, RERelevanceEngineLogger, RERelevanceEnginePreferences, RERelevanceEnginePreferencesController, RETrainingManager, REUpNextScheduler, _REEngineDefaults;

@protocol OS_dispatch_queue;

@interface RERelevanceEngine : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSMutableArray *_subsystems;
    REFeatureSet *_rootFeatures;
    REFeatureSet *_mlFeatures;
    NSString *_name;
    RELiveElementCoordinator *_coordinator;
    REDataSourceManager *_dataSourceManager;
    REMLModelManager *_modelManager;
    REFeatureMapGenerator *_inputFeatureMapGenerator;
    REFeatureMapGenerator *_outputFeatureMapGenerator;
    REFeatureTransmuter *_featureTransmuter;
    RETrainingManager *_trainingManager;
    REDataSourceCatalog *_dataSourceCatalog;
    RERelevanceEnginePreferencesController *_preferenceController;
    REEngineLocationManager *_locationManager;
    RERelevanceEngineLogger *_logger;
    REActivityTracker *_activityTracker;
    _REEngineDefaults *_defaults;
    NSMutableDictionary *_addedElementsByIdentifier;
    NSArray *_configurationSectionDescriptors;
    NSArray *_sectionDescriptors;
    NSArray *_historicSectionDescriptors;
    NSDictionary *_inflectionFeatureValues;
    _Bool _running;
    _Bool _updatedLoading;
    _Bool _loading;
    REUpNextScheduler *_loadingScheduler;
    struct os_unfair_lock_s _activityTrackerLock;
    CDUnknownBlockType _resumeCompletionBlock;
    _Bool _automaticallyResumeEngine;
    RERelevanceEngineConfiguration *_configuration;
}

@property (nonatomic, readonly) RELiveElementCoordinator *coordinator;
@property (nonatomic, readonly) REDataSourceManager *dataSourceManager;
@property (nonatomic, readonly) REMLModelManager *modelManager;
@property (nonatomic, readonly) RETrainingManager *trainingManager;
@property (nonatomic, readonly) REEngineLocationManager *locationManager;
@property (nonatomic, readonly) RERelevanceEngineLogger *logger;
@property (nonatomic, readonly) _Bool wantsImmutableContent;
@property (nonatomic, readonly) _REEngineDefaults *defaults;
@property (nonatomic, readonly) NSArray *sectionDescriptors;
@property (nonatomic, readonly) NSArray *historicSectionDescriptors;
@property (nonatomic, readonly) NSDictionary *inflectionFeatureValues;
@property (nonatomic, readonly) REFeatureTransmuter *featureTransmuter;
@property (nonatomic, readonly) REFeatureSet *rootFeatures;
@property (nonatomic, readonly) REFeatureSet *mlFeatures;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) RERelevanceEngineConfiguration *configuration;
@property (nonatomic, readonly) NSArray *subsystems;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *subsystemQueue;
@property (nonatomic, readonly) RERelevanceEngineConfiguration *configuration;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) RERelevanceEnginePreferences *effectivePreferences;
@property (nonatomic, readonly) REDataSourceCatalog *dataSourceCatalog;
@property (readonly, getter=isRunning) _Bool running;
@property (nonatomic) _Bool automaticallyResumeEngine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)prewarmWithConfiguration:(id)arg1;

- (void)dealloc;
- (void)pause;
- (void)resume;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (void)removeElement:(id)arg1;
- (void)beginActivity:(id)arg1 forObject:(id)arg2;
- (void)endActivity:(id)arg1 forObject:(id)arg2;
- (void)enumerateSectionDescriptorsWithOptions:(unsigned long long)arg1 includeHistoric:(_Bool)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)storeDiagnosticLogs:(CDUnknownBlockType)arg1;
- (unsigned long long)numberOfElementsInSection:(id)arg1;
- (id)elementAtPath:(id)arg1;
- (void)addTrainingContext:(id)arg1;
- (void)removeTrainingContext:(id)arg1;
- (id)initWithName:(id)arg1 configuration:(id)arg2;
- (void)_callbackQueue_notifyLoadingState;
- (void)trainPendingEventsWithCompletion:(CDUnknownBlockType)arg1;
- (id)pathForElement:(id)arg1;
- (void)enumerateRankedContentInSection:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_notifyResumeCompleted;
- (void)_queue_resumeSubsystem:(id)arg1;
- (void)_queue_resumeWithTimeout:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_queue_pauseSubsystem:(id)arg1;
- (void)setPreferences:(id)arg1 forObject:(id)arg2;
- (void)removePreferencesForObject:(id)arg1;
- (void)activityTracker:(id)arg1 didBeginActivity:(id)arg2;
- (void)activityTracker:(id)arg1 didEndActivity:(id)arg2;
- (void)trainWithPendingEvents;
- (void)saveModelFile;
- (void)enumerateRankedContent:(CDUnknownBlockType)arg1;
- (void)addElement:(id)arg1 section:(id)arg2;
- (void)resumeWithTimeout:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (id)elementRankerForSection:(id)arg1;
- (id)newInputFeatureMap;
- (id)newOutputFeatureMap;
- (id)elementFromDictionary:(id)arg1;
- (id)dictionaryFromElement:(id)arg1;
- (_Bool)isSectionWithNameHistoric:(id)arg1;
- (id)historicSectionForSection:(id)arg1;
- (id)sectionForHistoricSection:(id)arg1;
- (void)_addSubsystem:(id)arg1;
- (void)_removeSubsystem:(id)arg1;
- (void)_captureAndStoreDiagnosticLogs:(CDUnknownBlockType)arg1;
- (void)storeDiagnosticLogsToFile:(CDUnknownBlockType)arg1;
- (id)predictionForElementAtPath:(id)arg1;
- (id)predictionForElement:(id)arg1;
- (id)featureProviderForElement:(id)arg1;
- (id)featureProviderForElementAtPath:(id)arg1;
- (void)pauseForSimulation;
- (void)resumeFromSimulation;
- (void)resetModelWithCompletion:(CDUnknownBlockType)arg1;
- (void)gatherMetrics;

@end

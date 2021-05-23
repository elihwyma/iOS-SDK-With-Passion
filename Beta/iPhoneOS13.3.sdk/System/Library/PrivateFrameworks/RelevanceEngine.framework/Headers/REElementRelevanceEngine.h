/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RERelevanceEngineSubsystem.h>

#import <RelevanceEngine/Swift-Protocol.h>

@class NSArray, NSDictionary, NSMapTable, NSMutableDictionary, NSMutableSet, NSObject, NSString, REDataSourceManager, REFeatureSet, REFeatureTransmuter, REKeyMultiValueMap, REPredictorManager, RERelevanceProviderEnvironment, REUpNextScheduler;

@protocol OS_dispatch_queue, REElementRelevanceEngineDelegate;

@interface REElementRelevanceEngine : RERelevanceEngineSubsystem <Swift>

{
    NSMutableSet *_elementsNeedingRelevanceUpdate;
    NSMutableDictionary *_sections;
    NSMutableDictionary *_predictedElements;
    NSMapTable *_relevanceProviderElementMap;
    REKeyMultiValueMap *_identifierElementIdentifierMap;
    REFeatureSet *_persistenceFeatures;
    REPredictorManager *_predictorManager;
    RERelevanceProviderEnvironment *_providerEnvironment;
    REDataSourceManager *_dataSourceManager;
    REFeatureTransmuter *_featureTransmuter;
    REUpNextScheduler *_scheduler;
    REUpNextScheduler *_predictorUpdatedScheduler;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _deviceIsLocked;
    _Bool _ignoreDeviceLockState;
    id <REElementRelevanceEngineDelegate> _delegate;
}

@property (weak, nonatomic) id <REElementRelevanceEngineDelegate> delegate;
@property (nonatomic, readonly) NSArray *sections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSDictionary *sectionsMap;
@property (nonatomic, readonly) REPredictorManager *predictorManager;
@property (nonatomic, readonly) RERelevanceProviderEnvironment *providerEnvironment;

- (void)dealloc;
- (void)pause;
- (void)resume;
- (void)removeElement:(id)arg1;
- (id)dataStoreKey;
- (void)refreshContent;
- (id)relevanceProviderEnvironment;
- (void)_onqueue_async:(CDUnknownBlockType)arg1;
- (unsigned long long)numberOfElementsInSection:(id)arg1;
- (id)elementAtPath:(id)arg1;
- (void)modelManagerDidUpdateModel:(id)arg1;
- (void)predictorDidUpdate:(id)arg1;
- (id)section:(id)arg1 groupForIdentifier:(id)arg2;
- (void)sectionDidUpdateContentOrder:(id)arg1;
- (id)initWithRelevanceEngine:(id)arg1;
- (id)featureMapForElement:(id)arg1 trainingContext:(id)arg2;
- (_Bool)modelManager:(id)arg1 loadDataStoreFromURL:(id)arg2 error:(id *)arg3;
- (_Bool)modelManager:(id)arg1 saveDataStoreToURL:(id)arg2 error:(id *)arg3;
- (id)pathForElement:(id)arg1;
- (void)addElement:(id)arg1 section:(id)arg2;
- (id)elementRankerForSection:(id)arg1;
- (id)predictionForElement:(id)arg1;
- (id)featureProviderForElement:(id)arg1;
- (void)predictor:(id)arg1 didBeginActivity:(id)arg2;
- (void)predictor:(id)arg1 didFinishActivity:(id)arg2;
- (void)featureTransformerDidInvalidate:(id)arg1;
- (void)relevanceEnvironment:(id)arg1 didUpdateRelevanceProvider:(id)arg2;
- (void)_queue_updateElementRelevance;
- (void)_updateStateBasedOnPredictor;
- (void)_enumerateAndGenerateSectionComparators:(CDUnknownBlockType)arg1;
- (void)_checkPreferences;
- (void)_queue_scheduleRelevanceUpdateForElement:(id)arg1;
- (id)sectionForElement:(id)arg1;
- (void)_performUpdatesToDelegate:(CDUnknownBlockType)arg1;
- (_Bool)_elementIsFullyLoaded:(id)arg1;
- (id)_queue_featureMapForElementWithId:(id)arg1 trainingContext:(id)arg2;
- (id)_allCurrentElements;
- (id)_queue_featureMapForElement:(id)arg1 trainingContext:(id)arg2;
- (id)_generateFeatureMapForElement:(id)arg1;
- (void)reloadElement:(id)arg1 withElement:(id)arg2;
- (id)featureMapForPredictedElement:(id)arg1 trainingContext:(id)arg2;
- (id)_identifierForElementIdentifier:(id)arg1;
- (id)_elementIdentifierForIdentifier:(id)arg1;

@end

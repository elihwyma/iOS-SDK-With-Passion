/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RERelevanceEngineSubsystem.h>

@class NSArray, NSDate, NSObject, NSString, REContentRanker, REMLLinearModel, REMLMetricsSet, REMLModel, REObserverStore;

@protocol OS_dispatch_queue, RERelevanceEngineMetricsRecorder;

@interface REMLModelManager : RERelevanceEngineSubsystem

{
    REMLLinearModel *_model;
    REContentRanker *_contentRanker;
    REMLMetricsSet *_metrics;
    NSObject<OS_dispatch_queue> *_trainingQueue;
    REObserverStore *_observers;
    NSString *_modelFileLocation;
    _Bool _supportsContentRanking;
    NSArray *_orderedFeatures;
    unsigned long long _modelStorageBehavior;
    REObserverStore *_dataStores;
    id <RERelevanceEngineMetricsRecorder> _metricsRecoder;
    NSDate *_lastCacheResetDate;
    unsigned long long _modelVersionNumber;
    _Bool _validModel;
}

@property (nonatomic, readonly) unsigned long long modelVersionNumber;
@property (nonatomic, readonly) REMLModel *model;
@property (nonatomic, readonly) REContentRanker *contentRanker;
@property (nonatomic, readonly) _Bool supportsContentRanking;
@property (nonatomic, readonly) NSArray *orderedFeatures;

- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)_logMetrics;
- (id)sentimentAnalyzer;
- (id)comparatorWithRules:(id)arg1;
- (id)initWithRelevanceEngine:(id)arg1;
- (void)flushTraining;
- (void)performTrainingWithFeatureMaps:(id)arg1 content:(id)arg2 events:(id)arg3 interactions:(id)arg4 purgeCaches:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (_Bool)_loadModelAtPath:(id)arg1 mlFeatures:(id)arg2 checkModelVersion:(_Bool)arg3;
- (id)_createOrderFeatureListFromModelFileURL:(id)arg1 mlFeatures:(id)arg2;
- (void)_saveDataStoresToURL:(id)arg1;
- (id)createOutputFeatureFromDouble:(double)arg1 error:(id *)arg2;
- (_Bool)_saveModelToDisk:(id *)arg1;
- (void)_notifyObserversThatModelUpdated;
- (void)addDataStore:(id)arg1;
- (void)removeDataStore:(id)arg1;
- (void)manuallySaveModel;
- (void)performModelClearWithCompletion:(CDUnknownBlockType)arg1;
- (id)predicitionForLogicalElement:(id)arg1;
- (id)_orderedModelFeatures;

@end

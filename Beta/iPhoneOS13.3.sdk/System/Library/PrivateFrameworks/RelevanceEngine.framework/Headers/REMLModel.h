/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSString, REConcurrentDictionary;

@protocol RERelevanceEngineMetricsRecorder;

@interface REMLModel : NSObject

{
    REConcurrentDictionary *_predictionCache;
    _Bool _wantsPredictionCache;
    _Bool _implementsDebugSaving;
    _Bool _allowsExploreExploit;
    float _exploreExploitModulator;
    float _priorMean;
    float _varianceEpsilon;
    float _simulationExploreExploitModulator;
    id <RERelevanceEngineMetricsRecorder> _metricsRecorder;
    NSString *_metricsInteraction;
}

@property (nonatomic) _Bool allowsExploreExploit;
@property (nonatomic) float exploreExploitModulator;
@property (nonatomic) float priorMean;
@property (nonatomic) float varianceEpsilon;
@property (nonatomic) float simulationExploreExploitModulator;
@property (retain, nonatomic) id <RERelevanceEngineMetricsRecorder> metricsRecorder;
@property (retain, nonatomic) NSString *metricsInteraction;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long featureBitWidth;
@property (nonatomic, readonly) unsigned long long maxFeatureCount;
@property (nonatomic, readonly) long long getNumberOfCoordinates;
@property (nonatomic, readonly) float averagePrediction;
@property (nonatomic, readonly) float normalizedEntropy;
@property (nonatomic, readonly) unsigned long long totalExampleCount;
@property (nonatomic, readonly) unsigned long long totalPositiveCount;

+ (unsigned long long)featureBitWidth;
+ (id)modelWithFeatureSet:(id)arg1 priorMean:(float)arg2 modelVarianceEpsilon:(float)arg3;
+ (unsigned long long)maxFeatureCount;

- (id)init;
- (void)_clearCache;
- (void)logCoreAnalyticsMetrics;
- (_Bool)requiresDirectory;
- (_Bool)loadModelFromURL:(id)arg1 error:(id *)arg2;
- (_Bool)saveModelToURL:(id)arg1 error:(id *)arg2;
- (id)predictWithFeatures:(id)arg1;
- (void)clearModel;
- (id)_predictWithFeatures:(id)arg1;
- (id)initWithFeatureSet:(id)arg1 priorMean:(float)arg2 modelVarianceEpsilon:(float)arg3;
- (void)trainWithFeatures:(id)arg1 positiveEvent:(id)arg2;
- (void)_clearModel;
- (float)_getAveragePrediction;
- (float)_getNormalizedEntropy;
- (long long)_getNumberOfCoordinates;
- (unsigned long long)_getTotalExampleCount;
- (unsigned long long)_getTotalPositiveCount;
- (void)_trainWithFeatures:(id)arg1 positiveEvent:(id)arg2;
- (id)predictionSetWithFeatures:(id)arg1;
- (_Bool)_saveModelToURL:(id)arg1 error:(id *)arg2;
- (_Bool)_loadModelFromURL:(id)arg1 error:(id *)arg2;
- (void)setWantsPredictionCache:(_Bool)arg1;
- (_Bool)_saveDebugModelToURL:(id)arg1 error:(id *)arg2;
- (_Bool)wantsPredictionCache;

@end

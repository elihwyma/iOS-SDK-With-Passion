/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REMLModel.h>

@class REExportedTable;

@interface REBayesianMLModel : REMLModel

{
    struct BayesianModel _model;
    unsigned long long _numberOfFeatures;
}

@property (nonatomic, readonly) REExportedTable *content;

+ (unsigned long long)featureBitWidth;
+ (unsigned long long)maxFeatureCount;

- (id).cxx_construct;
- (void)logCoreAnalyticsMetrics;
- (id)_predictWithFeatures:(id)arg1;
- (id)initWithFeatureSet:(id)arg1 priorMean:(float)arg2 modelVarianceEpsilon:(float)arg3;
- (void)_clearModel;
- (float)_getAveragePrediction;
- (float)_getNormalizedEntropy;
- (long long)_getNumberOfCoordinates;
- (unsigned long long)_getTotalExampleCount;
- (unsigned long long)_getTotalPositiveCount;
- (void)_trainWithFeatures:(id)arg1 positiveEvent:(id)arg2;
- (_Bool)_saveModelToURL:(id)arg1 error:(id *)arg2;
- (_Bool)_loadModelFromURL:(id)arg1 error:(id *)arg2;
- (unsigned long long)_maxFeatureCoordinates;
- (void)_loadFeatureVector:(vector_cfeb9b06 *)arg1 fromFeatureMap:(id)arg2;
- (_Bool)_saveModelToURL:(id)arg1 includeDebugData:(_Bool)arg2 error:(id *)arg3;
- (_Bool)_saveDebugModelToURL:(id)arg1 error:(id *)arg2;

@end

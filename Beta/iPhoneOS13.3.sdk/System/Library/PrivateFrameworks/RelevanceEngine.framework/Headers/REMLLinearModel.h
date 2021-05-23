/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REMLModel.h>

@class NSDictionary;

@interface REMLLinearModel : REMLModel

{
    NSDictionary *_models;
}

@property (nonatomic, readonly) NSDictionary *models;

- (void)_clearCache;
- (id)initWithFeatureSet:(id)arg1 interactionDescriptors:(id)arg2;
- (void)setMetricsRecorder:(id)arg1;
- (void)logCoreAnalyticsMetrics;
- (_Bool)requiresDirectory;
- (void)trainWithFeatures:(id)arg1 positiveEvent:(id)arg2 interaction:(id)arg3;
- (id)_predictWithFeatures:(id)arg1;
- (void)_enumerateModelsForFeatureMap:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
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

@end

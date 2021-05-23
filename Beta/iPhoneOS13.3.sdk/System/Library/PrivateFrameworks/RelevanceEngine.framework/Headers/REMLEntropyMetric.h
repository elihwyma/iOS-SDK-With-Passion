/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface REMLEntropyMetric : NSObject

{
    NSString *_metricName;
    NSString *_predictionFeatureName;
    NSString *_truthFeatureName;
    long long _arrayFeatureIndex;
    long long _numExamples;
    double _sumTruth;
    double _sumPrediction;
    double _logScore;
    double _normalizedLogScore;
    unsigned long long _calibrationCurveNumBuckets;
    NSMutableArray *_calibrationCurveTotal;
    NSMutableArray *_calibrationCurveTrue;
}

- (id)name;
- (void)reset;
- (void)createCheckpoint;
- (void)resetToLastCheckpointBeforeDate:(id)arg1;
- (id)initWithName:(id)arg1 featureName:(id)arg2;
- (void)updateMetricsFromFeatures:(id)arg1 prediction:(id)arg2 truth:(id)arg3;
- (double)getDoubleFromFeatureValue:(id)arg1;
- (id)meanEntropy;
- (id)meanNormalizedEntropy;
- (id)meanTruth;
- (id)meanPrediction;
- (long long)numberOfExamples;
- (unsigned long long)calibrationCurveNumBuckets;
- (id)calibrationCurveTotal;
- (id)calibrationCurveTrue;

@end

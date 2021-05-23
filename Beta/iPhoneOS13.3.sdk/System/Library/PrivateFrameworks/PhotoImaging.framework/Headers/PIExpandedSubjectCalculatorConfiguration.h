/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <Foundation/NSObject.h>

@interface PIExpandedSubjectCalculatorConfiguration : NSObject

{
    _Bool _useRegressedSaliencyBoxes;
    unsigned long long _denistyThreshold;
    long long _neighborhoodOffset;
    double _saliencyThreshold;
    double _saliencyDeltaThreshold;
    double _initialSaliencyValue;
    double _unionIOUThreshold;
    double _clusterToRegressedRatio;
    double _regressedConfidenceThreshold;
    double _highSaliencyThreshold;
    long long _interSalientObjectDistance;
    unsigned long long _maxSalientObjectsCount;
    double _salientClusterConvergenceMaxDistance;
}

@property (nonatomic) unsigned long long denistyThreshold;
@property (nonatomic) long long neighborhoodOffset;
@property (nonatomic) double saliencyThreshold;
@property (nonatomic) double saliencyDeltaThreshold;
@property (nonatomic) double initialSaliencyValue;
@property (nonatomic) _Bool useRegressedSaliencyBoxes;
@property (nonatomic) double unionIOUThreshold;
@property (nonatomic) double clusterToRegressedRatio;
@property (nonatomic) double regressedConfidenceThreshold;
@property (nonatomic) double highSaliencyThreshold;
@property (nonatomic) long long interSalientObjectDistance;
@property (nonatomic) unsigned long long maxSalientObjectsCount;
@property (nonatomic) double salientClusterConvergenceMaxDistance;

+ (id)defaultConfiguration;
+ (id)saliencyRevisionOneConfiguration;

@end

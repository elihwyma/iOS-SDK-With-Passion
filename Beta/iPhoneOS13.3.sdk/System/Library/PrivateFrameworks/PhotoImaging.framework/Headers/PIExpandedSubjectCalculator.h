/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <Foundation/NSObject.h>

@class NSArray, PIExpandedSubjectCalculatorConfiguration, VNSaliencyImageObservation;

@interface PIExpandedSubjectCalculator : NSObject

{
    NSArray *_expandedSubjects;
    PIExpandedSubjectCalculatorConfiguration *_configuration;
    NSArray *_detectedSubjects;
    NSArray *_saliencyData;
    unsigned long long _subjectDirection;
    VNSaliencyImageObservation *_saliencyImageObservation;
    NSArray *_regressedSalientSubjects;
}

@property (copy, nonatomic, readonly) NSArray *regressedSalientSubjects;
@property (nonatomic, readonly) unsigned long long saliencyScale;
@property (nonatomic, readonly) PIExpandedSubjectCalculatorConfiguration *configuration;
@property (copy, nonatomic, readonly) NSArray *detectedSubjects;
@property (copy, nonatomic, readonly) NSArray *saliencyData;
@property (copy, nonatomic, readonly) NSArray *expandedSubjects;
@property (nonatomic) unsigned long long subjectDirection;
@property (nonatomic, readonly) VNSaliencyImageObservation *saliencyImageObservation;

+ (void)consolidateCandidateSalientClusters:(id)arg1 maxDistance:(double)arg2;
+ (id)salientSubjectsWithImageRequestHandler:(id)arg1;
+ (id)saliencyDataForSaliencyObservation:(id)arg1;
+ (id)saliencyObservationWithImageRequestHandler:(id)arg1;

- (id)initWithDetectedSubjects:(id)arg1 saliencyData:(id)arg2 configuration:(id)arg3;
- (id)initWithDetectedSubjects:(id)arg1 cgImage:(struct CGImage *)arg2;
- (id)initWithDetectedSubjects:(id)arg1 ciImage:(id)arg2 ciContext:(id)arg3 configuration:(id)arg4;
- (id)neighborsForPoint:(id)arg1;
- (id)closestClusterForPoint:(id)arg1 fromClusters:(id)arg2;
- (void)clusterPoints:(id)arg1 intoClusters:(id)arg2;
- (id)findBestStartingPointForStartingPoint:(struct CGPoint)arg1;
- (id)findSalientPointsWithSaliencyScale:(float)arg1 outsideOfSubjectsRect:(struct CGRect)arg2;

@end

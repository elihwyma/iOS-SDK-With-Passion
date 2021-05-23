/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSMutableArray, NURuleSystem, PIReframeResult, PIStillReframerConfiguration, VNSaliencyImageObservation;

@interface PIStillReframer : NSObject

{
    _Bool _shouldAttemptReframe;
    _Bool _sceneContainsPet;
    _Bool _sceneContainsHuman;
    _Bool _sceneContainsMultipleSubjects;
    PIReframeResult *_result;
    PIStillReframerConfiguration *_configuration;
    NSArray *_ANODSubjects;
    VNSaliencyImageObservation *_saliencyObservation;
    NSMutableArray *_mutableSubjects;
    NURuleSystem *_ruleSystem;
    struct CGRect _overscanBounds;
    struct CGRect _viewBounds;
}

@property (nonatomic, readonly) _Bool shouldAttemptReframe;
@property (copy, nonatomic, readonly) NSMutableArray *mutableSubjects;
@property (nonatomic, readonly) NURuleSystem *ruleSystem;
@property (nonatomic) _Bool sceneContainsPet;
@property (nonatomic) _Bool sceneContainsHuman;
@property (nonatomic) _Bool sceneContainsMultipleSubjects;
@property (nonatomic, readonly) PIStillReframerConfiguration *configuration;
@property (nonatomic, readonly) struct CGRect overscanBounds;
@property (nonatomic, readonly) struct CGRect viewBounds;
@property (copy, nonatomic, readonly) NSArray *ANODSubjects;
@property (copy, nonatomic, readonly) NSArray *subjects;
@property (nonatomic, readonly) VNSaliencyImageObservation *saliencyObservation;
@property (nonatomic, readonly) PIReframeResult *result;
@property (nonatomic, readonly) NSData *evaluationData;

+ (id)defaultConfiguration;
+ (id)keyForSubjectWithIndex:(unsigned long long)arg1 prefix:(id)arg2;
+ (unsigned long long)subjectDirectionForImageOrientation:(long long)arg1;
+ (id)detectedSubjectsForImage:(id)arg1 context:(id)arg2;

- (void)invalidateCaches;
- (id)initWithConfiguration:(id)arg1 expandedSubjectConfiguration:(id)arg2 overscanBounds:(struct CGRect)arg3 viewBounds:(struct CGRect)arg4 image:(id)arg5;
- (id)initWithConfiguration:(id)arg1 overscanBounds:(struct CGRect)arg2 viewBounds:(struct CGRect)arg3 subjects:(id)arg4;
- (struct CGRect)calculateReframedRect;
- (_Bool)canIncludeSubject:(id)arg1 boundsPercentageInside:(double *)arg2 expandedBoundsPercentageInside:(double *)arg3;
- (struct CGRect)clamppedSubjectBoundsForEdgeBleed:(id)arg1;
- (struct CGRect)candidateRectForSubject:(id)arg1;
- (double)amountOfOverscanUsedByRect:(struct CGRect)arg1;
- (_Bool)shouldAllowCandidateRect:(struct CGRect)arg1 forUnwantedSubjects:(id)arg2;
- (double)confidenceWithBounds:(struct CGRect)arg1;

@end

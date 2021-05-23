/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <NeutrinoCore/NURenderRequest.h>

@class NSArray, NSError, VNSaliencyImageObservation;

@interface PICompositionFinalizer : NURenderRequest

{
    unsigned long long _candidacy;
    NSError *_finalizerError;
    unsigned long long _performedActions;
    double _rollAngleDegrees;
    double _pitchAngleDegrees;
    double _yawAngleDegrees;
    NSArray *_keyframes;
    VNSaliencyImageObservation *_saliencyObservation;
    NSArray *_ANODSubjects;
    struct CGRect _reframeRect;
    CDStruct_996ac03c _stabCropRect;
}

@property (retain, nonatomic) NSError *finalizerError;
@property (nonatomic) unsigned long long performedActions;
@property (nonatomic) struct CGRect reframeRect;
@property (nonatomic) double rollAngleDegrees;
@property (nonatomic) double pitchAngleDegrees;
@property (nonatomic) double yawAngleDegrees;
@property (copy, nonatomic) NSArray *keyframes;
@property (nonatomic) CDStruct_996ac03c stabCropRect;
@property (retain, nonatomic) VNSaliencyImageObservation *saliencyObservation;
@property (copy, nonatomic) NSArray *ANODSubjects;
@property (nonatomic) unsigned long long candidacy;

+ (id)descriptionForCandidacy:(unsigned long long)arg1;

- (id)initWithComposition:(id)arg1;
- (void)submit:(CDUnknownBlockType)arg1;
- (void)performNextActionWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)shouldPerformAction:(unsigned long long)arg1;
- (_Bool)hasPerformedAction:(unsigned long long)arg1;
- (void)markActionAsPerformed:(unsigned long long)arg1;
- (void)performReframeWithCompletion:(CDUnknownBlockType)arg1;
- (void)performHorizonCorrectionWithCompletion:(CDUnknownBlockType)arg1;
- (void)performPerspectiveCorrectionWithCompletion:(CDUnknownBlockType)arg1;
- (void)processStillReframeResult:(id)arg1;
- (void)processVideoReframeResult:(id)arg1;
- (void)processHorizonResult:(id)arg1;
- (void)processPerspectiveResult:(id)arg1;

@end

/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNObservation.h>

@interface VNImageAestheticsObservation : VNObservation

{
    float _aestheticScore;
    float _wellFramedSubjectScore;
    float _wellChosenBackgroundScore;
    float _tastefullyBlurredScore;
    float _sharplyFocusedSubjectScore;
    float _wellTimedShotScore;
    float _pleasantLightingScore;
    float _pleasantReflectionsScore;
    float _harmoniousColorScore;
    float _livelyColorScore;
    float _pleasantSymmetryScore;
    float _pleasantPatternScore;
    float _immersivenessScore;
    float _pleasantPerspectiveScore;
    float _pleasantPostProcessingScore;
    float _noiseScore;
    float _failureScore;
    float _pleasantCompositionScore;
    float _interestingSubjectScore;
    float _intrusiveObjectPresenceScore;
    float _pleasantCameraTiltScore;
    float _lowKeyLightingScore;
}

@property (nonatomic, readonly) float aestheticScore;
@property (nonatomic, readonly) float wellFramedSubjectScore;
@property (nonatomic, readonly) float wellChosenSubjectScore;
@property (nonatomic, readonly) float wellChosenBackgroundScore;
@property (nonatomic, readonly) float tastefullyBlurredScore;
@property (nonatomic, readonly) float sharplyFocusedSubjectScore;
@property (nonatomic, readonly) float wellTimedShotScore;
@property (nonatomic, readonly) float pleasantLightingScore;
@property (nonatomic, readonly) float pleasantReflectionsScore;
@property (nonatomic, readonly) float harmoniousColorScore;
@property (nonatomic, readonly) float livelyColorScore;
@property (nonatomic, readonly) float pleasantSymmetryScore;
@property (nonatomic, readonly) float pleasantPatternScore;
@property (nonatomic, readonly) float immersivenessScore;
@property (nonatomic, readonly) float pleasantPerspectiveScore;
@property (nonatomic, readonly) float pleasantPostProcessingScore;
@property (nonatomic, readonly) float noiseScore;
@property (nonatomic, readonly) float failureScore;
@property (nonatomic, readonly) float pleasantCompositionScore;
@property (nonatomic, readonly) float interestingSubjectScore;
@property (nonatomic, readonly) float intrusiveObjectPresenceScore;
@property (nonatomic, readonly) float pleasantCameraTiltScore;
@property (nonatomic, readonly) float lowKeyLightingScore;

+ (_Bool)supportsSecureCoding;
+ (id)allScorePropertyNames;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestRevision:(unsigned long long)arg1 overallAestheticScore:(float)arg2 wellFramedSubjectScore:(float)arg3 wellChosenBackgroundScore:(float)arg4 tastefullyBlurredScore:(float)arg5 sharplyFocusedSubjectScore:(float)arg6 wellTimedShotScore:(float)arg7 pleasantLightingScore:(float)arg8 pleasantReflectionsScore:(float)arg9 harmoniousColorScore:(float)arg10 livelyColorScore:(float)arg11 pleasantSymmetryScore:(float)arg12 pleasantPatternScore:(float)arg13 immersivenessScore:(float)arg14 pleasantPerspectiveScore:(float)arg15 pleasantPostProcessingScore:(float)arg16 noiseScore:(float)arg17 failureScore:(float)arg18 pleasantCompositionScore:(float)arg19 interestingSubjectScore:(float)arg20 intrusiveObjectPresenceScore:(float)arg21 pleasantCameraTiltScore:(float)arg22 lowKeyLightingScore:(float)arg23;
- (id)_scoresDictionary;

@end

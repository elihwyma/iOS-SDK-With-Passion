/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHAssetPropertySet.h>

@interface PHAssetAestheticProperties : PHAssetPropertySet

{
    float _wellFramedSubjectScore;
    float _wellChosenSubjectScore;
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
    float _lowLight;
}

@property (nonatomic, readonly) float wellFramedSubjectScore;
@property (nonatomic, readonly) float wellChosenSubjectScore;
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
@property (nonatomic, readonly) float lowLight;

+ (id)propertiesToFetch;
+ (id)entityName;
+ (id)propertySetName;
+ (id)keyPathFromPrimaryObject;

- (void)initWithDefaultValues;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(_Bool)arg3;

@end

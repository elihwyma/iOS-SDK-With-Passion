/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <NeutrinoCore/NUAutoCalculator.h>

@class NSNumber, NSString, PIFaceObservationCache;

@interface PICropAutoCalculator : NUAutoCalculator

{
    _Bool _shouldPerformAutoCrop;
    _Bool _shouldPerformAutoStraighten;
    _Bool _shouldUseAutoStraightenVerticalDetector;
    _Bool _debugFilesEnabled;
    PIFaceObservationCache *_faceObservationCache;
    NSNumber *_autoStraightenVerticalAngleThreshold;
    NSNumber *_autoStraightenDominantAngleDiffThreshold;
    double _maxAutoStraighten;
    double _minAutoStraighten;
    NSString *_debugFilesPrefix;
}

@property _Bool shouldPerformAutoCrop;
@property _Bool shouldPerformAutoStraighten;
@property _Bool shouldUseAutoStraightenVerticalDetector;
@property (copy) NSNumber *autoStraightenVerticalAngleThreshold;
@property (copy) NSNumber *autoStraightenDominantAngleDiffThreshold;
@property double maxAutoStraighten;
@property double minAutoStraighten;
@property _Bool debugFilesEnabled;
@property (copy) NSString *debugFilesPrefix;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) CDStruct_1b6d18a9 time;
@property (retain, nonatomic) PIFaceObservationCache *faceObservationCache;

+ (_Bool)stitchedOvercaptureRect:(struct CGRect *)arg1 primaryRect:(struct CGRect *)arg2 forComposition:(id)arg3 error:(out id *)arg4;
+ (struct CGRect)overcaptureRectForStitchedOvercaptureSize:(CDStruct_912cb5d2)arg1 overcaptureVideoComplementSize:(CDStruct_912cb5d2)arg2 primarySize:(CDStruct_912cb5d2)arg3 autoLoopStabilizedCropRect:(struct CGRect)arg4;
+ (id)updateCropAdjustment:(id)arg1 after:(id)arg2 error:(out id *)arg3;

- (id)initWithComposition:(id)arg1;
- (void)submit:(CDUnknownBlockType)arg1;
- (id)imageProperties:(out id *)arg1;
- (_Bool)undoExifOrientation:(CDStruct_996ac03c *)arg1 error:(out id *)arg2;

@end

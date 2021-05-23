/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <NeutrinoCore/NUAutoCalculator.h>

@class CIImage, NSArray, NSMutableDictionary, NSNumber, NSString, PIFaceObservationCache, VNSaliencyImageObservation;

@interface PIPerspectiveAutoCalculator : NUAutoCalculator

{
    _Bool _disableOnPanos;
    _Bool _disableOnFrontFacingCameraImages;
    _Bool _shouldRunDetectorsIfNecessary;
    _Bool _shouldRunBuildingCheck;
    _Bool _debugFilesEnabled;
    PIFaceObservationCache *_faceObservationCache;
    NSNumber *_maxAutoYaw;
    NSNumber *_maxAutoPitch;
    NSNumber *_maxAutoAngle;
    double _minimumPitchCorrection;
    double _minimumYawCorrection;
    double _minimumAngleCorrection;
    double _minimumConfidence;
    double _maxFaceSize;
    double _minimumPitchCorrectionArea;
    double _minimumYawCorrectionArea;
    double _minSalientArea;
    double _maxSalientSubjectArea;
    VNSaliencyImageObservation *_saliencyObservation;
    double _angleSeedDegreesCCW;
    NSArray *_ANODSubjects;
    NSString *_debugFilesPrefix;
    NSMutableDictionary *_debugDiagnostics;
    CIImage *_debugLineDetectionImage;
}

@property (retain, nonatomic) CIImage *debugLineDetectionImage;
@property (copy) NSNumber *maxAutoYaw;
@property (copy) NSNumber *maxAutoPitch;
@property (copy) NSNumber *maxAutoAngle;
@property double minimumPitchCorrection;
@property double minimumYawCorrection;
@property double minimumAngleCorrection;
@property double minimumConfidence;
@property double maxFaceSize;
@property double minimumPitchCorrectionArea;
@property double minimumYawCorrectionArea;
@property _Bool disableOnPanos;
@property _Bool disableOnFrontFacingCameraImages;
@property _Bool shouldRunDetectorsIfNecessary;
@property _Bool shouldRunBuildingCheck;
@property (nonatomic) double minSalientArea;
@property (nonatomic) double maxSalientSubjectArea;
@property (retain, nonatomic) VNSaliencyImageObservation *saliencyObservation;
@property double angleSeedDegreesCCW;
@property (copy, nonatomic) NSArray *ANODSubjects;
@property _Bool debugFilesEnabled;
@property (copy) NSString *debugFilesPrefix;
@property (readonly) NSMutableDictionary *debugDiagnostics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) CDStruct_1b6d18a9 time;
@property (retain, nonatomic) PIFaceObservationCache *faceObservationCache;

+ (void)requestVisionCleanUp;
+ (void)undoOrientation:(long long)arg1 forPitch:(double *)arg2 yaw:(double *)arg3 angle:(double *)arg4;

- (id)initWithComposition:(id)arg1;
- (void)submit:(CDUnknownBlockType)arg1;
- (id)perspectiveErrorFromCoreImage:(id)arg1;
- (void)addMethodDiagnostics:(id)arg1 details:(id)arg2;
- (void)addMethodResultToDiagnostics:(id)arg1 error:(id)arg2 setYawPitchError:(_Bool)arg3;
- (id)wrapAsUnexpectedError:(id)arg1;
- (void)writeDebugDiagnosticsToDisk;
- (float)getSizeOfAllFaces:(id)arg1;
- (_Bool)passesFaceCheck:(out id *)arg1;
- (_Bool)hasFrontFacingCameraDimentions:(CDStruct_912cb5d2)arg1;
- (_Bool)isFrontFacingCameraImage:(id)arg1 pixelSize:(CDStruct_912cb5d2)arg2;
- (_Bool)passesImagePropertiesCheck:(out id *)arg1;
- (_Bool)passesBuildingCheck:(out id *)arg1;
- (_Bool)passesSaliencyCheck:(out id *)arg1;
- (id)overcaptureImageProperties:(out id *)arg1;
- (id)primaryImageProperties:(out id *)arg1;
- (_Bool)canGenerateNewCropRect:(out id *)arg1;
- (_Bool)passesConfidenceCheck:(id)arg1 error:(out id *)arg2;
- (_Bool)passesMinimumCorrectionCheck:(id)arg1 error:(out id *)arg2;
- (void)submitVerified:(CDUnknownBlockType)arg1;

@end

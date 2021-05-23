/*
 Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, VNImageAestheticsObservation, VNObservation, VNSaliencyImageObservation, VNSceneObservation;

@interface PFCameraMetadata : NSObject

{
    _Bool _horizonLinePresent;
    float _horizonLineAngleInDegrees;
    NSArray *_junkImageClassificationObservations;
    VNImageAestheticsObservation *_imageAestheticsObservation;
    VNSaliencyImageObservation *_saliencyObservation;
    VNSceneObservation *_scenePrintObservation;
    VNSceneObservation *_compressedScenePrintObservation;
    VNObservation *_imageCorrectionNeedObservation;
    NSArray *_detectedHumanFaces;
    NSArray *_detectedHumanBodies;
    NSArray *_detectedCatBodies;
    NSArray *_detectedDogBodies;
    NSArray *_detectedSalientObjects;
    unsigned long long _stitchConfidence;
    NSString *_captureFolderPath;
}

@property (nonatomic, readonly) NSArray *junkImageClassificationObservations;
@property (nonatomic, readonly) VNImageAestheticsObservation *imageAestheticsObservation;
@property (nonatomic, readonly) VNSaliencyImageObservation *saliencyObservation;
@property (nonatomic, readonly) VNSceneObservation *scenePrintObservation;
@property (nonatomic, readonly) VNSceneObservation *compressedScenePrintObservation;
@property (nonatomic, readonly) VNObservation *imageCorrectionNeedObservation;
@property (nonatomic, readonly) NSArray *detectedHumanFaces;
@property (nonatomic, readonly) NSArray *detectedHumanBodies;
@property (nonatomic, readonly) NSArray *detectedCatBodies;
@property (nonatomic, readonly) NSArray *detectedDogBodies;
@property (nonatomic, readonly) NSArray *detectedSalientObjects;
@property (nonatomic, readonly) unsigned long long stitchConfidence;
@property (nonatomic, readonly) _Bool horizonLinePresent;
@property (nonatomic, readonly) float horizonLineAngleInDegrees;
@property (nonatomic, readonly) NSString *captureFolderPath;

- (id)initWithSpatialOverCapturePrivateClientMetadata:(id)arg1;
- (id)initWithJunkImageClassificationObservations:(id)arg1 imageAestheticsObservation:(id)arg2 saliencyObservation:(id)arg3 scenePrintObservation:(id)arg4 compressedScenePrintObservation:(id)arg5 imageCorrectionNeedObservation:(id)arg6 detectedObjectsInfoHumanFaces:(id)arg7 detectedObjectsInfoHumanBodies:(id)arg8 detectedObjectsInfoCatBodies:(id)arg9 detectedObjectsInfoDogBodies:(id)arg10 detectedObjectsSalientObjects:(id)arg11 stitchConfidence:(unsigned long long)arg12 horizonLinePresent:(_Bool)arg13 horizonLineAngleInDegrees:(float)arg14 captureFolderPath:(id)arg15;

@end

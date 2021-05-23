/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <Foundation/NSObject.h>

@class CIImage, CIVector, NSArray, VNFaceLandmarks2D, VNFaceObservation;

__attribute__((visibility("hidden")))
@interface RedEyeFace : NSObject

{
    int _imageOrientation;
    float _faceOrientation;
    float _junkiness;
    float _areaMax;
    VNFaceObservation *_observation;
    VNFaceLandmarks2D *_landmarks;
    CIImage *_segmentationSkin;
    CIImage *_segmentationSclera;
    CIImage *_segmentationIris;
    NSArray *_uvLeft;
    NSArray *_uvRight;
    CIVector *_faceRect;
    CIVector *_roiRenderOriginLeft;
    CIVector *_roiRenderOriginRight;
    CIVector *_roiRenderSize;
    CIVector *_pupilLeft;
    CIVector *_pupilRight;
}

@property (nonatomic) int imageOrientation;
@property (nonatomic) float faceOrientation;
@property (nonatomic) float junkiness;
@property (nonatomic) float areaMax;
@property (retain, nonatomic) VNFaceObservation *observation;
@property (retain, nonatomic) VNFaceLandmarks2D *landmarks;
@property (retain, nonatomic) CIImage *segmentationSkin;
@property (retain, nonatomic) CIImage *segmentationSclera;
@property (retain, nonatomic) CIImage *segmentationIris;
@property (retain, nonatomic) NSArray *uvLeft;
@property (retain, nonatomic) NSArray *uvRight;
@property (retain, nonatomic) CIVector *faceRect;
@property (retain, nonatomic) CIVector *roiRenderOriginLeft;
@property (retain, nonatomic) CIVector *roiRenderOriginRight;
@property (retain, nonatomic) CIVector *roiRenderSize;
@property (retain, nonatomic) CIVector *pupilLeft;
@property (retain, nonatomic) CIVector *pupilRight;

- (id)init;
- (void)dealloc;

@end

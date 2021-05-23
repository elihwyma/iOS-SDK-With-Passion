/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSString, PFCameraMetadata, VNImageAestheticsObservation;

@interface _PLIngestJobCameraMetadata : NSObject

{
    _Bool _hasDeserializedMetadata;
    NSString *_cameraMetadataPath;
    NSString *_overCaptureMetadataPath;
    struct CGRect _preferredCropRect;
    struct CGRect _acceptableCropRect;
    NSData *_sceneprintData;
    NSArray *_junkImageClassificationObservations;
    VNImageAestheticsObservation *_imageAestheticsObservation;
    PFCameraMetadata *_cameraMetadata;
    PFCameraMetadata *_overCaptureCameraMetadata;
}

@property (nonatomic, readonly) PFCameraMetadata *cameraMetadata;
@property (nonatomic, readonly) PFCameraMetadata *overCaptureCameraMetadata;

- (id)initWithCameraMetadataPath:(id)arg1 overCaptureMetadataPath:(id)arg2;
- (void)_deserializeCameraMetadata;
- (void)applyCameraMetadataToAsset:(id)arg1;
- (void)applyCameraMetadataToSpacialOverCaptureAsset:(id)arg1;

@end

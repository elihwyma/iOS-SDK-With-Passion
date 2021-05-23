/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface AVCapturePhotoSettingsInternal : NSObject

{
    NSDictionary *format;
    NSString *processedFileType;
    unsigned int rawPhotoPixelFormatType;
    NSString *rawFileType;
    long long uniqueID;
    long long flashMode;
    _Bool autoRedEyeReductionEnabled;
    long long digitalFlashMode;
    long long HDRMode;
    _Bool EV0PhotoDeliveryEnabled;
    long long photoQualityPrioritization;
    _Bool photoQualityPrioritizationIsSetByClient;
    _Bool autoVirtualDeviceFusionEnabled;
    NSArray *virtualDeviceConstituentPhotoDeliveryEnabledDevices;
    _Bool highResolutionPhotoEnabled;
    _Bool depthDataDeliveryEnabled;
    _Bool embedsDepthDataInPhoto;
    _Bool depthDataFiltered;
    _Bool cameraCalibrationDataDeliveryEnabled;
    _Bool portraitEffectsMatteDeliveryEnabled;
    _Bool embedsPortraitEffectsMatteInPhoto;
    NSArray *enabledSemanticSegmentationMatteTypes;
    _Bool embedsSemanticSegmentationMattesInPhoto;
    NSDictionary *metadata;
    NSURL *livePhotoMovieFileURL;
    NSURL *livePhotoMovieFileURLForOriginalPhoto;
    NSString *livePhotoVideoCodecType;
    NSArray *livePhotoMovieMetadata;
    NSArray *livePhotoMovieMetadataForOriginalPhoto;
    NSDictionary *previewPhotoFormat;
    NSDictionary *embeddedThumbnailPhotoFormat;
    NSDictionary *rawEmbeddedThumbnailPhotoFormat;
    _Bool squareCropEnabled;
    _Bool turboModeEnabled;
    _Bool burstQualityCaptureEnabled;
    NSArray *photoFilters;
    NSArray *adjustedPhotoFilters;
    unsigned int shutterSound;
    unsigned long long userInitiatedPhotoRequestTime;
    _Bool autoDeferredProcessingEnabled;
    NSURL *HEICSFileURL;
    NSURL *videoFileURL;
    NSDictionary *videoFormat;
    NSArray *videoFileMetadata;
    _Bool autoSpatialOverCaptureEnabled;
    NSDictionary *spatialOverCaptureMetadata;
    NSURL *spatialOverCaptureLivePhotoMovieFileURL;
    NSArray *spatialOverCaptureLivePhotoMovieMetadata;
    NSString *spatialOverCaptureLivePhotoContentIdentifier;
    NSString *spatialOverCaptureGroupIdentifier;
    NSDictionary *spatialOverCaptureMetadataForOriginalPhoto;
    NSURL *spatialOverCaptureLivePhotoMovieFileURLForOriginalPhoto;
    NSArray *spatialOverCaptureLivePhotoMovieMetadataForOriginalPhoto;
    NSString *spatialOverCaptureLivePhotoContentIdentifierForOriginalPhoto;
    NSString *spatialOverCaptureGroupIdentifierForOriginalPhoto;
    _Bool processedPhotoZoomWithoutUpscalingEnabled;
    NSString *livePhotoContentIdentifier;
    NSString *livePhotoContentIdentifierForOriginalPhoto;
}

@end

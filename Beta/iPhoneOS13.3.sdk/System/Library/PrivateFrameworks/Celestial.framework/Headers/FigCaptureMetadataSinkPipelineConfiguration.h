/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class FigMetadataObjectCaptureConnectionConfiguration, FigVideoCaptureConnectionConfiguration, NSArray;

@interface FigCaptureMetadataSinkPipelineConfiguration : NSObject

{
    FigMetadataObjectCaptureConnectionConfiguration *_metadataObjectConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration *_videoDataConnectionConfiguration;
    _Bool _mrcLowPowerModeEnabled;
    _Bool _useSceneClassifierToGateQRCodeDetection;
    CDStruct_08002bce _smartCameraPipelineVersion;
    _Bool _deferredPrepareEnabled;
    _Bool _previewEnabled;
    int _motionAttachmentsSource;
    NSArray *_detectedObjectMovieFileOutputMetadataConnectionConfigurations;
}

@property (retain, nonatomic) FigMetadataObjectCaptureConnectionConfiguration *metadataObjectConnectionConfiguration;
@property (retain, nonatomic) FigVideoCaptureConnectionConfiguration *videoDataConnectionConfiguration;
@property (retain, nonatomic) NSArray *detectedObjectMovieFileOutputMetadataConnectionConfigurations;
@property (nonatomic) _Bool mrcLowPowerModeEnabled;
@property (nonatomic) _Bool useSceneClassifierToGateQRCodeDetection;
@property (nonatomic) CDStruct_08002bce smartCameraPipelineVersion;
@property (nonatomic) _Bool deferredPrepareEnabled;
@property (nonatomic) _Bool previewEnabled;
@property (nonatomic) int motionAttachmentsSource;

- (void)dealloc;

@end

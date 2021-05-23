/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class FigAudioCaptureConnectionConfiguration, FigCaptureSourceConfiguration, FigMetadataItemCaptureConnectionConfiguration, FigVideoCaptureConnectionConfiguration, NSArray, NSDictionary, NSString;

@interface FigCaptureMovieFileSinkPipelineConfiguration : NSObject

{
    FigCaptureSourceConfiguration *_cameraConfiguration;
    FigVideoCaptureConnectionConfiguration *_videoConnectionConfiguration;
    FigAudioCaptureConnectionConfiguration *_audioConnectionConfiguration;
    FigMetadataItemCaptureConnectionConfiguration *_cameraDebugInfoMetadataConnectionConfiguration;
    NSArray *_detectedObjectMetadataConnectionConfigurations;
    FigVideoCaptureConnectionConfiguration *_stillImageConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration *_sceneClassifierConnectionConfiguration;
    NSDictionary *_movieFileColorInfo;
    struct FigCaptureVideoTransform _videoSourceCaptureTransform;
    int _videoStabilizationType;
    int _motionAttachmentsSource;
    CDStruct_08002bce _smartCameraPipelineVersion;
    _Bool _offlineVISEnabled;
    _Bool _captureSourceCompressedPixelFormatsEnabled;
    _Bool _vitalityScoringEnabled;
    _Bool _overCaptureEnabled;
    _Bool _overCaptureVideoStitchingEnabled;
    float _videoStabilizationOverscanOverride;
    NSString *_clientApplicationID;
}

@property (retain, nonatomic) FigCaptureSourceConfiguration *cameraConfiguration;
@property (retain, nonatomic) FigVideoCaptureConnectionConfiguration *videoConnectionConfiguration;
@property (retain, nonatomic) FigAudioCaptureConnectionConfiguration *audioConnectionConfiguration;
@property (retain, nonatomic) FigMetadataItemCaptureConnectionConfiguration *cameraDebugInfoMetadataConnectionConfiguration;
@property (retain, nonatomic) NSArray *detectedObjectMetadataConnectionConfigurations;
@property (retain, nonatomic) FigVideoCaptureConnectionConfiguration *stillImageConnectionConfiguration;
@property (retain, nonatomic) FigVideoCaptureConnectionConfiguration *sceneClassifierConnectionConfiguration;
@property (retain, nonatomic) NSDictionary *movieFileColorInfo;
@property (nonatomic) struct FigCaptureVideoTransform videoSourceCaptureTransform;
@property (nonatomic) int videoStabilizationType;
@property (nonatomic) int motionAttachmentsSource;
@property (nonatomic) CDStruct_08002bce smartCameraPipelineVersion;
@property (nonatomic) _Bool offlineVISEnabled;
@property (nonatomic) _Bool captureSourceCompressedPixelFormatsEnabled;
@property (nonatomic) _Bool vitalityScoringEnabled;
@property (nonatomic) _Bool overCaptureEnabled;
@property (nonatomic) _Bool overCaptureVideoStitchingEnabled;
@property (nonatomic) float videoStabilizationOverscanOverride;
@property (retain, nonatomic) NSString *clientApplicationID;

- (void)dealloc;

@end

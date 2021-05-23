/*
 Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

#import <Foundation/NSObject.h>

@class AVAsset, AVAssetExportSession, CIContext, CIImage, NSDictionary, NSString, NSURL;

@protocol OS_dispatch_queue;

@interface ISEditSession : NSObject

{
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSObject<OS_dispatch_queue> *_renderQueue;
    AVAsset *_videoAsset;
    CDStruct_1b6d18a9 _inputVideoDuration;
    CDStruct_1b6d18a9 _photoTime;
    struct CGImageSource *_inputImageSource;
    unsigned int _inputOrientation;
    NSDictionary *_inputImageProperties;
    CIContext *_renderContext;
    AVAssetExportSession *_exportSession;
    CIImage *_inputImage;
    CIImage *_subsampledInputImage;
    long long _subsampleFactor;
    CIImage *_outputImage;
    CIImage *_scaledOutputImage;
    double _inputVideoScale;
    struct CGSize _inputVideoScaleRoundingError;
    CDUnknownBlockType _frameProcessor;
    NSString *_temporaryDirectory;
    NSURL *_lastTemporaryVideoURL;
    NSString *_uniqueIdentifier;
    _Bool _isExporting;
    float _audioVolume;
}

@property (readonly) CDStruct_1b6d18a9 duration;
@property (readonly) CDStruct_1b6d18a9 photoTime;
@property (readonly) unsigned int orientation;
@property (readonly) CIImage *inputImage;
@property (copy) CDUnknownBlockType frameProcessor;
@property float audioVolume;
@property (readonly) struct CGSize outputImageSize;
@property (readonly) struct CGSize outputVideoSize;

+ (id)temporaryDirectory;
+ (id)_createTemporaryDirectory;

- (id)init;
- (void)dealloc;
- (void)cancel;
- (id)outputImage;
- (id)imageProperties;
- (id)_inputImage;
- (unsigned int)_inputOrientation;
- (void)exportToDestination:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)prepareForPlaybackWithTargetSize:(struct CGSize)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithPhotoURL:(id)arg1 videoURL:(id)arg2 photoTime:(CDStruct_1b6d18a9)arg3 photoOrientation:(unsigned int)arg4;
- (id)_outputImage;
- (CDStruct_1b6d18a9)_inputVideoDuration;
- (id)_inputImageProperties;
- (double)_inputVideoScale;
- (CDStruct_1b6d18a9)_loadInputVideoDuration;
- (unsigned int)_loadInputImageOrientation;
- (id)_loadInputImageProperties;
- (id)_loadInputImage;
- (id)_loadInputImageWithSubsampleFactor:(long long)arg1;
- (id)_scaledInputImageForTargetScale:(double)arg1;
- (id)inputImageForRenderScale:(double)arg1;
- (struct CGSize)_inputImageSize;
- (id)_inputVideoTrack;
- (struct CGSize)_inputVideoSize;
- (struct CGAffineTransform)_inputVideoTransform;
- (struct CGSize)_outputImageSize;
- (struct CGSize)_outputVideoSize;
- (id)_videoCompositionForTargetSize:(struct CGSize)arg1;
- (struct CGSize)_outputVideoSizeForScale:(double)arg1;
- (id)_processImage:(id)arg1 scale:(double)arg2 error:(id *)arg3;
- (void)_cancelCurrentExportIfNeeded;
- (void)_prepareForPlaybackWithTargetSize:(struct CGSize)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)_canRenderAtPlaybackTime;
- (void)_renderImageToURL:(id)arg1 fileType:(id)arg2 targetSize:(struct CGSize)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_renderImageWithTargetSize:(struct CGSize)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (double)_targetScaleForTargetSize:(struct CGSize)arg1;
- (id)_outputImageProperties;
- (void)_renderVideoToURL:(id)arg1 fileType:(id)arg2 targetSize:(struct CGSize)arg3 volume:(float)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)_outputVideoMetadata;
- (id)_temporaryURLOfType:(id)arg1;
- (void)_exportToDestination:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

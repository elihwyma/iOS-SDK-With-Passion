/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/FigCapturePipeline.h>

@class BWAudioConverterNode, BWFileCoordinatorNode, BWIrisStagingNode, BWNodeOutput, BWPhotoDecompressorNode, BWSceneClassifierSinkNode, BWVideoDefringingNode, BWVideoOrientationMetadataNode, NSArray, NSMutableArray, NSString;

@protocol BWQRCodeSceneObserver;

@interface FigCaptureMovieFileSinkHeadPipeline : FigCapturePipeline

{
    BWIrisStagingNode *_irisStagingNode;
    BWFileCoordinatorNode *_fileCoordinatorNode;
    BWPhotoDecompressorNode *_irisIntermediateJPEGPhotoDecompressorNode;
    BWVideoDefringingNode *_videoDefringingNode;
    BWSceneClassifierSinkNode *_sceneClassifierSinkNode;
    BWAudioConverterNode *_audioConverterNode;
    BWVideoOrientationMetadataNode *_videoOrientationMetadataNode;
    BWNodeOutput *_sceneClassifierPipelineUpstreamOutput;
    NSString *_videoConnectionID;
    NSString *_videoSourceID;
    int _sourceDeviceType;
    BWNodeOutput *_videoOutput;
    BWNodeOutput *_audioOutput;
    NSMutableArray *_metadataOutputs;
    NSArray *_indexesOfDetectedObjectsInMetadataOutputs;
    int _indexOfVideoOrientationInMetadataOutputs;
    int _videoSourceDeviceType;
}

@property (nonatomic) id <BWQRCodeSceneObserver> qrCodeSceneObserver;
@property (nonatomic, readonly) NSString *videoConnectionID;
@property (nonatomic, readonly) NSString *videoSourceID;
@property (nonatomic, readonly) int videoSourceDeviceType;
@property (nonatomic, readonly) BWIrisStagingNode *irisStagingNode;
@property (nonatomic, readonly) BWFileCoordinatorNode *fileCoordinatorNode;
@property (nonatomic, readonly) BWVideoOrientationMetadataNode *videoOrientationMetadataNode;
@property (nonatomic, readonly) BWPhotoDecompressorNode *irisIntermediateJPEGPhotoDecompressorNode;
@property (nonatomic, readonly) BWVideoDefringingNode *videoDefringingNode;
@property (nonatomic, readonly) BWNodeOutput *videoOutput;
@property (nonatomic, readonly) BWNodeOutput *audioOutput;
@property (nonatomic, readonly) NSArray *metadataOutputs;
@property (nonatomic, readonly) NSArray *indexesOfDetectedObjectsInMetadataOutputs;
@property (nonatomic, readonly) int indexOfVideoOrientationInMetadataOutputs;
@property (nonatomic) _Bool sceneClassifierSuspended;

- (void)dealloc;
- (int)_buildMovieFileSinkHeadPipeline:(id)arg1 videoSourceCaptureOutput:(id)arg2 audioSourceCaptureOutput:(id)arg3 detectedObjectBoxedMetadataOutputs:(id)arg4 objectDetectionSourceOutput:(id)arg5 metadataSourcePipelineOutputs:(id)arg6 graph:(id)arg7 parentPipeline:(id)arg8 inferenceScheduler:(id)arg9 captureDevice:(id)arg10 audioSourceDelegate:(id)arg11 irisRequestDelegate:(id)arg12 masterClock:(struct OpaqueCMClock *)arg13;
- (int)_buildFaceDetectionNode:(id)arg1 parentPipeline:(id)arg2 objectDetectionSourceOutput:(id)arg3 faceDetectionNodeOut:(id *)arg4;
- (id)initWithConfiguration:(id)arg1 videoSourceCaptureOutput:(id)arg2 audioSourceCaptureOutput:(id)arg3 detectedObjectBoxedMetadataOutputs:(id)arg4 objectDetectionSourceOutput:(id)arg5 metadataSourcePipelineOutputs:(id)arg6 graph:(id)arg7 parentPipeline:(id)arg8 inferenceScheduler:(id)arg9 captureDevice:(id)arg10 audioSourceDelegate:(id)arg11 irisRequestDelegate:(id)arg12 masterClock:(struct OpaqueCMClock *)arg13;

@end

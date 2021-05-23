/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/FigCaptureRemoteQueueSinkPipeline.h>

@class BWFaceDetectionNode, BWFaceTrackingNode, BWMRCNode, NSArray, NSString;

@protocol BWQRCodeSceneObserver;

@interface FigCaptureMetadataSinkPipeline : FigCaptureRemoteQueueSinkPipeline

{
    BWMRCNode *_mrcNode;
    _Bool _mrcSuspended;
    _Bool _mrcConnectionDisabled;
    BWFaceDetectionNode *_faceDetectionNode;
    BWFaceTrackingNode *_faceTrackingNode;
    NSString *_sourceID;
    int _sourceDeviceType;
}

@property (nonatomic, readonly) NSString *sourceID;
@property (nonatomic, readonly) int sourceDeviceType;
@property (nonatomic, readonly) _Bool mrcLowPowerModeEnabled;
@property (nonatomic, readonly) NSArray *detectedObjectBoxedMetadataOutputs;
@property (nonatomic, readonly) id <BWQRCodeSceneObserver> qrCodeSceneObserver;
@property (nonatomic) _Bool discardsMRCSampleData;
@property (nonatomic, getter=isMRCSuspended) _Bool mrcSuspended;
@property (nonatomic, getter=isMRCConnectionDisabled) _Bool mrcConnectionDisabled;
@property (nonatomic) _Bool discardsFaceDetectionSampleData;
@property (nonatomic) _Bool discardsFaceTrackingSampleData;

+ (void)initialize;

- (void)dealloc;
- (void)setRectOfInterest:(struct CGRect)arg1;
- (id)initWithConfiguration:(id)arg1 graph:(id)arg2 name:(id)arg3 mrcSourceOutput:(id)arg4 offlineVISMotionDataSourceOutput:(id)arg5 objectDetectionSourceOutput:(id)arg6 faceTrackingSourceOutput:(id)arg7 captureDevice:(id)arg8 faceTrackingPipelineStage:(id)arg9 clientPID:(id)arg10 delegate:(id)arg11;
- (int)_buildMetadataSinkPipeline:(id)arg1 graph:(id)arg2 mrcSourceOutput:(id)arg3 offlineVISMotionDataSourceOutput:(id)arg4 objectDetectionSourceOutput:(id)arg5 faceTrackingSourceOutput:(id)arg6 captureDevice:(id)arg7 faceTrackingPipelineStage:(id)arg8 clientPID:(id)arg9 delegate:(id)arg10;
- (int)_buildMRCSinkPipeline:(id)arg1 graph:(id)arg2 mrcSourceOutput:(id)arg3 captureDevice:(id)arg4;
- (int)_buildFaceTrackingPipeline:(id)arg1 graph:(id)arg2 videoCaptureOutput:(id)arg3 pipelineStage:(id)arg4 captureDevice:(id)arg5;
- (int)_buildMetadataObjectRemoteQueueSinkPipeline:(id)arg1 graph:(id)arg2 metadataNodeOutputs:(id)arg3 videoPreviewEnabled:(_Bool)arg4 deferredPrepareEnabled:(_Bool)arg5 delegate:(id)arg6 clientPID:(id)arg7;
- (void)setMRCSuspended:(_Bool)arg1;
- (_Bool)isMRCSsuspended;
- (void)setMRCConnectionDisabled:(_Bool)arg1;

@end

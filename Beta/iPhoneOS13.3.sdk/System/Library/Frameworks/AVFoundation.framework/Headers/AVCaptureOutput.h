/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVCaptureOutputInternal, NSArray;

@interface AVCaptureOutput : NSObject

{
    AVCaptureOutputInternal *_outputInternal;
}

@property (nonatomic, readonly) NSArray *connections;

+ (void)initialize;
+ (id)availableVideoCodecTypesForSourceDevice:(id)arg1 sourceFormat:(id)arg2 outputDimensions:(CDStruct_79c71658)arg3 fileType:(id)arg4 videoCodecTypesWhiteList:(id)arg5;
+ (long long)dataDroppedReasonFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
+ (id)allOutputSubclasses;

- (void)dealloc;
- (id)session;
- (void)setSession:(id)arg1;
- (void)removeConnection:(id)arg1;
- (id)connectionWithMediaType:(id)arg1;
- (int)changeSeed;
- (id)initSubclass;
- (void)bumpChangeSeed;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (void)safelyHandleServerConnectionDeathForFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (id)connectionMediaTypes;
- (_Bool)canAddConnection:(id)arg1 failureReason:(id *)arg2;
- (id)sinkID;
- (void)performFigCaptureSessionOperationSafelyUsingBlock:(CDUnknownBlockType)arg1;
- (id)addConnection:(id)arg1 error:(id *)arg2;
- (id)recommendedOutputSettingsForConnection:(id)arg1 sourceSettings:(id)arg2 videoCodecType:(id)arg3 fileType:(id)arg4 isIris:(_Bool)arg5;
- (_Bool)updateVideoSettingsForConnection:(id)arg1;
- (void)setSinkID:(id)arg1;
- (void)handleChangedActiveFormat:(id)arg1 forDevice:(id)arg2;
- (void)attachToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (void)detachFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (id)liveConnections;
- (struct CGSize)outputSizeForSourceFormat:(id)arg1;
- (void)performBlockOnSessionNotifyingThread:(CDUnknownBlockType)arg1;
- (_Bool)hasRequiredOutputFormatForConnection:(id)arg1;
- (id)_inputForConnection:(id)arg1;
- (_Bool)appliesMirroringWithPhysicalFlipForConnection:(id)arg1;
- (_Bool)appliesOrientationWithPhysicalRotationForConnection:(id)arg1;
- (void)updateMetadataTransformForSourceFormat:(id)arg1;
- (id)_recommendedVideoOutputSettingsForConnection:(id)arg1 sourceSettings:(id)arg2 videoCodec:(id)arg3 isIris:(_Bool)arg4;
- (id)_recommendedAudioOutputSettingsForConnection:(id)arg1 sourceSettings:(id)arg2 fileType:(id)arg3;
- (void)handleServerConnectionDeathForFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (unsigned int)requiredOutputFormatForConnection:(id)arg1;
- (id)transformedMetadataObjectForMetadataObject:(id)arg1 connection:(id)arg2;
- (struct CGRect)metadataOutputRectOfInterestForRect:(struct CGRect)arg1;
- (struct CGRect)rectForMetadataOutputRectOfInterest:(struct CGRect)arg1;
- (id)firstEnabledConnectionForMediaType:(id)arg1;

@end

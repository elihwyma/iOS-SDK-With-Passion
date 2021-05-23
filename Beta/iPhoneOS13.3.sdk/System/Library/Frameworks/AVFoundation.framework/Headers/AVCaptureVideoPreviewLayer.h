/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <QuartzCore/CALayer.h>

@class AVCaptureConnection, AVCaptureSession, AVCaptureVideoPreviewLayerInternal, NSString;

@interface AVCaptureVideoPreviewLayer : CALayer

{
    AVCaptureVideoPreviewLayerInternal *_internal;
}

@property (retain, nonatomic) AVCaptureSession *session;
@property (nonatomic, readonly) AVCaptureConnection *connection;
@property (copy) NSString *videoGravity;
@property (nonatomic, readonly, getter=isPreviewing) _Bool previewing;
@property (nonatomic, readonly, getter=isOrientationSupported) _Bool orientationSupported;
@property (nonatomic) long long orientation;
@property (nonatomic, readonly, getter=isMirroringSupported) _Bool mirroringSupported;
@property (nonatomic) _Bool automaticallyAdjustsMirroring;
@property (nonatomic, getter=isMirrored) _Bool mirrored;

+ (void)initialize;
+ (id)layerWithSession:(id)arg1;
+ (id)layerWithSessionWithNoConnection:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (long long)_orientation;
- (_Bool)isPaused;
- (void)setBounds:(struct CGRect)arg1;
- (id)_input;
- (void)setPaused:(_Bool)arg1;
- (id)initWithSession:(id)arg1;
- (id)initWithLayer:(id)arg1;
- (void)layoutSublayers;
- (void)removeConnection:(id)arg1;
- (void)layerDidBecomeVisible:(_Bool)arg1;
- (id)weakReference;
- (int)changeSeed;
- (void)bumpChangeSeed;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (id)connectionMediaTypes;
- (_Bool)canAddConnection:(id)arg1 failureReason:(id *)arg2;
- (void)_handleNotification:(id)arg1 payload:(id)arg2;
- (_Bool)isDepthDataDeliveryEnabled;
- (void)setDepthDataDeliveryEnabled:(_Bool)arg1;
- (id)_initWithSession:(id)arg1 makeConnection:(_Bool)arg2;
- (id)sinkID;
- (void)performFigCaptureSessionOperationSafelyUsingBlock:(CDUnknownBlockType)arg1;
- (void)setCaptureDeviceTransformNeedsUpdate;
- (struct CGAffineTransform)captureDeviceTransformForSensorSize:(struct CGSize)arg1 previewSize:(struct CGSize)arg2 sensorToPreviewVTScalingMode:(id)arg3;
- (id)addConnection:(id)arg1 error:(id *)arg2;
- (void)didUpdatePreviewImageQueueSlot:(unsigned int)arg1 imageQueue:(id)arg2 rotationDegrees:(double)arg3 size:(struct CGSize)arg4;
- (_Bool)isFilterRenderingEnabled;
- (void)setFilterRenderingEnabled:(_Bool)arg1;
- (void)setSinkID:(id)arg1;
- (id)videoPreviewFilters;
- (void)handleChangedActiveFormat:(id)arg1 forDevice:(id)arg2;
- (void)attachToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (void)detachFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (struct CGRect)metadataOutputRectOfInterestForRect:(struct CGRect)arg1;
- (struct CGRect)rectForMetadataOutputRectOfInterest:(struct CGRect)arg1;
- (unsigned int)imageQueueSlot;
- (double)previewRotationDegrees;
- (id)initWithSessionWithNoConnection:(id)arg1;
- (void)centerSublayer:(long long)arg1;
- (void)setSessionWithNoConnection:(id)arg1;
- (_Bool)_automaticallyAdjustsMirroring;
- (_Bool)_isMirrored;
- (_Bool)isDepthDataDeliverySupported;
- (_Bool)isUnoptimizedFilterRenderingEnabled;
- (void)_updatePreviewTransforms;
- (void)_updateDepthDataDeliverySupported;
- (_Bool)isChromaNoiseReductionSupported;
- (_Bool)_setVideoPreviewFilters:(id)arg1 checkForExceptionalInput:(_Bool)arg2 exceptionReason:(id *)arg3;
- (_Bool)_filtersAreOptimized:(id)arg1 exceptionReason:(id *)arg2;
- (void)_setSensorAndEstimatedPreviewSizes;
- (void)_updateCaptureDeviceTransform;
- (void)didUpdatePreviewFormatDescription:(struct opaqueCMFormatDescription *)arg1;
- (_Bool)isChromaNoiseReductionEnabled;
- (void)setChromaNoiseReductionEnabled:(_Bool)arg1;
- (void)setVideoPreviewFilters:(id)arg1;
- (void)setUnoptimizedFilterRenderingEnabled:(_Bool)arg1;
- (struct CGPoint)captureDevicePointOfInterestForPoint:(struct CGPoint)arg1;
- (struct CGPoint)pointForCaptureDevicePointOfInterest:(struct CGPoint)arg1;
- (id)transformedMetadataObjectForMetadataObject:(id)arg1;

@end

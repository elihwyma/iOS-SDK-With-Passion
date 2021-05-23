/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVCaptureVideoPreviewLayer.h>

@class CALayer;

@interface AVSpatialOverCaptureVideoPreviewLayer : AVCaptureVideoPreviewLayer

{
    struct os_unfair_lock_s _primaryCaptureRectLock;
    struct CGPoint _primaryCaptureRectCenterPoint;
    double _primaryCaptureRectAspectRatio;
    long long _primaryCaptureRectUniqueID;
    _Bool _havePendingPrimaryCaptureRectChange;
    struct CGRect _primaryCaptureRect;
    struct CGRect _overCaptureRect;
    struct CGSize _contentSize;
    _Bool _primaryAndOverCaptureCompositingEnabled;
    long long _overCaptureStatus;
    _Bool _isPresentationLayer;
    _Bool _automaticallyDimsOverCaptureRegion;
    CALayer *_topDimmingOverlay;
    CALayer *_bottomDimmingOverlay;
    double _lastAspectCenterUpdateTime;
}

@property (nonatomic, readonly) struct CGPoint primaryCaptureRectCenterPoint;
@property (nonatomic, readonly) double primaryCaptureRectAspectRatio;
@property (nonatomic, readonly) struct CGRect primaryCaptureRect;
@property (nonatomic, readonly) struct CGRect overCaptureRect;
@property (nonatomic, readonly) struct CGSize contentSize;
@property (nonatomic, getter=isPrimaryAndOverCaptureCompositingEnabled) _Bool primaryAndOverCaptureCompositingEnabled;
@property (nonatomic, readonly) long long overCaptureStatus;
@property (nonatomic) _Bool automaticallyDimsOverCaptureRegion;

+ (long long)uniqueID;

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithLayer:(id)arg1;
- (void)layoutSublayers;
- (void)removeConnection:(id)arg1;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (id)_initWithSession:(id)arg1 makeConnection:(_Bool)arg2;
- (void)getPrimaryCaptureRectCenter:(struct CGPoint *)arg1 aspectRatio:(double *)arg2 uniqueID:(long long *)arg3;
- (struct CGAffineTransform)captureDeviceTransformForSensorSize:(struct CGSize)arg1 previewSize:(struct CGSize)arg2 sensorToPreviewVTScalingMode:(id)arg3;
- (id)addConnection:(id)arg1 error:(id *)arg2;
- (void)didUpdatePreviewImageQueueSlot:(unsigned int)arg1 imageQueue:(id)arg2 rotationDegrees:(double)arg3 size:(struct CGSize)arg4;
- (void)setPrimaryCaptureRectAspectRatio:(double)arg1 centerPoint:(struct CGPoint)arg2;
- (long long)primaryCaptureRectUniqueID;
- (void)_handleSpatialNotification:(id)arg1 payload:(id)arg2;

@end

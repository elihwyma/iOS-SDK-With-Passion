/*
 Image: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
 */

#import <CoreRecognition/Swift-Protocol.h>

@class CALayer, NSString;

@protocol AVCaptureMetadataOutputObjectsDelegate, AVCaptureVideoDataOutputSampleBufferDelegate;

@protocol CRCaptureSessionManager <Swift>

@property (nonatomic) long long cameraPosition;
@property (copy, nonatomic) NSString *cameraMode;
@property (nonatomic) long long whiteBalanceMode;
@property (nonatomic) long long focusMode;
@property (nonatomic) long long exposureMode;
@property (nonatomic) long long torchMode;
@property (weak) id <AVCaptureVideoDataOutputSampleBufferDelegate> captureSessionDelegate;
@property (weak) id <AVCaptureMetadataOutputObjectsDelegate> captureSessionMetadataDelegate;
@property (nonatomic, readonly) CALayer *previewLayer;
@property (retain) NSString *currentDeviceID;
@property _Bool enableMetadataOutput;
@property struct CGSize cameraResolution;

- (unsigned short)isRunning;
- (unsigned short)stopRunning;
- (unsigned short)startRunning;
- (unsigned short)isFocusPointOfInterestSupported;
- (unsigned short)focusPointOfInterest;
- (unsigned short)isAdjustingFocus;
- (unsigned short)setPreviewOrientation: /* Error: Ran out of types for this method. */;
- (unsigned short)targetVideoFormat;
- (unsigned short)switchToCamera: /* Error: Ran out of types for this method. */;
- (unsigned short)refocusOnPoint:exposure: /* Error: Ran out of types for this method. */;
- (unsigned short)convertCameraPoint:toLayer:flipped: /* Error: Ran out of types for this method. */;
- (unsigned short)setupCameraSession;
- (unsigned short)teardownCameraSession;
- (unsigned short)toggleCamera;
- (unsigned short)switchToCameraWithDeviceID: /* Error: Ran out of types for this method. */;
- (unsigned short)refocusOnPoint: /* Error: Ran out of types for this method. */;
- (unsigned short)resetFocus;
- (unsigned short)convertCameraPoint:fromLayer: /* Error: Ran out of types for this method. */;
- (unsigned short)convertCameraPoint:toLayer: /* Error: Ran out of types for this method. */;
- (unsigned short)convertCameraRect:fromLayer: /* Error: Ran out of types for this method. */;
- (unsigned short)convertCameraPointOCR:toLayer:flipped: /* Error: Ran out of types for this method. */;
- (unsigned short)highISOAdjustExposure;
- (unsigned short)isPreviewVideoMirrored;
- (unsigned short)previewVisibleRect;

@end

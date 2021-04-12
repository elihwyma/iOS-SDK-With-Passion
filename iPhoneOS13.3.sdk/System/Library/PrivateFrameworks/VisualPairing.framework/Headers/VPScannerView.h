//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <VisualPairing/AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h>

@class AVCaptureDevice, AVCaptureSession, AVCaptureVideoPreviewLayer, CAShapeLayer, NSObject;
@protocol OS_dispatch_queue;

@interface VPScannerView : UIView <AVCaptureVideoDataOutputSampleBufferDelegate>
{
    AVCaptureDevice *_avCaptureDevice;
    NSObject<OS_dispatch_queue> *_avCaptureQueue;
    AVCaptureSession *_avCaptureSession;
    AVCaptureVideoPreviewLayer *_avPreviewLayer;
    struct HCImagePerspectiveReader _reader;
    NSUInteger _readerWidth;
    NSUInteger _readerHeight;
    NSUInteger _readerRowBytes;
    NSUInteger _readerLastWatermarkTicks;
    NSUInteger _readerResetTicks;
    float _readerLastProgress;
    BOOL _scanning;
    CAShapeLayer *_viewfinderBorderLayer;
    CAShapeLayer *_viewfinderRevealLayer;
    long long _autoFocusRangeRestriction;
    long long _focusMode;
    id /* CDUnknownBlockType */ _scannedCodeHandler;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ scannedCodeHandler; // @synthesize scannedCodeHandler=_scannedCodeHandler;
@property(nonatomic) long long focusMode; // @synthesize focusMode=_focusMode;
@property(nonatomic) long long autoFocusRangeRestriction; // @synthesize autoFocusRangeRestriction=_autoFocusRangeRestriction;
// - (void).cxx_destruct;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer )arg2 fromConnection:(id)arg3;
- (void)_handleCaptureSessionInterruptionEnded:(id)arg1;
- (void)_handleCaptureSessionInterrupted:(id)arg1;
- (void)_handleCaptureSessionRuntimeError:(id)arg1;
- (void)_handleCaptureSessionStopped:(id)arg1;
- (void)_handleCaptureSessionStarted:(id)arg1;
- (id)_setupDevice:(id)arg1;
- (id)_setupCapture;
- (void)stop;
- (void)start;
- (void)layoutSubviews;
- (void)_initCommon;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end


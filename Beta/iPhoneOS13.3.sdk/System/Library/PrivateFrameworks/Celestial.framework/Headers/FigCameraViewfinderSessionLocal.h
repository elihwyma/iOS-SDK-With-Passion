/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/FigCameraViewfinderSession.h>

@class FigCameraViewfinderLocal, FigCameraViewfinderStream, FigCaptureSessionProxy, FigStateMachine, NSObject, NSString;

@protocol OS_dispatch_queue;

@interface FigCameraViewfinderSessionLocal : FigCameraViewfinderSession

{
    FigCameraViewfinderLocal *_viewfinder;
    FigStateMachine *_stateMachine;
    _Bool _ended;
    FigCaptureSessionProxy *_captureSessionProxy;
    long long _identifier;
    FigCameraViewfinderStream *_previewStream;
    NSObject<OS_dispatch_queue> *_previewStreamQueue;
    _Bool _previewStreamClosed;
    int _previewStreamClosedErrorStatus;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (long long)identifier;
- (void)_setupStateMachine;
- (void)openPreviewStreamWithOptions:(id)arg1;
- (void)closePreviewStream;
- (id)_initWithOwningViewfinder:(id)arg1 captureSessionProxy:(id)arg2 delegateStorage:(id)arg3;
- (void)_captureSessionDidCapturePhotoWithStatus:(int)arg1 thumbnailData:(id)arg2 timestamp:(CDStruct_1b6d18a9)arg3;
- (void)_captureSessionDidStop;
- (void)_closePreviewStream;
- (void)captureSessionPreviewTapDidOpen:(id)arg1;
- (void)captureSessionPreviewTapDidClose:(id)arg1;
- (void)captureSession:(id)arg1 previewTapDidOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)cameraViewfinderStreamDidOpen:(id)arg1;
- (void)cameraViewfinderStream:(id)arg1 didCloseWithStatus:(int)arg2;
- (id)viewfinder;

@end

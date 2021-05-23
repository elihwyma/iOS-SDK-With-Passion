/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVCaptureInputInternal, NSArray;

@interface AVCaptureInput : NSObject

{
    AVCaptureInputInternal *_inputInternal;
}

@property (nonatomic, readonly) NSArray *ports;

+ (void)initialize;

- (void)dealloc;
- (id)session;
- (void)setSession:(id)arg1;
- (struct OpaqueCMClock *)clock;
- (id)initSubclass;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (void)performFigCaptureSessionOperationSafelyUsingBlock:(CDUnknownBlockType)arg1;
- (void)handleChangedActiveFormat:(id)arg1 forDevice:(id)arg2;
- (id)videoDevice;
- (void)attachToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (void)detachFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;

@end

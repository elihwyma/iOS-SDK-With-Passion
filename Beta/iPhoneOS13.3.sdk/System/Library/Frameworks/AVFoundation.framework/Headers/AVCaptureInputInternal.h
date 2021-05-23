/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVCaptureSession;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVCaptureInputInternal : NSObject

{
    AVCaptureSession *session;
    NSObject<OS_dispatch_queue> *figCaptureSessionSyncQueue;
    struct OpaqueFigCaptureSession *figCaptureSession;
}

- (id)init;
- (void)dealloc;

@end

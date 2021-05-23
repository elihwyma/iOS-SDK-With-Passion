/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVCaptureSession, NSMutableArray, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVCaptureOutputInternal : NSObject

{
    NSObject<OS_dispatch_queue> *figCaptureSessionSyncQueue;
    struct OpaqueFigCaptureSession *figCaptureSession;
    AVCaptureSession *session;
    NSString *sinkID;
    NSMutableArray *connections;
    int changeSeed;
    struct CGAffineTransform metadataTransform;
    double rollAdjustment;
    _Bool physicallyMirrorsVideo;
}

- (id)init;
- (void)dealloc;

@end

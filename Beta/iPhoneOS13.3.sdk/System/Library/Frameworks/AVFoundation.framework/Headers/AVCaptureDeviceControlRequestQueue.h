/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVCaptureDeviceControlRequestQueue : NSObject

{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableArray *_mutableArray;
}

- (id)init;
- (void)dealloc;
- (id)head;
- (void)enqueueRequest:(id)arg1;
- (id)dequeue;

@end

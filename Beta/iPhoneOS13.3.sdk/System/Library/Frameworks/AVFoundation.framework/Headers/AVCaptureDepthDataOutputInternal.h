/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVCaptureDataOutputDelegateCallbackHelper, AVWeakReference;

__attribute__((visibility("hidden")))
@interface AVCaptureDepthDataOutputInternal : NSObject

{
    AVCaptureDataOutputDelegateCallbackHelper *delegateCallbackHelper;
    AVWeakReference *weakReference;
    _Bool alwaysDiscardsLateDepthData;
    _Bool filteringEnabled;
}

- (id)init;
- (void)dealloc;

@end

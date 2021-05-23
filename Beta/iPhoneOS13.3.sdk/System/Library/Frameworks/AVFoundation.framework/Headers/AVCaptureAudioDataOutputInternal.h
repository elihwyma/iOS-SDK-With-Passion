/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVCaptureDataOutputDelegateCallbackHelper, AVWeakReference;

__attribute__((visibility("hidden")))
@interface AVCaptureAudioDataOutputInternal : NSObject

{
    AVCaptureDataOutputDelegateCallbackHelper *delegateCallbackHelper;
    AVWeakReference *weakReference;
}

- (id)init;
- (void)dealloc;

@end

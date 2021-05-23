/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVCaptureDeviceInput;

__attribute__((visibility("hidden")))
@interface AVCaptureDeviceInternal : NSObject

{
    int openRefCount;
    int configLockRefCount;
    int configLockPid;
    _Bool usingDevice;
    AVCaptureDeviceInput *activeInput;
}

@end

/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSObject.h>

@class AVCaptureDevice, AVCaptureDeviceFormat;

@interface AXMCaptureSettings : NSObject

{
    AVCaptureDevice *_captureDevice;
    AVCaptureDeviceFormat *_captureFormat;
}

@property (retain, nonatomic) AVCaptureDevice *captureDevice;
@property (retain, nonatomic) AVCaptureDeviceFormat *captureFormat;

@end

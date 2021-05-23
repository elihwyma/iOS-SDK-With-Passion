/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVCaptureDeviceControlRequest.h>

__attribute__((visibility("hidden")))
@interface AVCaptureDeviceFakeBiasControlRequest : AVCaptureDeviceControlRequest

{
    float _fakeBias;
    CDStruct_1b6d18a9 _fakeBiasCompletionTime;
}

@property (nonatomic) float fakeBias;
@property (nonatomic) CDStruct_1b6d18a9 fakeBiasCompletionTime;

@end

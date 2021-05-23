/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class FigCaptureSourceFormat, NSArray;

__attribute__((visibility("hidden")))
@interface AVCaptureDeviceFormatInternal : NSObject

{
    FigCaptureSourceFormat *sourceFormat;
    NSArray *videoSupportedFrameRateRanges;
    CDStruct_1b6d18a9 defaultActiveMinFrameDuration;
    CDStruct_1b6d18a9 defaultActiveMaxFrameDuration;
    NSArray *supportedDepthDataFormats;
}

@end

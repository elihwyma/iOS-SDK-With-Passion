/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVCaptureInputPort, NSString;

__attribute__((visibility("hidden")))
@interface AVCaptureMetadataInputInternal : NSObject

{
    AVCaptureInputPort *metadataPort;
    NSString *sourceID;
    struct opaqueCMFormatDescription *desc;
    struct OpaqueCMClock *clock;
    struct OpaqueCMBlockBuffer *emptyBoxedMetadata;
}

@end

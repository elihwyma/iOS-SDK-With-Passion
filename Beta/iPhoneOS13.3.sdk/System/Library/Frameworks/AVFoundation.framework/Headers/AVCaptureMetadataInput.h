/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVCaptureInput.h>

@class AVCaptureMetadataInputInternal;

@interface AVCaptureMetadataInput : AVCaptureInput

{
    AVCaptureMetadataInputInternal *_internal;
}

+ (id)metadataInputWithFormatDescription:(struct opaqueCMFormatDescription *)arg1 clock:(struct OpaqueCMClock *)arg2;

- (id)init;
- (void)dealloc;
- (id)sourceID;
- (struct OpaqueCMClock *)clock;
- (id)ports;
- (id)initWithFormatDescription:(struct opaqueCMFormatDescription *)arg1 clock:(struct OpaqueCMClock *)arg2;
- (_Bool)appendTimedMetadataGroup:(id)arg1 error:(id *)arg2;

@end

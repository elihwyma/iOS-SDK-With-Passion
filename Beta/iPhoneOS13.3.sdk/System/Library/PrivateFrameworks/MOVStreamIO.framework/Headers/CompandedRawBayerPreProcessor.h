/*
 Image: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CompandedRawBayerPreProcessor : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (struct __CVBuffer *)processedPixelBufferCopyOf:(struct __CVBuffer *)arg1 streamData:(struct StreamRecordingData *)arg2 error:(id *)arg3;
- (const struct opaqueCMFormatDescription *)formatDescriptionForPixelBuffer:(struct __CVBuffer *)arg1 streamData:(struct StreamRecordingData *)arg2;
- (const struct opaqueCMFormatDescription *)trackFormatDescriptionFromStreamData:(struct StreamRecordingData *)arg1;
- (unsigned int)inputPixelFormatFromStreamData:(struct StreamRecordingData *)arg1;
- (unsigned int)encodedPixelFormatFromStreamData:(struct StreamRecordingData *)arg1;

@end

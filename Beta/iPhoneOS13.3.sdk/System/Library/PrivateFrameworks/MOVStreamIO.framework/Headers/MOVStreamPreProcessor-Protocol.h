/*
 Image: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
 */

#import <MOVStreamIO/Swift-Protocol.h>

@protocol MOVStreamPreProcessor <Swift>

- (unsigned short)processedPixelBufferCopyOf:streamData:error: /* Error: Ran out of types for this method. */;
- (unsigned short)formatDescriptionForPixelBuffer:streamData: /* Error: Ran out of types for this method. */;
- (unsigned short)trackFormatDescriptionFromStreamData: /* Error: Ran out of types for this method. */;
- (unsigned short)inputPixelFormatFromStreamData: /* Error: Ran out of types for this method. */;
- (unsigned short)encodedPixelFormatFromStreamData: /* Error: Ran out of types for this method. */;

@end

/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNImageSpecifier.h>

__attribute__((visibility("hidden")))
@interface _VNPixelBufferSpecifier : VNImageSpecifier

{
    struct __CVBuffer *_pixelBuffer;
}

- (void)dealloc;
- (id)description;
- (struct __CVBuffer *)pixelBuffer;
- (id)initWithCVPixelBuffer:(struct __CVBuffer *)arg1;
- (id)newImageBufferWithOptions:(id)arg1 error:(id *)arg2;

@end

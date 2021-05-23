/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNImageSpecifier.h>

__attribute__((visibility("hidden")))
@interface _VNCGImageSpecifier : VNImageSpecifier

{
    struct CGImage *_cgImage;
}

- (void)dealloc;
- (id)description;
- (id)initWithCGImage:(struct CGImage *)arg1;
- (id)newImageBufferWithOptions:(id)arg1 error:(id *)arg2;
- (struct CGImage *)cgImage;

@end

/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNImageSpecifier.h>

@class CIImage;

__attribute__((visibility("hidden")))
@interface _VNCIImageSpecifier : VNImageSpecifier

{
    CIImage *_ciImage;
}

- (id)description;
- (id)initWithCIImage:(id)arg1;
- (id)newImageBufferWithOptions:(id)arg1 error:(id *)arg2;
- (id)ciImage;

@end

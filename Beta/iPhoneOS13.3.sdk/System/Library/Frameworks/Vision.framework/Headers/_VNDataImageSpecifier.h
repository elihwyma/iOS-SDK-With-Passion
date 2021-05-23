/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNImageSpecifier.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface _VNDataImageSpecifier : VNImageSpecifier

{
    NSData *_data;
}

- (id)initWithData:(id)arg1;
- (id)data;
- (id)newImageBufferWithOptions:(id)arg1 error:(id *)arg2;

@end

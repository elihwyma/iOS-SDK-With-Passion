/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNImageSpecifier.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface _VNURLImageSpecifier : VNImageSpecifier

{
    NSURL *_url;
}

- (id)initWithURL:(id)arg1;
- (id)url;
- (id)newImageBufferWithOptions:(id)arg1 error:(id *)arg2;

@end

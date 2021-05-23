/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVOutputSettings;

__attribute__((visibility("hidden")))
@interface AVFormatSpecification : NSObject

{
    AVOutputSettings *_outputSettings;
    struct opaqueCMFormatDescription *_sourceFormatDescription;
}

+ (id)formatSpecificationWithOutputSettings:(id)arg1 sourceFormatDescription:(struct opaqueCMFormatDescription *)arg2;

- (void)dealloc;
- (id)outputSettings;
- (struct opaqueCMFormatDescription *)sourceFormatDescription;
- (id)initWithOutputSettings:(id)arg1 sourceFormatDescription:(struct opaqueCMFormatDescription *)arg2;

@end

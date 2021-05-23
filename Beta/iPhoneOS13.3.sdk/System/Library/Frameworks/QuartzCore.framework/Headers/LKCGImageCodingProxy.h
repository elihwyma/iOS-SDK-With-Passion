/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <QuartzCore/CACodingProxy.h>

__attribute__((visibility("hidden")))
@interface LKCGImageCodingProxy : CACodingProxy

{
    struct CGImage *_image;
}

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)initWithObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)decodedObject;

@end

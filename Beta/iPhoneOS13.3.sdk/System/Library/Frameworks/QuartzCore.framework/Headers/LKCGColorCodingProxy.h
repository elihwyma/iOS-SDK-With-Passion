/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <QuartzCore/CACodingProxy.h>

__attribute__((visibility("hidden")))
@interface LKCGColorCodingProxy : CACodingProxy

{
    struct CGColor *_color;
}

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)initWithObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)decodedObject;

@end

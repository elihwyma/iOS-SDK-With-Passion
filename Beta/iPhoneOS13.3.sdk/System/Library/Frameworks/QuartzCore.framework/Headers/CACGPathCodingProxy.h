/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <QuartzCore/CACodingProxy.h>

__attribute__((visibility("hidden")))
@interface CACGPathCodingProxy : CACodingProxy

{
    struct CGPath *_path;
}

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)initWithObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)decodedObject;

@end

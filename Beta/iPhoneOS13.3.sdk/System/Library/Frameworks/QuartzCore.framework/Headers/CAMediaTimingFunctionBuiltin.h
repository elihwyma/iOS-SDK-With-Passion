/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <QuartzCore/CAMediaTimingFunction.h>

__attribute__((visibility("hidden")))
@interface CAMediaTimingFunctionBuiltin : CAMediaTimingFunction

{
    unsigned int _index;
}

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)_getPoints:(double *)arg1;

@end

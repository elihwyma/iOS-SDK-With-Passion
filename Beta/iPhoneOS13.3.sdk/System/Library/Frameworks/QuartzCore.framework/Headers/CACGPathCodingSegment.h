/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CACGPathCodingSegment : NSObject

{
    int _type;
    struct CGPoint _points[3];
}

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)addToCGPath:(struct CGPath *)arg1;
- (id)initWithCGPathElement:(const struct CGPathElement *)arg1;

@end

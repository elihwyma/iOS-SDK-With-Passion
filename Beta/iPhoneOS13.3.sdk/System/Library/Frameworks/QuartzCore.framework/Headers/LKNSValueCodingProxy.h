/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <QuartzCore/CACodingProxy.h>

__attribute__((visibility("hidden")))
@interface LKNSValueCodingProxy : CACodingProxy

{
    int _kind;
    union {
        struct CGPoint point;
        struct CGSize size;
        struct CGRect rect;
        struct CATransform3D transform;
        struct CAPoint3D point3d;
        struct CAColorMatrix color_matrix;
        struct CGAffineTransform affine_transform;
    } _u;
}

+ (_Bool)supportsSecureCoding;

- (id)initWithObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)decodedObject;

@end

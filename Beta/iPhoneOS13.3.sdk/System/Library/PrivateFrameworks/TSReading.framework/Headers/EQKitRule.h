/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/EQKitBox.h>

@interface EQKitRule : EQKitBox

{
    double mHeight;
    double mDepth;
    double mWidth;
    struct CGColor *mCGColor;
}

@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) double depth;
@property (nonatomic, readonly) double width;
@property (nonatomic, readonly) struct CGColor *color;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)renderIntoContext:(struct CGContext *)arg1 offset:(struct CGPoint)arg2;
- (_Bool)appendOpticalAlignToSpec:(struct Spec *)arg1 offset:(struct CGPoint)arg2;
- (id)initWithHeight:(double)arg1 depth:(double)arg2 width:(double)arg3 cgColor:(struct CGColor *)arg4;

@end

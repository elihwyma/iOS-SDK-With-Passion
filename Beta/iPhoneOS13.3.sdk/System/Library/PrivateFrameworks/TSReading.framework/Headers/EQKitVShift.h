/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/EQKitBox.h>

@interface EQKitVShift : EQKitBox

{
    EQKitBox *mBox;
    double mOffset;
}

@property (nonatomic, readonly) EQKitBox *box;
@property (nonatomic, readonly) double offset;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)depth;
- (double)width;
- (double)height;
- (_Bool)p_getTransform:(struct CGAffineTransform *)arg1 fromDescendant:(id)arg2;
- (struct CGRect)erasableBounds;
- (void)renderIntoContext:(struct CGContext *)arg1 offset:(struct CGPoint)arg2;
- (_Bool)appendOpticalAlignToSpec:(struct Spec *)arg1 offset:(struct CGPoint)arg2;
- (id)initWithBox:(id)arg1 offset:(double)arg2;

@end

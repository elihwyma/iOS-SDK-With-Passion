/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@interface FxTransform : NSObject

{
    struct FxTransformPriv *_priv;
}

+ (id)identity;
+ (id)transformWithCGAffineTransform:(struct CGAffineTransform)arg1;
+ (id)transformWithScale:(struct CGPoint)arg1 rotate:(float)arg2 translate:(struct CGPoint)arg3 shear:(struct CGPoint)arg4;

- (void)dealloc;
- (struct CGPoint)scale;
- (id)initWithCGAffineTransform:(struct CGAffineTransform)arg1;
- (void)setScale:(struct CGPoint)arg1;
- (float)rotation;
- (void)setRotation:(float)arg1;
- (struct CGPoint)translation;
- (void)setTranslation:(struct CGPoint)arg1;
- (struct CGPoint)shear;
- (void)setShear:(struct CGPoint)arg1;
- (void)setCGAffineTransform:(struct CGAffineTransform)arg1;
- (id)initWithScale:(struct CGPoint)arg1 rotate:(float)arg2 translate:(struct CGPoint)arg3 shear:(struct CGPoint)arg4;
- (struct CGAffineTransform)cgAffineTransform;

@end

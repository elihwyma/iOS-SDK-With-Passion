/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface OADOrientedBounds : NSObject

{
    struct CGRect mBounds;
    float mRotation;
    unsigned int mFlipX:1;
    unsigned int mFlipY:1;
    int mModeX;
    int mModeY;
}

+ (id)orientedBoundsWithBounds:(struct CGRect)arg1;
+ (id)orientedBoundsWithBounds:(struct CGRect)arg1 rotation:(float)arg2 flipX:(_Bool)arg3 flipY:(_Bool)arg4;
+ (_Bool)directionCloserToVerticalThanToHorizontal:(float)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (struct CGRect)bounds;
- (void)setBounds:(struct CGRect)arg1;
- (struct CGRect)boundingBox;
- (float)rotation;
- (void)setRotation:(float)arg1;
- (id)initWithBounds:(struct CGRect)arg1;
- (_Bool)flipX;
- (void)setFlipX:(_Bool)arg1;
- (_Bool)flipY;
- (void)setFlipY:(_Bool)arg1;
- (void)setOrientedBounds:(id)arg1;
- (id)initWithBounds:(struct CGRect)arg1 rotation:(float)arg2 flipX:(_Bool)arg3 flipY:(_Bool)arg4;
- (struct CGSize)boundingBoxSize;
- (int)xMode;
- (int)yMode;
- (void)setXMode:(int)arg1;
- (void)setYMode:(int)arg1;
- (_Bool)isEqualToOrientedBounds:(id)arg1;

@end

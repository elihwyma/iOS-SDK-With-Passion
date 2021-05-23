/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@interface FxMatrix44 : NSObject

{
    double _mat[4][4];
}

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (id)copy;
- (_Bool)invert;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double (*)[4][4])matrix;
- (void)setMatrix:(double [4][4])arg1;
- (void)transpose;
- (id)initWithMatrix44Data:(double [4][4])arg1;
- (struct CGPoint)transform2DPoint:(struct CGPoint)arg1;
- (id)initWithFxMatrix:(id)arg1;
- (_Bool)_planarInverseZ;
- (id)initWithColorMatrix44Data:(double [4][4])arg1;
- (void)setToIdentity;
- (struct FxPoint3D)transform3DPoint:(struct FxPoint3D)arg1;

@end

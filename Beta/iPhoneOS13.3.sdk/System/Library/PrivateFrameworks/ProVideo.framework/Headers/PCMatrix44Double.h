/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@interface PCMatrix44Double : NSObject

{
    double _m[4][4];
    PCMatrix44Tmpl_93ed1289 *_pcMatrix;
}

@property (nonatomic) CDStruct_14d5dc5e SIMDFloat4x4;
@property (nonatomic) CDStruct_14d5dc5e SIMDDouble4x4;

+ (_Bool)supportsSecureCoding;
+ (id)matrixWithSIMDDouble4x4:(CDStruct_14d5dc5e)arg1;
+ (id)matrixWithSIMDFloat4x4:(CDStruct_14d5dc5e)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithArray:(id)arg1;
- (id)array;
- (_Bool)invert;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isIdentity;
- (id)extendedDescription;
- (id)compactDescription;
- (void)transpose;
- (CDStruct_a6477b43)transformInfo;
- (void)makeIdentity;
- (void)leftScaleX:(double)arg1 scaleY:(double)arg2 scaleZ:(double)arg3;
- (void)leftRotate:(double)arg1 axis:(int)arg2;
- (void)leftTranslateX:(double)arg1 translateY:(double)arg2 translateZ:(double)arg3;
- (void)rightTranslateX:(double)arg1 translateY:(double)arg2 translateZ:(double)arg3;
- (void)rightRotate:(double)arg1 axis:(int)arg2;
- (void)rightScaleX:(double)arg1 scaleY:(double)arg2 scaleZ:(double)arg3;
- (id)initWithSIMDFloat4x4:(CDStruct_14d5dc5e)arg1;
- (id)initWithSIMDDouble4x4:(CDStruct_14d5dc5e)arg1;
- (PCMatrix44Tmpl_93ed1289 *)pcMatrix;
- (id)initWithPCMatrix:(PCMatrix44Tmpl_93ed1289 *)arg1;
- (void)leftMult:(id)arg1;
- (id)initWithDoubles:(double [16])arg1 external:(_Bool)arg2;
- (id)initWithDoubles:(double [16])arg1;
- (void)getDoubles:(double [16])arg1;
- (_Bool)invert2D;
- (double)doubleValueAtRow:(unsigned int)arg1 col:(unsigned int)arg2;
- (void)setDoubleValue:(double)arg1 atRow:(unsigned int)arg2 col:(unsigned int)arg3;
- (void)setDoubles:(double [16])arg1;
- (void)leftShearX:(double)arg1 shearY:(double)arg2;
- (void)rightShearX:(double)arg1 shearY:(double)arg2;
- (void)scaleSizeX:(double)arg1 sizeY:(double)arg2 sizeZ:(double)arg3 scaledSizeX:(double *)arg4 scaledSizeY:(double *)arg5 scaledSizeZ:(double *)arg6;
- (void)rightMult:(id)arg1;
- (void)leftFlipAboutY:(double)arg1;
- (id)newTransformTo:(id)arg1;
- (id)newPlanarTransformTo:(id)arg1;

@end

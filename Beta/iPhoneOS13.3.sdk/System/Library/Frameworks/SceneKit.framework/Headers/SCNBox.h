/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNGeometry.h>

@interface SCNBox : SCNGeometry

{
    double _boxwidth;
    double _boxheight;
    double _boxlength;
    double _boxchamferRadius;
    long long _boxwidthSegmentCount;
    long long _boxheightSegmentCount;
    long long _boxlengthSegmentCount;
    long long _boxchamferSegmentCount;
    long long _boxprimitiveType;
}

@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) double length;
@property (nonatomic) double chamferRadius;
@property (nonatomic) long long widthSegmentCount;
@property (nonatomic) long long heightSegmentCount;
@property (nonatomic) long long lengthSegmentCount;
@property (nonatomic) long long chamferSegmentCount;

+ (_Bool)supportsSecureCoding;
+ (id)box;
+ (id)boxWithWidth:(double)arg1 height:(double)arg2 length:(double)arg3 chamferRadius:(double)arg4;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)primitiveType;
- (void)setPrimitiveType:(long long)arg1;
- (_Bool)getBoundingBoxMin:(struct SCNVector3 *)arg1 max:(struct SCNVector3 *)arg2;
- (id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;
- (id)presentationGeometry;
- (_Bool)getBoundingSphereCenter:(struct SCNVector3 *)arg1 radius:(double *)arg2;
- (void)_setupObjCModelFrom:(id)arg1;
- (struct __C3DGeometry *)__createCFObject;
- (void)_syncObjCModel:(struct __C3DParametricGeometry *)arg1;
- (id)initPresentationParametricGeometryWithParametricGeometryRef:(struct __C3DParametricGeometry *)arg1;
- (id)initWithParametricGeometryRef:(struct __C3DParametricGeometry *)arg1;
- (id)presentationBox;

@end

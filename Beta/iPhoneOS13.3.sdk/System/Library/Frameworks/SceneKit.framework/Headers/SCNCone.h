/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNGeometry.h>

@interface SCNCone : SCNGeometry

{
    double _conetopRadius;
    double _conebottomRadius;
    double _coneheight;
    long long _coneheightSegmentCount;
    long long _coneradialSegmentCount;
    long long _coneprimitiveType;
}

@property (nonatomic) double topRadius;
@property (nonatomic) double bottomRadius;
@property (nonatomic) double height;
@property (nonatomic) long long radialSegmentCount;
@property (nonatomic) long long heightSegmentCount;

+ (_Bool)supportsSecureCoding;
+ (id)coneWithTopRadius:(double)arg1 bottomRadius:(double)arg2 height:(double)arg3;

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
- (id)presentationCone;

@end

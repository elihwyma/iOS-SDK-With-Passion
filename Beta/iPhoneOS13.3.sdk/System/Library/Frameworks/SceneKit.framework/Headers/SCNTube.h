/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNGeometry.h>

@interface SCNTube : SCNGeometry

{
    double _tubeinnerRadius;
    double _tubeouterRadius;
    double _tubeheight;
    double _tuberadialSpan;
    long long _tubeheightSegmentCount;
    long long _tuberadialSegmentCount;
    long long _tubeprimitiveType;
}

@property (nonatomic) double innerRadius;
@property (nonatomic) double outerRadius;
@property (nonatomic) double height;
@property (nonatomic) long long radialSegmentCount;
@property (nonatomic) long long heightSegmentCount;

+ (_Bool)supportsSecureCoding;
+ (id)tubeWithInnerRadius:(double)arg1 outerRadius:(double)arg2 height:(double)arg3;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)primitiveType;
- (void)setPrimitiveType:(long long)arg1;
- (_Bool)getBoundingBoxMin:(struct SCNVector3 *)arg1 max:(struct SCNVector3 *)arg2;
- (void)setRadialSpan:(double)arg1;
- (id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;
- (id)presentationGeometry;
- (_Bool)getBoundingSphereCenter:(struct SCNVector3 *)arg1 radius:(double *)arg2;
- (void)_setupObjCModelFrom:(id)arg1;
- (struct __C3DGeometry *)__createCFObject;
- (void)_syncObjCModel:(struct __C3DParametricGeometry *)arg1;
- (id)initPresentationParametricGeometryWithParametricGeometryRef:(struct __C3DParametricGeometry *)arg1;
- (id)initWithParametricGeometryRef:(struct __C3DParametricGeometry *)arg1;
- (double)radialSpan;
- (id)presentationTube;

@end

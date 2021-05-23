/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNGeometry.h>

@interface SCNSphere : SCNGeometry

{
    double _sphereradius;
    double _sphereradialSpan;
    long long _spheresegmentCount;
    long long _sphereprimitiveType;
    _Bool _spheregeodesic;
    _Bool _spherehemispheric;
}

@property (nonatomic) double radius;
@property (nonatomic, getter=isGeodesic) _Bool geodesic;
@property (nonatomic) long long segmentCount;

+ (_Bool)supportsSecureCoding;
+ (id)sphereWithRadius:(double)arg1;

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
- (id)presentationSphere;
- (double)radialSpan;
- (_Bool)isHemispheric;
- (void)setHemispheric:(_Bool)arg1;
- (_Bool)geodesic;

@end

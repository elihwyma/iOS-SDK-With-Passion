/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNGeometry.h>

@interface SCNCapsule : SCNGeometry

{
    double _capsulecapRadius;
    double _capsuleheight;
    long long _capsuleheightSegmentCount;
    long long _capsuleradialSegmentCount;
    long long _capsulecapSegmentCount;
    long long _capsuleprimitiveType;
}

@property (nonatomic) double capRadius;
@property (nonatomic) double height;
@property (nonatomic) long long radialSegmentCount;
@property (nonatomic) long long heightSegmentCount;
@property (nonatomic) long long capSegmentCount;

+ (_Bool)supportsSecureCoding;
+ (id)capsuleWithCapRadius:(double)arg1 height:(double)arg2;

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
- (id)presentationCapsule;

@end

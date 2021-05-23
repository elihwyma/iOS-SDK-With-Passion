/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNGeometry.h>

@interface SCNTorus : SCNGeometry

{
    double _torusringRadius;
    double _toruspipeRadius;
    double _torusradialSpan;
    long long _torusringSegmentCount;
    long long _toruspipeSegmentCount;
    long long _torusprimitiveType;
}

@property (nonatomic) double ringRadius;
@property (nonatomic) double pipeRadius;
@property (nonatomic) long long ringSegmentCount;
@property (nonatomic) long long pipeSegmentCount;

+ (_Bool)supportsSecureCoding;
+ (id)torusWithRingRadius:(double)arg1 pipeRadius:(double)arg2;

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
- (id)presentationTorus;

@end

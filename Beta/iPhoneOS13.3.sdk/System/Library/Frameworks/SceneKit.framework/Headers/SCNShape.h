/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNGeometry.h>

@class UIBezierPath;

@interface SCNShape : SCNGeometry

{
    float _chamferRadius;
    float _extrusionDepth;
    float _discretizedStraightLineMaxLength;
    UIBezierPath *_chamferProfile;
    long long _primitiveType;
    long long _chamferMode;
    UIBezierPath *_path;
}

@property (copy, nonatomic) UIBezierPath *path;
@property (nonatomic) double extrusionDepth;
@property (nonatomic) long long chamferMode;
@property (nonatomic) double chamferRadius;
@property (copy, nonatomic) UIBezierPath *chamferProfile;

+ (_Bool)supportsSecureCoding;
+ (id)shapeWithPath:(id)arg1 extrusionDepth:(double)arg2;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (CDStruct_d3ce6806)params;
- (long long)primitiveType;
- (void)setPrimitiveType:(long long)arg1;
- (_Bool)getBoundingBoxMin:(struct SCNVector3 *)arg1 max:(struct SCNVector3 *)arg2;
- (id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;
- (id)presentationGeometry;
- (_Bool)getBoundingSphereCenter:(struct SCNVector3 *)arg1 radius:(double *)arg2;
- (struct __C3DGeometry *)__createCFObject;
- (void)_syncObjCModel:(struct __C3DShapeGeometry *)arg1;
- (void)setDiscretizedStraightLineMaxLength:(double)arg1;
- (double)discretizedStraightLineMaxLength;
- (id)initPresentationShapeGeometryWithShapeGeometryRef:(struct __C3DShapeGeometry *)arg1;
- (void)_customEncodingOfSCNShape:(id)arg1;
- (void)_customDecodingOfSCNShape:(id)arg1;
- (id)initWithShapeGeometryRef:(struct __C3DShapeGeometry *)arg1;

@end

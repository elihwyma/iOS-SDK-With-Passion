/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNGeometry.h>

@interface SCNPyramid : SCNGeometry

{
    double _pyramidwidth;
    double _pyramidheight;
    double _pyramidlength;
    long long _pyramidwidthSegmentCount;
    long long _pyramidheightSegmentCount;
    long long _pyramidlengthSegmentCount;
    long long _pyramidprimitiveType;
}

@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) double length;
@property (nonatomic) long long widthSegmentCount;
@property (nonatomic) long long heightSegmentCount;
@property (nonatomic) long long lengthSegmentCount;

+ (_Bool)supportsSecureCoding;
+ (id)pyramidWithWidth:(double)arg1 height:(double)arg2 length:(double)arg3;

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
- (id)presentationPyramid;

@end

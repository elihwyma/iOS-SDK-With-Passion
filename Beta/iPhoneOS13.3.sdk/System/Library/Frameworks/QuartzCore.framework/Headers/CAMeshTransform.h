/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CAMeshTransform : NSObject

{
    void *_impl;
    unsigned long long _normalization;
    long long _subdivisionSteps;
    _Bool _replicatesEdges;
}

@property (readonly) unsigned long long vertexCount;
@property (readonly) unsigned long long faceCount;
@property (copy, readonly) NSString *depthNormalization;
@property (readonly) int subdivisionSteps;
@property (readonly) _Bool replicatesEdges;

+ (_Bool)supportsSecureCoding;
+ (id)meshTransformWithVertexCount:(unsigned long long)arg1 vertices:(const struct CAMeshVertex *)arg2 faceCount:(unsigned long long)arg3 faces:(const struct CAMeshFace *)arg4 depthNormalization:(id)arg5;
+ (void)CAMLParserEndElement:(id)arg1 content:(id)arg2;
+ (void)CAMLParserStartElement:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;
- (id)_data;
- (double)CA_distanceToValue:(id)arg1;
- (id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2;
- (struct CAMeshVertex)vertexAtIndex:(unsigned long long)arg1;
- (struct CAMeshFace)faceAtIndex:(unsigned long long)arg1;
- (struct Object *)CA_copyRenderValue;
- (void)encodeWithCAMLWriter:(id)arg1;
- (id)initWithVertexCount:(unsigned long long)arg1 vertices:(const struct CAMeshVertex *)arg2 faceCount:(unsigned long long)arg3 faces:(const struct CAMeshFace *)arg4 depthNormalization:(id)arg5;
- (id)_initWithMeshTransform:(id)arg1;
- (_Bool)_constructWithData:(id)arg1;
- (id)_subdivideToDepth:(long long)arg1;
- (id)subdividedMesh:(int)arg1;
- (id)inverseMesh;
- (id)CA_interpolateValues:(id)arg1:(id)arg2:(id)arg3 interpolator:(const struct ValueInterpolator *)arg4;
- (id)meshTransformForLayer:(id)arg1;

@end

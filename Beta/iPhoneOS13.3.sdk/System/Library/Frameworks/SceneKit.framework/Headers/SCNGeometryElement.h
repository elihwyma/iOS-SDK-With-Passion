/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface SCNGeometryElement : NSObject

{
    struct __C3DMeshElement *_meshElement;
    NSData *_elementData;
    long long _primitiveType;
    long long _primitiveCount;
    struct _NSRange _primitiveRange;
    long long _indicesChannelCount;
    _Bool _interleavedIndicesChannels;
    long long _bytesPerIndex;
    float _pointSize;
    float _minimumPointScreenSpaceRadius;
    float _maximumPointScreenSpaceRadius;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) long long primitiveType;
@property (nonatomic, readonly) long long primitiveCount;
@property (nonatomic) struct _NSRange primitiveRange;
@property (nonatomic, readonly) long long bytesPerIndex;
@property (nonatomic) double pointSize;
@property (nonatomic) double minimumPointScreenSpaceRadius;
@property (nonatomic) double maximumPointScreenSpaceRadius;

+ (_Bool)supportsSecureCoding;
+ (id)geometryElementWithMDLSubmesh:(id)arg1;
+ (id)geometryElementWithData:(id)arg1 primitiveType:(long long)arg2 primitiveCount:(long long)arg3 bytesPerIndex:(long long)arg4;
+ (id)geometryElementWithData:(id)arg1 primitiveType:(long long)arg2 primitiveCount:(long long)arg3 indicesChannelCount:(long long)arg4 interleavedIndicesChannels:(_Bool)arg5 bytesPerIndex:(long long)arg6;
+ (id)geometryElementWithMeshElementRef:(struct __C3DMeshElement *)arg1;
+ (id)_optimizedGeometryElementWithData:(id)arg1 primitiveType:(long long)arg2 primitiveCount:(long long)arg3 bytesPerIndex:(long long)arg4;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)scene;
- (unsigned long long)indexCount;
- (long long)indicesChannelCount;
- (_Bool)hasInterleavedIndicesChannels;
- (const void *)__CFObject;
- (struct __C3DScene *)sceneRef;
- (struct __C3DMeshElement *)meshElement;
- (void)_printData;
- (id)initWithMeshElement:(struct __C3DMeshElement *)arg1;
- (id)initWithData:(id)arg1 primitiveType:(long long)arg2 primitiveCount:(long long)arg3 indicesChannelCount:(long long)arg4 interleavedIndicesChannels:(_Bool)arg5 bytesPerIndex:(long long)arg6;
- (void)_optimizeTriangleIndices;
- (double)_computeACMR;

@end

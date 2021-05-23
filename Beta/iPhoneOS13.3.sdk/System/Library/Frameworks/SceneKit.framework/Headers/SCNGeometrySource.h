/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@protocol MTLBuffer;

@interface SCNGeometrySource : NSObject

{
    struct __C3DMeshSource *_meshSource;
    NSData *_data;
    NSString *_semantic;
    long long _vectorCount;
    short _componentType;
    unsigned short _componentCount;
    long long _dataOffset;
    long long _dataStride;
    unsigned char _mkSemantic;
    id <MTLBuffer> _mtlBuffer;
    long long _mtlVertexFormat;
    _Bool _encodeDataAsHalf;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSString *semantic;
@property (nonatomic, readonly) long long vectorCount;
@property (nonatomic, readonly) _Bool floatComponents;
@property (nonatomic, readonly) long long componentsPerVector;
@property (nonatomic, readonly) long long bytesPerComponent;
@property (nonatomic, readonly) long long dataOffset;
@property (nonatomic, readonly) long long dataStride;

+ (_Bool)supportsSecureCoding;
+ (id)geometrySourceWithData:(id)arg1 semantic:(id)arg2 vectorCount:(long long)arg3 floatComponents:(_Bool)arg4 componentsPerVector:(long long)arg5 bytesPerComponent:(long long)arg6 dataOffset:(long long)arg7 dataStride:(long long)arg8;
+ (id)geometrySourceWithMDLVertexAttribute:(id)arg1 mesh:(id)arg2;
+ (id)geometrySourceWithMeshSourceRef:(struct __C3DMeshSource *)arg1;
+ (id)_geometrySourceWithData:(id)arg1 semantic:(id)arg2 vectorCount:(long long)arg3 componentType:(short)arg4 componentCount:(unsigned long long)arg5 dataOffset:(long long)arg6 dataStride:(long long)arg7;
+ (id)geometrySourceWithVertices:(const struct SCNVector3 *)arg1 count:(long long)arg2;
+ (id)dataByConvertingDoublesToFloats:(const double *)arg1 count:(long long)arg2;
+ (id)dataWithVector3Array:(const struct SCNVector3 *)arg1 count:(long long)arg2 bytesPerComponent:(long long *)arg3;
+ (id)dataWithPointArray:(const struct CGPoint *)arg1 count:(long long)arg2 bytesPerComponent:(long long *)arg3;
+ (id)geometrySourceWithNormals:(const struct SCNVector3 *)arg1 count:(long long)arg2;
+ (id)geometrySourceWithTextureCoordinates:(const struct CGPoint *)arg1 count:(long long)arg2;
+ (id)geometrySourceWithColorComponents:(const float *)arg1 count:(long long)arg2 hasAlpha:(_Bool)arg3 colorSpace:(struct CGColorSpace *)arg4;
+ (id)geometrySourceWithBuffer:(id)arg1 vertexFormat:(unsigned long long)arg2 semantic:(id)arg3 vertexCount:(long long)arg4 dataOffset:(long long)arg5 dataStride:(long long)arg6;
+ (id)_geometrySourceWithSource:(id)arg1 vertexFormat:(unsigned long long)arg2;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)scene;
- (short)_componentType;
- (void)setMkSemantic:(id)arg1;
- (id)mkSemantic;
- (const void *)__CFObject;
- (struct __C3DScene *)sceneRef;
- (void)_clearC3DCache;
- (const struct __C3DMeshSource *)meshSource;
- (id)initWithMeshSource:(struct __C3DMeshSource *)arg1;
- (_Bool)_encodeDataAsHalf;
- (void)set_encodeDataAsHalf:(_Bool)arg1;
- (id)initWithData:(id)arg1 semantic:(id)arg2 vectorCount:(long long)arg3 floatComponents:(_Bool)arg4 componentsPerVector:(long long)arg5 bytesPerComponent:(long long)arg6 dataOffset:(long long)arg7 dataStride:(long long)arg8;
- (id)initWithData:(id)arg1 semantic:(id)arg2 vectorCount:(long long)arg3 componentType:(short)arg4 componentCount:(unsigned long long)arg5 dataOffset:(long long)arg6 dataStride:(long long)arg7;
- (id)initWithBuffer:(id)arg1 vertexFormat:(unsigned long long)arg2 semantic:(id)arg3 vertexCount:(long long)arg4 dataOffset:(long long)arg5 dataStride:(long long)arg6;
- (id)_uninterleaveData:(id)arg1 count:(unsigned long long)arg2 srcOffset:(unsigned long long)arg3 srcStride:(unsigned long long)arg4 dstStride:(unsigned long long)arg5;
- (void)_printData;

@end

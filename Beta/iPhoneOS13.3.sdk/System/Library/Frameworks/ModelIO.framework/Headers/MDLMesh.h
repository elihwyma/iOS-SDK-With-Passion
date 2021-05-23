/*
 Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

#import <ModelIO/MDLObject.h>

@class MDLVertexDescriptor, NSArray, NSMutableArray;

@protocol MDLMeshBufferAllocator;

@interface MDLMesh : MDLObject

{
    NSMutableArray *_submeshes;
    NSMutableArray *_vertexBuffers;
    MDLVertexDescriptor *_vertexDescriptor;
    struct MDLAABB _bounds;
    NSArray *_controlNodes;
    id <MDLMeshBufferAllocator> _allocator;
    unsigned long long _vertexCount;
    unsigned long long _subdivisionScheme;
}

@property (nonatomic) unsigned long long subdivisionScheme;
@property (nonatomic, readonly) struct boundingBox;
@property (copy, nonatomic) MDLVertexDescriptor *vertexDescriptor;
@property (nonatomic) unsigned long long vertexCount;
@property (retain, nonatomic) NSArray *vertexBuffers;
@property (copy, nonatomic) NSMutableArray *submeshes;
@property (retain, nonatomic, readonly) id <MDLMeshBufferAllocator> allocator;

+ (id)newEllipticalConeWithHeight:(float)arg1 radii:(unsigned long long)arg2 radialSegments:(unsigned long long)arg3 verticalSegments:(long long)arg4 geometryType:(_Bool)arg5 inwardNormals:(id)arg6 allocator: /* Error: Ran out of types for this method. */;
+ (id)newBoxWithDimensions:(long long)arg1 segments:(_Bool)arg2 geometryType:(id)arg3 inwardNormals:allocator: /* Error: Ran out of types for this method. */;
+ (id)newIcosahedronWithRadius:(float)arg1 inwardNormals:(_Bool)arg2 geometryType:(long long)arg3 allocator:(id)arg4;
+ (id)newIcosahedronWithRadius:(float)arg1 inwardNormals:(_Bool)arg2 allocator:(id)arg3;
+ (id)newEllipsoidWithRadii:(unsigned long long)arg1 radialSegments:(unsigned long long)arg2 verticalSegments:(long long)arg3 geometryType:(_Bool)arg4 inwardNormals:(_Bool)arg5 hemisphere:(id)arg6 allocator: /* Error: Ran out of types for this method. */;
+ (id)newSubdividedMesh:(id)arg1 submeshIndex:(unsigned long long)arg2 subdivisionLevels:(unsigned long long)arg3;
+ (id)newCapsuleWithHeight:(float)arg1 radii:(unsigned long long)arg2 radialSegments:(unsigned long long)arg3 verticalSegments:(unsigned long long)arg4 hemisphereSegments:(long long)arg5 geometryType:(_Bool)arg6 inwardNormals:(id)arg7 allocator: /* Error: Ran out of types for this method. */;
+ (id)newPlaneWithDimensions:(long long)arg1 segments:(id)arg2 geometryType:allocator: /* Error: Ran out of types for this method. */;
+ (id)newCylinderWithHeight:(float)arg1 radii:(unsigned long long)arg2 radialSegments:(unsigned long long)arg3 verticalSegments:(long long)arg4 geometryType:(_Bool)arg5 inwardNormals:(id)arg6 allocator: /* Error: Ran out of types for this method. */;

- (id)description;
- (id).cxx_construct;
- (id)initWithVertexBuffers:(id)arg1 vertexCount:(unsigned long long)arg2 descriptor:(id)arg3 submeshes:(id)arg4;
- (id)vertexAttributeDataForAttributeNamed:(id)arg1;
- (id)initWithVertexBuffer:(id)arg1 vertexCount:(unsigned long long)arg2 descriptor:(id)arg3 submeshes:(id)arg4;
- (void)addNormalsWithAttributeNamed:(id)arg1 creaseThreshold:(float)arg2;
- (id)vertexAttributeDataForAttributeNamed:(id)arg1 asFormat:(unsigned long long)arg2;
- (id)initWithBufferAllocator:(id)arg1;
- (void)addAttributeWithName:(id)arg1 format:(unsigned long long)arg2 type:(id)arg3 data:(id)arg4 stride:(long long)arg5;
- (id)initConeWithExtent:(_Bool)arg1 segments:(_Bool)arg2 inwardNormals:(long long)arg3 cap:(id)arg4 geometryType:allocator: /* Error: Ran out of types for this method. */;
- (void)_createWithVertexBuffer:(id)arg1 vertexCount:(unsigned long long)arg2 descriptor:(id)arg3 submeshes:(id)arg4;
- (id)initBoxWithExtent:(_Bool)arg1 segments:(long long)arg2 inwardNormals:(id)arg3 geometryType:allocator: /* Error: Ran out of types for this method. */;
- (id)initIcosahedronWithExtent:(_Bool)arg1 inwardNormals:(long long)arg2 geometryType:(id)arg3 allocator: /* Error: Ran out of types for this method. */;
- (id)initHemisphereWithExtent:(_Bool)arg1 segments:(_Bool)arg2 inwardNormals:(long long)arg3 cap:(id)arg4 geometryType:allocator: /* Error: Ran out of types for this method. */;
- (id)initSphereWithExtent:(_Bool)arg1 segments:(long long)arg2 inwardNormals:(id)arg3 geometryType:allocator: /* Error: Ran out of types for this method. */;
- (id)initMeshBySubdividingMesh:(id)arg1 submeshIndex:(int)arg2 subdivisionLevels:(unsigned int)arg3 allocator:(id)arg4;
- (id)initCapsuleWithExtent:(unsigned long long)arg1 cylinderSegments:(_Bool)arg2 hemisphereSegments:(long long)arg3 inwardNormals:(id)arg4 geometryType:allocator: /* Error: Ran out of types for this method. */;
- (id)initPlaneWithExtent:(long long)arg1 segments:(id)arg2 geometryType:allocator: /* Error: Ran out of types for this method. */;
- (void)addAttributeWithName:(id)arg1 format:(unsigned long long)arg2;
- (_Bool)makeVerticesUniqueAndReturnError:(id *)arg1;
- (void)updateAttributeNamed:(id)arg1 withData:(id)arg2;
- (void)debugPrintToFile:(struct __sFILE *)arg1;
- (void)removeAttributeNamed:(id)arg1;
- (void)createSourceDataVector:(vector_f9ed6fc8 *)arg1 attr:(id)arg2 srcElementCount:(int)arg3 dstElementCount:(int)arg4;
- (void)copyDataVector:(vector_f9ed6fc8 *)arg1 toAttr:(id)arg2;
- (long long)addVertexBuffer:(id)arg1;
- (void)_calculateTangentBasisFromPositions:(float *)arg1 positionStride:(long long)arg2 normals:(float *)arg3 normalStride:(long long)arg4 uvs:(float *)arg5 uvStride:(long long)arg6 tangents:(float *)arg7 tangentsStride:(long long)arg8 bitagents:(float *)arg9 bitangentStride:(long long)arg10 tangentFormat:(unsigned long long)arg11;
- (void)replaceAttributeNamed:(id)arg1 withData:(id)arg2;
- (_Bool)triangulate;
- (void)_calculateFaceNormalsFromPositions:(float *)arg1 positionStride:(long long)arg2 normals:(float *)arg3 normalStride:(long long)arg4 creaseThreshold:(float)arg5;
- (void)addAttributeWithName:(id)arg1 format:(unsigned long long)arg2 type:(id)arg3 data:(id)arg4 stride:(long long)arg5 time:(double)arg6;
- (void)addTangentBasisForTextureCoordinateAttributeNamed:(id)arg1 tangentAttributeNamed:(id)arg2 bitangentAttributeNamed:(id)arg3;
- (void)addTangentBasisForTextureCoordinateAttributeNamed:(id)arg1 normalAttributeNamed:(id)arg2 tangentAttributeNamed:(id)arg3;
- (void)addOrthTanBasisForTextureCoordinateAttributeNamed:(id)arg1 normalAttributeNamed:(id)arg2 tangentAttributeNamed:(id)arg3;
- (void)addUnwrappedTextureCoordinatesForAttributeNamed:(id)arg1;
- (void)flipTextureCoordinatesInAttributeNamed:(id)arg1;
- (void)makeVerticesUnique;
- (void)_enumerateSubmeshesUsingBlock:(CDUnknownBlockType)arg1 stopPointer:(_Bool *)arg2;
- (int)submeshCount;
- (void)enumerateSubmeshesUsingBlock:(CDUnknownBlockType)arg1;
- (id)controlNodeForINdex:(unsigned long long)arg1;
- (CDStruct_14d5dc5e)inverseBasePoseForIndex:(unsigned long long)arg1;
- (_Bool)generateAmbientOcclusionTextureWithSize:(long long)arg1 raysPerSample:(float)arg2 attenuationFactor:(id)arg3 objectsToConsider:(id)arg4 vertexAttributeNamed:(id)arg5 materialPropertyNamed: /* Error: Ran out of types for this method. */;
- (_Bool)generateAmbientOcclusionVertexColorsWithRaysPerSample:(long long)arg1 attenuationFactor:(float)arg2 objectsToConsider:(id)arg3 vertexAttributeNamed:(id)arg4;
- (_Bool)generateLightMapTextureWithTextureSize:(id)arg1 lightsToConsider:(id)arg2 objectsToConsider:(id)arg3 vertexAttributeNamed:(id)arg4 materialPropertyNamed: /* Error: Ran out of types for this method. */;
- (_Bool)generateAmbientOcclusionTextureWithQuality:(float)arg1 attenuationFactor:(float)arg2 objectsToConsider:(id)arg3 vertexAttributeNamed:(id)arg4 materialPropertyNamed:(id)arg5;
- (_Bool)generateAmbientOcclusionVertexColorsWithQuality:(float)arg1 attenuationFactor:(float)arg2 objectsToConsider:(id)arg3 vertexAttributeNamed:(id)arg4;
- (_Bool)generateLightMapTextureWithQuality:(float)arg1 lightsToConsider:(id)arg2 objectsToConsider:(id)arg3 vertexAttributeNamed:(id)arg4 materialPropertyNamed:(id)arg5;
- (_Bool)generateLightMapVertexColorsWithLightsToConsider:(id)arg1 objectsToConsider:(id)arg2 vertexAttributeNamed:(id)arg3;
- (id)initCylinderWithExtent:(_Bool)arg1 segments:(_Bool)arg2 inwardNormals:(_Bool)arg3 topCap:(long long)arg4 bottomCap:(id)arg5 geometryType:allocator: /* Error: Ran out of types for this method. */;

@end

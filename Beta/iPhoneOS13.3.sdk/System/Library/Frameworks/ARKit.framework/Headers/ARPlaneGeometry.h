/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE;

@interface ARPlaneGeometry : NSObject

{
    vector_1cb3ea33 _vertices;
    struct vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))>> _textureCoordinates;
    vector_00df4d9c _triangleIndices;
    unsigned long long _boundaryVertexCount;
    MISSING_TYPE *_center;
    MISSING_TYPE *_extent;
}

@property (nonatomic, readonly) MISSING_TYPE *center;
@property (nonatomic, readonly) MISSING_TYPE *extent;
@property (nonatomic, readonly) unsigned long long vertexCount;
@property (nonatomic, readonly) const MISSING_TYPE **vertices;
@property (nonatomic, readonly) unsigned long long textureCoordinateCount;
@property (nonatomic, readonly) const MISSING_TYPE **textureCoordinates;
@property (nonatomic, readonly) unsigned long long triangleCount;
@property (nonatomic, readonly) const short *triangleIndices;
@property (nonatomic, readonly) unsigned long long boundaryVertexCount;
@property (nonatomic, readonly) const MISSING_TYPE **boundaryVertices;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id).cxx_construct;
- (id)initWithBoundaryVertices:(const struct vector<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))>> *)arg1 center:extent: /* Error: Ran out of types for this method. */;
- (id)initWithVertices:(const struct vector<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))>> *)arg1 triangleIndices:(const vector_00df4d9c *)arg2 boundaryVertexCount:(unsigned long long)arg3 center:extent: /* Error: Ran out of types for this method. */;

@end

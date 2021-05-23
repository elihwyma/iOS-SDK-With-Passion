/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE;

@interface ARNeutralFaceGeometry : NSObject

{
    vector_1cb3ea33 _verticesVector;
    struct vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))>> _texCoordinatesVector;
    vector_00df4d9c _trianglesIndicesVector;
}

@property (nonatomic, readonly) unsigned long long vertexCount;
@property (nonatomic, readonly) const MISSING_TYPE **vertices;
@property (nonatomic, readonly) unsigned long long textureCoordinateCount;
@property (nonatomic, readonly) const MISSING_TYPE **textureCoordinates;
@property (nonatomic, readonly) unsigned long long triangleCount;
@property (nonatomic, readonly) const short *triangleIndices;

+ (id)sharedNeutralGeometry;

- (id).cxx_construct;
- (id)initFromFaceKitSemantics;

@end

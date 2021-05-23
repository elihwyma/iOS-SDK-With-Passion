/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

#import <ARKit/Swift-Protocol.h>

@class ARFaceTrackingData, MISSING_TYPE;

@protocol OS_dispatch_semaphore;

@interface ARFaceGeometry : NSObject <Swift>

{
    vector_1cb3ea33 _customVertices;
    vector_1cb3ea33 _normals;
    ARFaceTrackingData *_trackingData;
    NSObject<OS_dispatch_semaphore> *_normalsSemaphore;
}

@property (nonatomic, readonly) unsigned long long vertexCount;
@property (nonatomic, readonly) const MISSING_TYPE **vertices;
@property (nonatomic, readonly) unsigned long long textureCoordinateCount;
@property (nonatomic, readonly) const MISSING_TYPE **textureCoordinates;
@property (nonatomic, readonly) unsigned long long triangleCount;
@property (nonatomic, readonly) const short *triangleIndices;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id).cxx_construct;
- (id)initPrivate;
- (id)initWithBlendShapes:(id)arg1;
- (unsigned long long)normalCount;
- (const MISSING_TYPE **)normals;
- (id)initWithFaceTrackingData:(id)arg1;
- (id)initWithCustomVertices:(const MISSING_TYPE **)arg1 verticesCount:(unsigned long long)arg2;
- (MISSING_TYPE *)positionForLabeledFacePosition:(id)arg1;
- (MISSING_TYPE *)normalForLabeledFacePosition:(id)arg1;
- (short)closestVertexIndexToLabeledFacePosition:(id)arg1;

@end

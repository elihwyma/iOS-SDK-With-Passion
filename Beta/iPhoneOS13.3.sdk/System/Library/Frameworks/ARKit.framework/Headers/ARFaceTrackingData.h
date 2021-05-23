/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

#import <ARKit/Swift-Protocol.h>

@class MISSING_TYPE, NSDictionary, NSError, NSUUID;

@protocol OS_dispatch_semaphore;

@interface ARFaceTrackingData : NSObject <Swift>

{
    vector_1cb3ea33 _meshVertices;
    struct vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))>> _verticesImageSpace;
    vector_1cb3ea33 _normals;
    vector_7584168e _blendShapeCoefficients;
    CDStruct_14d5dc5e _transform;
    NSObject<OS_dispatch_semaphore> *_normalsSemaphore;
    NSObject<OS_dispatch_semaphore> *_imageVerticesSemaphore;
    NSUUID *_anchorIdentifier;
    float _tongueOut;
    NSDictionary *_trackingData;
    NSError *_trackingError;
    MISSING_TYPE *_gazePoint;
    CDStruct_14d5dc5e _leftEyeTransform;
    CDStruct_14d5dc5e _rightEyeTransform;
}

@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) _Bool isValid;
@property (nonatomic, readonly) NSDictionary *trackingData;
@property (nonatomic, readonly) CDStruct_14d5dc5e transform;
@property (nonatomic, readonly) CDStruct_14d5dc5e leftEyeTransform;
@property (nonatomic, readonly) CDStruct_14d5dc5e rightEyeTransform;
@property (nonatomic, readonly) MISSING_TYPE *gazePoint;
@property (nonatomic, readonly) unsigned long long vertexCount;
@property (nonatomic, readonly) const MISSING_TYPE **vertices;
@property (nonatomic, readonly) const MISSING_TYPE **imageVertices;
@property (nonatomic, readonly) unsigned long long normalCount;
@property (nonatomic, readonly) const MISSING_TYPE **normals;
@property (nonatomic, readonly) unsigned long long blendShapeCoefficientsCount;
@property (nonatomic, readonly) const float *blendShapeCoefficients;
@property (nonatomic, readonly) NSError *trackingError;
@property (nonatomic, readonly) float tongueOut;

+ (_Bool)supportsSecureCoding;
+ (id)sharedNeutralGeometry;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id).cxx_construct;
- (id)initPrivate;
- (id)initWithTrackingData:(id)arg1 transformToMirrored:(_Bool)arg2 anchorIdentifier:(id)arg3;
- (void)_extractMetaDataAndTransformToMirrored:(_Bool)arg1;
- (id)initWithTrackingData:(id)arg1 anchorIdentifier:(id)arg2;

@end

/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE;

@interface ARPointCloud : NSObject

{
    vector_1cb3ea33 _pointsVector;
    vector_7984f87c _identifiersVector;
    vector_7584168e _vergenceAngleCosinesVector;
    MISSING_TYPE *_centroid;
    MISSING_TYPE *_standardDeviation;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) const MISSING_TYPE **points;
@property (nonatomic, readonly) const unsigned long long *identifiers;

+ (_Bool)supportsSecureCoding;
+ (id)concatPointClouds:(id)arg1;
+ (id)emptyPointCloud;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id).cxx_construct;
- (MISSING_TYPE *)centroid;
- (MISSING_TYPE *)standardDeviation;
- (id)initWithPointsVector:(const struct vector<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))>> *)arg1 identifiersVector:(const vector_7984f87c *)arg2;
- (id)initWithPointsVector:(const struct vector<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))>> *)arg1 identifiersVector:(const vector_7984f87c *)arg2 vergenceAngleCosinesVector:(const vector_7584168e *)arg3;
- (const float *)vergenceAngleCosines;
- (id)initWithPointData:(id)arg1;
- (CDStruct_183601bc)computeBounds;
- (id)filterPointCloudFrom:ellipsoid: /* Error: Ran out of types for this method. */;
- (id)filterPointCloudWithIdentifiers:(set_b4d22a2d)arg1;
- (id)_hitTestPointFromOrigin:(float)arg1 withDirection:maximumAngle: /* Error: Ran out of types for this method. */;
- (id)pointCloudByApplyingTransform:(CDStruct_14d5dc5e)arg1;

@end

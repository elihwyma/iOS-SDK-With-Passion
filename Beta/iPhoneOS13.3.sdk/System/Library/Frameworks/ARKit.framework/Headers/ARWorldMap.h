/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

#import <ARKit/Swift-Protocol.h>

@class ARPointCloud, MISSING_TYPE, NSArray, NSData;

@interface ARWorldMap : NSObject <Swift>

{
    NSArray *_anchors;
    ARPointCloud *_rawFeaturePoints;
    long long _version;
    NSData *_trackingData;
    NSData *_surfaceData;
    MISSING_TYPE *_center;
    MISSING_TYPE *_extent;
    CDStruct_14d5dc5e _referenceOriginTransform;
}

@property (nonatomic, readonly) long long version;
@property (copy, nonatomic, readonly) NSData *trackingData;
@property (copy, nonatomic) NSData *surfaceData;
@property (nonatomic, readonly) CDStruct_14d5dc5e referenceOriginTransform;
@property (nonatomic, readonly) MISSING_TYPE *center;
@property (nonatomic, readonly) MISSING_TYPE *extent;
@property (copy, nonatomic) NSArray *anchors;
@property (nonatomic, readonly) ARPointCloud *rawFeaturePoints;

+ (_Bool)supportsSecureCoding;
+ (id)featurePointsForTrackingData:(id)arg1 referenceOriginTransform:(CDStruct_14d5dc5e)arg2;
+ (CDStruct_183601bc)boundsForTrackingData:(id)arg1;
+ (id)keyframesForTrackingData:(id)arg1 withFeaturePoints:(id)arg2 referenceOriginTransform:(CDStruct_14d5dc5e)arg3;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTrackingData:(id)arg1 referenceOriginTransform:(CDStruct_14d5dc5e)arg2 featurePoints:(id)arg3 bounds:(CDStruct_183601bc)arg4;
- (id)initWithTrackingData:(id)arg1 referenceOriginTransform:(CDStruct_14d5dc5e)arg2;
- (id)extractReferenceObjectWithTransform:(CDStruct_14d5dc5e)arg1 center:(id *)arg2 extent:error: /* Error: Ran out of types for this method. */;

@end

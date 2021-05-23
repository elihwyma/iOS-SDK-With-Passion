/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class ARPointCloud, MISSING_TYPE, NSData, NSSet, NSString, NSUUID;

@interface ARReferenceObject : NSObject

{
    NSSet *_keyframes;
    NSString *_name;
    NSString *_resourceGroupName;
    ARPointCloud *_rawFeaturePoints;
    NSUUID *_identifier;
    long long _version;
    NSData *_trackingData;
    MISSING_TYPE *_center;
    MISSING_TYPE *_extent;
    CDStruct_14d5dc5e _referenceOriginTransform;
}

@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) long long version;
@property (nonatomic, readonly) NSData *trackingData;
@property (nonatomic, readonly) CDStruct_14d5dc5e referenceOriginTransform;
@property (nonatomic, readonly) NSSet *keyframes;
@property (copy, nonatomic) NSString *name;
@property (nonatomic, readonly) MISSING_TYPE *center;
@property (nonatomic, readonly) MISSING_TYPE *extent;
@property (nonatomic, readonly) MISSING_TYPE *scale;
@property (nonatomic, readonly) NSString *resourceGroupName;
@property (nonatomic, readonly) ARPointCloud *rawFeaturePoints;

+ (_Bool)supportsSecureCoding;
+ (id)referenceObjectsInGroupNamed:(id)arg1 catalogName:(id)arg2 bundle:(id)arg3;
+ (id)referenceObjectsInGroupNamed:(id)arg1 catalog:(id)arg2;
+ (id)referenceObjectsInGroupNamed:(id)arg1 bundle:(id)arg2;
+ (id)referenceObjectsInGroupNamed:(id)arg1 catalogURL:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setResourceGroupName:(id)arg1;
- (id)initWithTrackingData:(id)arg1 referenceOriginTransform:(CDStruct_14d5dc5e)arg2;
- (id)initWithArchiveURL:(id)arg1 error:(id *)arg2;
- (_Bool)exportObjectToURL:(id)arg1 previewImage:(id)arg2 error:(id *)arg3;
- (id)referenceObjectByApplyingTransform:(CDStruct_14d5dc5e)arg1;
- (id)referenceObjectByMergingObject:(id)arg1 error:(id *)arg2;

@end

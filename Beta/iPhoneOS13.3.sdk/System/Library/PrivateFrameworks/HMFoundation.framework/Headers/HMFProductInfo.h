/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@class HMFSoftwareVersion;

@interface HMFProductInfo

{
    long long _productPlatform;
    long long _productClass;
    long long _productVariant;
    HMFSoftwareVersion *_softwareVersion;
}

@property (readonly) long long productPlatform;
@property (readonly) long long productClass;
@property (readonly) long long productVariant;
@property (nonatomic, readonly) HMFSoftwareVersion *softwareVersion;

+ (_Bool)supportsSecureCoding;
+ (id)shortDescription;
+ (id)productInfo;
+ (id)decodeSoftwareVersionWithCoder:(id)arg1;
+ (void)encodeSoftwareVersion:(id)arg1 withCoder:(id)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)shortDescription;
- (id)descriptionWithPointer:(_Bool)arg1;
- (id)initWithPlatform:(long long)arg1 class:(long long)arg2 variant:(long long)arg3 softwareVersion:(id)arg4;
- (id)initWithPlatform:(long long)arg1 class:(long long)arg2 softwareVersion:(id)arg3;

@end

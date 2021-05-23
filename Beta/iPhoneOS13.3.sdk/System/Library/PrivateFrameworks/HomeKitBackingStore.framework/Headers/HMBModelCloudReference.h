/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HomeKitBackingStore/HMBModelReference.h>

@class CKReference, HMBCloudZone, NSString;

@interface HMBModelCloudReference : HMBModelReference

{
    CKReference *_reference;
    HMBCloudZone *_cloudZone;
    unsigned long long _action;
}

@property (weak, nonatomic) HMBCloudZone *cloudZone;
@property (nonatomic) unsigned long long action;
@property (retain, nonatomic) CKReference *reference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)hmbDecodeData:(id)arg1 fromStorageLocation:(unsigned long long)arg2 error:(id *)arg3;
+ (void)applyNativeCKValue:(id)arg1 fromSource:(unsigned long long)arg2 associatingWith:(id)arg3 toModel:(id)arg4 propertyNamed:(id)arg5;
+ (_Bool)includeInModelEncoding;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)hmbEncodeForStorageLocation:(unsigned long long)arg1 error:(id *)arg2;
- (id)nativeCKValueWithEncodingContext:(id)arg1 error:(id *)arg2;
- (void)associateWithContainer:(id)arg1;
- (id)initWithModelID:(id)arg1 action:(unsigned long long)arg2;
- (id)referencedModelFromCloudZone:(id)arg1 allowExternalFetch:(_Bool)arg2;

@end

/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HMFoundation/HMFObject.h>

@class CKStreamingAsset, NSString;

@interface HMBStreamingAsset : HMFObject

{
    CKStreamingAsset *_uploadStreamingAsset;
    CKStreamingAsset *_downloadStreamingAsset;
}

@property (retain, nonatomic) CKStreamingAsset *uploadStreamingAsset;
@property (retain, nonatomic) CKStreamingAsset *downloadStreamingAsset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)hmbDecodeData:(id)arg1 fromStorageLocation:(unsigned long long)arg2 error:(id *)arg3;
+ (void)applyNativeCKValue:(id)arg1 fromSource:(unsigned long long)arg2 associatingWith:(id)arg3 toModel:(id)arg4 propertyNamed:(id)arg5;
+ (_Bool)includeInModelEncoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStreamingAsset:(id)arg1;
- (id)attributeDescriptions;
- (id)hmbEncodeForStorageLocation:(unsigned long long)arg1 error:(id *)arg2;
- (id)nativeCKValueWithEncodingContext:(id)arg1 error:(id *)arg2;
- (id)initWithUploadStreamingAsset:(id)arg1 downloadStreamingAsset:(id)arg2;

@end

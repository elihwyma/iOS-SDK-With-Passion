/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class NSNumber;

@interface CKAssetTransferOptions : NSObject

{
    NSNumber *_sparseAware;
    NSNumber *_shouldFetchAssetContent;
    NSNumber *_shouldFetchAssetContentInMemory;
    NSNumber *_useMMCSEncryptionV2;
}

@property (copy, nonatomic) NSNumber *sparseAware;
@property (copy, nonatomic) NSNumber *shouldFetchAssetContent;
@property (copy, nonatomic) NSNumber *shouldFetchAssetContentInMemory;
@property (copy, nonatomic) NSNumber *useMMCSEncryptionV2;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)CKPropertiesDescription;

@end

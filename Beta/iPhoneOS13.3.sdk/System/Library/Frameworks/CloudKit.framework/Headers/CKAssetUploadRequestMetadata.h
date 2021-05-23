/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKUploadRequestMetadata.h>

@class NSData;

@interface CKAssetUploadRequestMetadata : CKUploadRequestMetadata

{
    long long _listIndex;
    NSData *_fileSignature;
    NSData *_referenceSignature;
}

@property (nonatomic, readonly) NSData *referenceSignature;
@property (nonatomic) long long listIndex;
@property (nonatomic, readonly) NSData *fileSignature;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;
- (id)initWithRepairZoneRecordID:(id)arg1 databaseScope:(long long)arg2 recordID:(id)arg3 recordType:(id)arg4 fieldName:(id)arg5 fileSignature:(id)arg6 referenceSignature:(id)arg7;
- (id)initWithRepairZoneRecordID:(id)arg1 databaseScope:(long long)arg2 recordID:(id)arg3 recordType:(id)arg4 fieldName:(id)arg5;

@end

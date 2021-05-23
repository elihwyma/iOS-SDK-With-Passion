/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKUploadRequestMetadata.h>

@class NSArray;

@interface CKPackageUploadRequestMetadata : CKUploadRequestMetadata

{
    NSArray *_fileSignatures;
    NSArray *_referenceSignatures;
}

@property (nonatomic, readonly) NSArray *referenceSignatures;
@property (nonatomic, readonly) NSArray *fileSignatures;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRepairZoneRecordID:(id)arg1 databaseScope:(long long)arg2 recordID:(id)arg3 recordType:(id)arg4 fieldName:(id)arg5 fileSignatures:(id)arg6 referenceSignatures:(id)arg7;
- (id)initWithRepairZoneRecordID:(id)arg1 databaseScope:(long long)arg2 recordID:(id)arg3 recordType:(id)arg4 fieldName:(id)arg5;

@end

/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class CKRecordID, NSString;

@interface CKUploadRequestMetadata : NSObject

{
    long long _databaseScope;
    CKRecordID *_recordID;
    NSString *_recordType;
    NSString *_fieldName;
    CKRecordID *_repairZoneRecordID;
}

@property (nonatomic, readonly) CKRecordID *repairZoneRecordID;
@property (nonatomic, readonly) long long databaseScope;
@property (nonatomic, readonly) CKRecordID *recordID;
@property (nonatomic, readonly) NSString *recordType;
@property (nonatomic, readonly) NSString *fieldName;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;
- (id)initWithRepairZoneRecordID:(id)arg1 databaseScope:(long long)arg2 recordID:(id)arg3 recordType:(id)arg4 fieldName:(id)arg5;

@end

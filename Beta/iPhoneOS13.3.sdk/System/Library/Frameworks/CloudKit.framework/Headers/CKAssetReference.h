/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class CKRecordID, NSData, NSString;

@interface CKAssetReference : NSObject

{
    CKRecordID *_recordID;
    long long _databaseScope;
    NSString *_fieldName;
    NSData *_fileSignature;
}

@property (nonatomic) long long databaseScope;
@property (copy, nonatomic, readonly) CKRecordID *recordID;
@property (copy, nonatomic, readonly) NSString *fieldName;
@property (copy, nonatomic, readonly) NSData *fileSignature;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;
- (id)initWithExistingRecordID:(id)arg1 databaseScope:(long long)arg2 fieldName:(id)arg3 fileSignature:(id)arg4;

@end

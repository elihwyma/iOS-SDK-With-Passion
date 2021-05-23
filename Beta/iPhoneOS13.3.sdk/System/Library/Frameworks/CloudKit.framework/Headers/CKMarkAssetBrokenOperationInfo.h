/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKDatabaseOperationInfo.h>

@class CKRecordID, CKUploadRequestConfiguration, NSString;

@interface CKMarkAssetBrokenOperationInfo : CKDatabaseOperationInfo

{
    _Bool _touchRepairZone;
    _Bool _bypassPCSEncryptionForTouchRepairZone;
    _Bool _simulateCorruptAsset;
    _Bool _writeRepairRecord;
    CKUploadRequestConfiguration *_uploadRequestConfiguration;
    CKRecordID *_recordID;
    NSString *_field;
    long long _listIndex;
}

@property (retain, nonatomic) CKUploadRequestConfiguration *uploadRequestConfiguration;
@property (retain, nonatomic) CKRecordID *recordID;
@property (retain, nonatomic) NSString *field;
@property (nonatomic) long long listIndex;
@property (nonatomic) _Bool touchRepairZone;
@property (nonatomic) _Bool bypassPCSEncryptionForTouchRepairZone;
@property (nonatomic) _Bool simulateCorruptAsset;
@property (nonatomic) _Bool writeRepairRecord;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

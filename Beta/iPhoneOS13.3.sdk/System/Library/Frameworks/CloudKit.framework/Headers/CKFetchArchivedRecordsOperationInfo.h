/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKDatabaseOperationInfo.h>

@class NSArray, NSDictionary;

@interface CKFetchArchivedRecordsOperationInfo : CKDatabaseOperationInfo

{
    _Bool _shouldFetchAssetContents;
    _Bool _fetchAllChanges;
    NSArray *_recordZoneIDs;
    NSDictionary *_configurationsByRecordZoneID;
    NSDictionary *_assetTransferOptionsByRecordTypeAndKey;
}

@property (retain, nonatomic) NSArray *recordZoneIDs;
@property (retain, nonatomic) NSDictionary *configurationsByRecordZoneID;
@property (nonatomic) _Bool shouldFetchAssetContents;
@property (nonatomic) _Bool fetchAllChanges;
@property (retain, nonatomic) NSDictionary *assetTransferOptionsByRecordTypeAndKey;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKDatabaseOperationInfo.h>

@class NSArray, NSDictionary;

@interface CKFetchRecordZoneChangesOperationInfo : CKDatabaseOperationInfo

{
    _Bool _shouldFetchAssetContents;
    _Bool _fetchAllChanges;
    _Bool _shouldReportAllPerItemFailures;
    _Bool _forcePCSDecryptionAttempt;
    NSArray *_recordZoneIDs;
    NSDictionary *_configurationsByRecordZoneID;
    long long _changeTypes;
    NSDictionary *_assetTransferOptionsByRecordTypeAndKey;
}

@property (retain, nonatomic) NSArray *recordZoneIDs;
@property (retain, nonatomic) NSDictionary *configurationsByRecordZoneID;
@property (nonatomic) _Bool shouldFetchAssetContents;
@property (nonatomic) long long changeTypes;
@property (nonatomic) _Bool fetchAllChanges;
@property (retain, nonatomic) NSDictionary *assetTransferOptionsByRecordTypeAndKey;
@property (nonatomic) _Bool shouldReportAllPerItemFailures;
@property (nonatomic) _Bool forcePCSDecryptionAttempt;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

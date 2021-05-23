/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKDatabaseOperationInfo.h>

@class CKQuery, CKQueryCursor, CKRecordZoneID, NSArray, NSDictionary;

@interface CKQueryOperationInfo : CKDatabaseOperationInfo

{
    _Bool _shouldFetchAssetContent;
    _Bool _fetchAllResults;
    CKQuery *_query;
    CKRecordZoneID *_zoneID;
    CKQueryCursor *_cursor;
    unsigned long long _resultsLimit;
    NSArray *_desiredKeys;
    NSDictionary *_assetTransferOptionsByKey;
}

@property (retain, nonatomic) CKQuery *query;
@property (retain, nonatomic) CKRecordZoneID *zoneID;
@property (retain, nonatomic) CKQueryCursor *cursor;
@property (nonatomic) unsigned long long resultsLimit;
@property (retain, nonatomic) NSArray *desiredKeys;
@property (nonatomic) _Bool shouldFetchAssetContent;
@property (nonatomic) _Bool fetchAllResults;
@property (retain, nonatomic) NSDictionary *assetTransferOptionsByKey;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKit/CKDatabaseOperationInfo.h>

@class NSDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface CKRecordFetchAggregatorOperationInfo : CKDatabaseOperationInfo

{
    _Bool _fetchAssetContents;
    _Bool _preserveOrdering;
    _Bool _forceDecryptionAttempt;
    NSSet *_desiredKeys;
    NSDictionary *_assetTransferOptionsByRecordTypeAndKey;
}

@property (nonatomic) _Bool fetchAssetContents;
@property (nonatomic) _Bool preserveOrdering;
@property (retain, nonatomic) NSSet *desiredKeys;
@property (retain, nonatomic) NSDictionary *assetTransferOptionsByRecordTypeAndKey;
@property (nonatomic) _Bool forceDecryptionAttempt;

- (id)init;

@end

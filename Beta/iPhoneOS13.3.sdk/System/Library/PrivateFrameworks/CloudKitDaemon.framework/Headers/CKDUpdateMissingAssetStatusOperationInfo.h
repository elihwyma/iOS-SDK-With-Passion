/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKit/CKDatabaseOperationInfo.h>

@class CKRecordID, NSArray;

__attribute__((visibility("hidden")))
@interface CKDUpdateMissingAssetStatusOperationInfo : CKDatabaseOperationInfo

{
    _Bool _recovered;
    _Bool _isPackage;
    CKRecordID *_repairRecordID;
    NSArray *_assetSizes;
    NSArray *_assetPutReceipts;
}

@property (retain, nonatomic) CKRecordID *repairRecordID;
@property (nonatomic) _Bool recovered;
@property (nonatomic) _Bool isPackage;
@property (retain, nonatomic) NSArray *assetSizes;
@property (retain, nonatomic) NSArray *assetPutReceipts;

@end

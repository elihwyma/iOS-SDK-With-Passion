/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDURLRequest.h>

@class CKRecordID, NSArray;

__attribute__((visibility("hidden")))
@interface CKDUpdateMissingAssetStatusURLRequest : CKDURLRequest

{
    _Bool _recovered;
    _Bool _isPackage;
    CKRecordID *_repairRecordID;
    NSArray *_assetSizes;
    NSArray *_assetPutReceipts;
}

@property (copy, nonatomic) CKRecordID *repairRecordID;
@property (nonatomic) _Bool recovered;
@property (nonatomic) _Bool isPackage;
@property (retain, nonatomic) NSArray *assetSizes;
@property (retain, nonatomic) NSArray *assetPutReceipts;

- (int)operationType;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (id)initWithUnrecoveredRepairRecordID:(id)arg1;
- (id)initWithRecoveredAssetRepairRecordID:(id)arg1 size:(unsigned long long)arg2 putReceipt:(id)arg3;
- (id)initWithRecoveredPackageRepairRecordID:(id)arg1 sizes:(id)arg2 putReceipts:(id)arg3;
- (id)initWithRepairRecordID:(id)arg1 recovered:(_Bool)arg2 package:(_Bool)arg3 sizes:(id)arg4 putReceipts:(id)arg5;

@end

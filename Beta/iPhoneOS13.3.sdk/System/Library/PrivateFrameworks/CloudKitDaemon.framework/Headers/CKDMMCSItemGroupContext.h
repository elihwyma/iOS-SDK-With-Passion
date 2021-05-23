/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class CKDMMCS, CKDMMCSItem, CKDMMCSItemGroup, CKDOperation, NSMapTable, NSNumber;

__attribute__((visibility("hidden")))
@interface CKDMMCSItemGroupContext : NSObject

{
    CKDOperation *_operation;
    id _operationInfo;
    NSNumber *_hasConformingOperation;
    CKDMMCS *_MMCS;
    CKDMMCSItemGroup *_itemGroup;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _commandBlock;
    CDUnknownBlockType _startBlock;
    CDUnknownBlockType _completionBlock;
    CKDMMCSItem *_MMCSPackageSectionItem;
    NSMapTable *_MMCSItemsByItemID;
    long long _mmcsOperationType;
}

@property (retain, nonatomic) NSNumber *hasConformingOperation;
@property (retain, nonatomic) CKDMMCS *MMCS;
@property (retain, nonatomic) CKDMMCSItemGroup *itemGroup;
@property (weak, nonatomic) CKDOperation *operation;
@property (copy, nonatomic) CDUnknownBlockType progressBlock;
@property (copy, nonatomic) CDUnknownBlockType commandBlock;
@property (copy, nonatomic) CDUnknownBlockType startBlock;
@property (copy, nonatomic) CDUnknownBlockType completionBlock;
@property (retain, nonatomic) CKDMMCSItem *MMCSPackageSectionItem;
@property (retain, nonatomic) NSMapTable *MMCSItemsByItemID;
@property (nonatomic) long long mmcsOperationType;
@property (retain, nonatomic) id operationInfo;

- (void)cancel;
- (void)start;
- (_Bool)shouldFetchAssetContentInMemory;
- (void)handleCommand:(id)arg1 forItem:(id)arg2;
- (_Bool)willOpenItemReaderWriter:(id)arg1 error:(id *)arg2;
- (void)didOpenItemReaderWriter:(id)arg1 result:(_Bool)arg2 error:(id)arg3;
- (void)didCompleteRequestWithError:(id)arg1;
- (id)initWithMMCS:(id)arg1 itemGroup:(id)arg2 operation:(id)arg3 progress:(CDUnknownBlockType)arg4 command:(CDUnknownBlockType)arg5 start:(CDUnknownBlockType)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (id)findTrackedMMCSItemByItemID:(unsigned long long)arg1;
- (id)getCKDMMCSItemReaderByPathForMMCSItem:(id)arg1 error:(id *)arg2;
- (void)updateProgressForItemID:(unsigned long long)arg1 state:(int)arg2 progress:(double)arg3 error:(id)arg4;
- (void)didGetItemID:(unsigned long long)arg1 signature:(id)arg2 path:(id)arg3 error:(id)arg4 results:(id)arg5;
- (void)updateProgressForItemID:(unsigned long long)arg1 state:(int)arg2 progress:(double)arg3 results:(id)arg4;
- (void)didPutItemID:(unsigned long long)arg1 signature:(id)arg2 results:(id)arg3;
- (void)didGetMetricsForRequest:(id)arg1;
- (struct MMCSItemReaderWriter *)getMMCSItemReaderForItemID:(unsigned long long)arg1 error:(id *)arg2;
- (void)updateProgressForPackageSectionState:(int)arg1 progress:(double)arg2 results:(id)arg3;
- (void)didPutSectionWithSignature:(id)arg1 results:(id)arg2;
- (_Bool)_setupMMCSItemsWithError:(id *)arg1;
- (void)_startTrackingMMCSItems:(id)arg1;
- (_Bool)_setupRegisterMMCSItemsWithError:(id *)arg1;
- (_Bool)_setupPutMMCSItemsWithError:(id *)arg1;
- (_Bool)_setupGetMMCSItemsWithError:(id *)arg1;
- (_Bool)_setupPutContentMetadataMMCSItemsWithError:(id *)arg1;
- (void)_cleanupMMCSRegisterItems;
- (void)_stopTrackingMMCSItems:(id)arg1;
- (void)_cleanupMMCSItems;
- (id)conformingOperation;
- (_Bool)willCloseItemReaderWriter:(id)arg1 error:(id *)arg2;
- (void)didCloseItemReaderWriter:(id)arg1 result:(_Bool)arg2 error:(id)arg3;
- (_Bool)willGetFileMetadataItemReaderWriter:(id)arg1 error:(id *)arg2;
- (id)didGetFileMetadataItemReaderWriter:(id)arg1 fileMetadata:(id)arg2 error:(id)arg3;
- (_Bool)willReadFromItemReaderWriter:(id)arg1 offset:(unsigned long long)arg2 bytes:(char *)arg3 length:(unsigned long long)arg4 bytesRead:(unsigned long long *)arg5 error:(id *)arg6;
- (_Bool)didReadFromItemReaderWriter:(id)arg1 offset:(unsigned long long)arg2 bytes:(char *)arg3 length:(unsigned long long)arg4 bytesRead:(unsigned long long *)arg5 error:(id *)arg6;

@end

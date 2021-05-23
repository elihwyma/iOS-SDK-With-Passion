/*
 Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <IDS/IDSTransactionLogTask.h>

@interface IDSTransactionLogSyncTask : IDSTransactionLogTask

{
    CDUnknownBlockType _batchProcessingBlock;
    CDUnknownBlockType _knownRecordIDsFromList;
    _Bool _shouldContinueFromLastSyncPoint;
}

@property (copy, nonatomic) CDUnknownBlockType batchProcessingBlock;
@property (copy, nonatomic) CDUnknownBlockType knownRecordIDsFromList;
@property (nonatomic) _Bool shouldContinueFromLastSyncPoint;

@end

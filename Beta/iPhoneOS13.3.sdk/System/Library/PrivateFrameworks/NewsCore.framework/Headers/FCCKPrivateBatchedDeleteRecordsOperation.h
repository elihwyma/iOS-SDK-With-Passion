/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCOperation.h>

@class FCCKPrivateDatabase, NSArray, NSMutableArray, NSMutableDictionary;

@interface FCCKPrivateBatchedDeleteRecordsOperation : FCOperation

{
    _Bool _skipPreflight;
    _Bool _handleIdentityLoss;
    FCCKPrivateDatabase *_database;
    NSArray *_recordIDsToDelete;
    CDUnknownBlockType _deleteRecordsCompletionBlock;
    NSMutableArray *_remainingBatchesOfRecordIDsToDelete;
    NSMutableArray *_resultDeletedRecordIDs;
    NSMutableDictionary *_resultErrorsByRecordID;
}

@property (retain, nonatomic) NSMutableArray *remainingBatchesOfRecordIDsToDelete;
@property (retain, nonatomic) NSMutableArray *resultDeletedRecordIDs;
@property (retain, nonatomic) NSMutableDictionary *resultErrorsByRecordID;
@property (retain, nonatomic) FCCKPrivateDatabase *database;
@property (copy, nonatomic) NSArray *recordIDsToDelete;
@property (nonatomic) _Bool skipPreflight;
@property (nonatomic) _Bool handleIdentityLoss;
@property (copy, nonatomic) CDUnknownBlockType deleteRecordsCompletionBlock;

- (id)init;
- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;
- (void)resetForRetry;
- (void)_continueModifying;

@end

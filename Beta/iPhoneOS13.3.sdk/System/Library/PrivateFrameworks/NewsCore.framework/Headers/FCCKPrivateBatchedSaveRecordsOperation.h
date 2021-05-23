/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCOperation.h>

@class FCCKPrivateDatabase, NSArray, NSMutableArray, NSMutableDictionary;

@interface FCCKPrivateBatchedSaveRecordsOperation : FCOperation

{
    _Bool _skipPreflight;
    _Bool _handleIdentityLoss;
    FCCKPrivateDatabase *_database;
    NSArray *_recordsToSave;
    long long _savePolicy;
    CDUnknownBlockType _saveRecordsCompletionBlock;
    NSMutableArray *_remainingBatchesOfRecordsToSave;
    NSMutableArray *_resultSavedRecords;
    NSMutableDictionary *_resultErrorsByRecordID;
}

@property (retain, nonatomic) NSMutableArray *remainingBatchesOfRecordsToSave;
@property (retain, nonatomic) NSMutableArray *resultSavedRecords;
@property (retain, nonatomic) NSMutableDictionary *resultErrorsByRecordID;
@property (retain, nonatomic) FCCKPrivateDatabase *database;
@property (copy, nonatomic) NSArray *recordsToSave;
@property (nonatomic) long long savePolicy;
@property (nonatomic) _Bool skipPreflight;
@property (nonatomic) _Bool handleIdentityLoss;
@property (copy, nonatomic) CDUnknownBlockType saveRecordsCompletionBlock;

- (id)init;
- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;
- (void)resetForRetry;
- (void)_subdivideRemainingBatches;
- (void)_continueModifying;

@end

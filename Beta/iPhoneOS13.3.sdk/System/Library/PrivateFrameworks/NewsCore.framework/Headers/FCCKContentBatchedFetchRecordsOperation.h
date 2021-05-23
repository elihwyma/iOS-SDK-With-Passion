/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCOperation.h>

@class FCCKContentDatabase, NSArray, NSError, NSMutableArray, NSMutableDictionary;

@interface FCCKContentBatchedFetchRecordsOperation : FCOperation

{
    FCCKContentDatabase *_database;
    NSArray *_recordIDs;
    NSArray *_desiredKeys;
    CDUnknownBlockType _fetchRecordsCompletionBlock;
    NSMutableArray *_remainingRecordIDBatches;
    NSMutableDictionary *_recordsByRecordID;
    NSMutableDictionary *_errorsByRecordID;
    NSError *_operationError;
}

@property (retain, nonatomic) NSMutableArray *remainingRecordIDBatches;
@property (retain, nonatomic) NSMutableDictionary *recordsByRecordID;
@property (retain, nonatomic) NSMutableDictionary *errorsByRecordID;
@property (retain, nonatomic) NSError *operationError;
@property (retain, nonatomic) FCCKContentDatabase *database;
@property (copy, nonatomic) NSArray *recordIDs;
@property (copy, nonatomic) NSArray *desiredKeys;
@property (copy, nonatomic) CDUnknownBlockType fetchRecordsCompletionBlock;

- (id)init;
- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;
- (void)resetForRetry;
- (void)_continueRefreshing;

@end

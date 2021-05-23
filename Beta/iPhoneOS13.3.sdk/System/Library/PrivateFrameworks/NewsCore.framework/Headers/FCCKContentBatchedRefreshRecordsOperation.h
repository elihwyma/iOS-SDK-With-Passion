/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCOperation.h>

@class CKRecordID, FCCKContentDatabase, NSArray, NSDictionary, NSError, NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface FCCKContentBatchedRefreshRecordsOperation : FCOperation

{
    _Bool _checkForDeletions;
    FCCKContentDatabase *_database;
    NSArray *_recordIDs;
    NSDictionary *_changeTagsByRecordID;
    NSArray *_desiredKeys;
    CKRecordID *_canaryRecordID;
    CDUnknownBlockType _refreshRecordsCompletionBlock;
    NSMutableArray *_remainingRecordIDBatches;
    NSMutableSet *_refreshedRecordIDs;
    NSMutableDictionary *_updatedRecordsByRecordID;
    NSMutableSet *_deletedRecordIDs;
    NSMutableDictionary *_errorsByRecordID;
    NSError *_operationError;
}

@property (retain, nonatomic) NSMutableArray *remainingRecordIDBatches;
@property (retain, nonatomic) NSMutableSet *refreshedRecordIDs;
@property (retain, nonatomic) NSMutableDictionary *updatedRecordsByRecordID;
@property (retain, nonatomic) NSMutableSet *deletedRecordIDs;
@property (retain, nonatomic) NSMutableDictionary *errorsByRecordID;
@property (retain, nonatomic) NSError *operationError;
@property (retain, nonatomic) FCCKContentDatabase *database;
@property (copy, nonatomic) NSArray *recordIDs;
@property (copy, nonatomic) NSDictionary *changeTagsByRecordID;
@property (copy, nonatomic) NSArray *desiredKeys;
@property (nonatomic) _Bool checkForDeletions;
@property (copy, nonatomic) CKRecordID *canaryRecordID;
@property (copy, nonatomic) CDUnknownBlockType refreshRecordsCompletionBlock;

- (id)init;
- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;
- (void)prepareOperation;
- (void)resetForRetry;
- (void)_continueRefreshing;

@end

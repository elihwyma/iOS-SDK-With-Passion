/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCCKPrivateDatabaseOperation.h>

@class NSArray;

@interface FCCKPrivateDeleteRecordsOperation : FCCKPrivateDatabaseOperation

{
    NSArray *_recordIDsToDelete;
    CDUnknownBlockType _deleteRecordsCompletionBlock;
    NSArray *_resultSavedRecords;
    NSArray *_resultDeletedRecordIDs;
}

@property (retain, nonatomic) NSArray *resultSavedRecords;
@property (retain, nonatomic) NSArray *resultDeletedRecordIDs;
@property (copy, nonatomic) NSArray *recordIDsToDelete;
@property (copy, nonatomic) CDUnknownBlockType deleteRecordsCompletionBlock;

- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCCKPrivateDatabaseOperation.h>

@class NSArray;

@interface FCCKPrivateSaveRecordsOperation : FCCKPrivateDatabaseOperation

{
    NSArray *_recordsToSave;
    long long _savePolicy;
    CDUnknownBlockType _saveRecordsCompletionBlock;
    NSArray *_resultSavedRecords;
}

@property (retain, nonatomic) NSArray *resultSavedRecords;
@property (copy, nonatomic) NSArray *recordsToSave;
@property (nonatomic) long long savePolicy;
@property (copy, nonatomic) CDUnknownBlockType saveRecordsCompletionBlock;

- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;

@end

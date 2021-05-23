/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCCKPrivateDatabaseOperation.h>

@class NSArray, NSDictionary;

@interface FCCKPrivateFetchRecordsOperation : FCCKPrivateDatabaseOperation

{
    NSArray *_recordIDs;
    NSArray *_desiredKeys;
    CDUnknownBlockType _fetchRecordsCompletionBlock;
    NSDictionary *_resultRecordsByRecordID;
}

@property (retain, nonatomic) NSDictionary *resultRecordsByRecordID;
@property (copy, nonatomic) NSArray *recordIDs;
@property (copy, nonatomic) NSArray *desiredKeys;
@property (copy, nonatomic) CDUnknownBlockType fetchRecordsCompletionBlock;

- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;

@end

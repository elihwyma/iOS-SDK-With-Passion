/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCCKPrivateDatabaseOperation.h>

@class NSArray;

@interface FCCKPrivateDeleteRecordZonesOperation : FCCKPrivateDatabaseOperation

{
    _Bool _secureDatabaseOnly;
    NSArray *_recordZoneIDsToDelete;
    CDUnknownBlockType _deleteRecordZonesCompletionBlock;
    NSArray *_resultDeletedRecordZoneIDs;
}

@property (retain, nonatomic) NSArray *resultDeletedRecordZoneIDs;
@property (copy, nonatomic) NSArray *recordZoneIDsToDelete;
@property (nonatomic) _Bool secureDatabaseOnly;
@property (copy, nonatomic) CDUnknownBlockType deleteRecordZonesCompletionBlock;

- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;

@end

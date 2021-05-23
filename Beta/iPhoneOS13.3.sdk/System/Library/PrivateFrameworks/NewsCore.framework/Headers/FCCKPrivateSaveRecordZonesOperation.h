/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCCKPrivateDatabaseOperation.h>

@class NSArray;

@interface FCCKPrivateSaveRecordZonesOperation : FCCKPrivateDatabaseOperation

{
    NSArray *_recordZonesToSave;
    CDUnknownBlockType _saveRecordZonesCompletionBlock;
    NSArray *_resultSavedRecordZones;
}

@property (retain, nonatomic) NSArray *resultSavedRecordZones;
@property (copy, nonatomic) NSArray *recordZonesToSave;
@property (copy, nonatomic) CDUnknownBlockType saveRecordZonesCompletionBlock;

- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;

@end

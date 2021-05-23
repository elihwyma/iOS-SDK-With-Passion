/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCCKPrivateDatabaseOperation.h>

@class CKRecordZoneID, FCCKPrivateDatabaseServerChangeToken, NSArray;

@interface FCCKPrivateFetchRecordZoneChangesOperation : FCCKPrivateDatabaseOperation

{
    _Bool _fetchNewestChangesFirst;
    _Bool _fetchAllChanges;
    _Bool _resultMoreComing;
    CKRecordZoneID *_recordZoneID;
    FCCKPrivateDatabaseServerChangeToken *_previousServerChangeToken;
    NSArray *_desiredKeys;
    CDUnknownBlockType _fetchRecordZoneChangesCompletionBlock;
    NSArray *_resultChangedRecords;
    NSArray *_resultDeletedRecordIDs;
    FCCKPrivateDatabaseServerChangeToken *_resultServerChangeToken;
}

@property (retain, nonatomic) NSArray *resultChangedRecords;
@property (retain, nonatomic) NSArray *resultDeletedRecordIDs;
@property (retain, nonatomic) FCCKPrivateDatabaseServerChangeToken *resultServerChangeToken;
@property (nonatomic) _Bool resultMoreComing;
@property (copy, nonatomic) CKRecordZoneID *recordZoneID;
@property (copy, nonatomic) FCCKPrivateDatabaseServerChangeToken *previousServerChangeToken;
@property (copy, nonatomic) NSArray *desiredKeys;
@property (nonatomic) _Bool fetchNewestChangesFirst;
@property (nonatomic) _Bool fetchAllChanges;
@property (copy, nonatomic) CDUnknownBlockType fetchRecordZoneChangesCompletionBlock;

- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;
- (id)_configurationForDestination:(long long)arg1;

@end

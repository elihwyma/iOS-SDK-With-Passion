/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCCKPrivateDatabaseOperation.h>

@class FCCKPrivateDatabaseServerChangeToken, NSArray;

@interface FCCKPrivateFetchDatabaseChangesOperation : FCCKPrivateDatabaseOperation

{
    _Bool _resultMoreComing;
    FCCKPrivateDatabaseServerChangeToken *_previousServerChangeToken;
    CDUnknownBlockType _fetchDatabaseChangesCompletionBlock;
    NSArray *_resultChangedZoneIDs;
    NSArray *_resultDeletedZoneIDs;
    FCCKPrivateDatabaseServerChangeToken *_resultServerChangeToken;
}

@property (retain, nonatomic) NSArray *resultChangedZoneIDs;
@property (retain, nonatomic) NSArray *resultDeletedZoneIDs;
@property (retain, nonatomic) FCCKPrivateDatabaseServerChangeToken *resultServerChangeToken;
@property (nonatomic) _Bool resultMoreComing;
@property (copy, nonatomic) FCCKPrivateDatabaseServerChangeToken *previousServerChangeToken;
@property (copy, nonatomic) CDUnknownBlockType fetchDatabaseChangesCompletionBlock;

- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;

@end

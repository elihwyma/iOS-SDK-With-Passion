/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <IDSFoundation/IDSCKDatabaseOperation.h>

@interface IDSCKFetchRecordZoneChangesOperation : IDSCKDatabaseOperation

{
    _Bool _fetchAllChanges;
    CDUnknownBlockType _recordChangedBlock;
    CDUnknownBlockType _recordWithIDWasDeletedBlock;
    CDUnknownBlockType _recordZoneChangeTokensUpdatedBlock;
    CDUnknownBlockType _recordZoneFetchCompletionBlock;
    CDUnknownBlockType _fetchRecordZoneChangesCompletionBlock;
}

@property (nonatomic) _Bool fetchAllChanges;
@property (copy, nonatomic) CDUnknownBlockType recordChangedBlock;
@property (copy, nonatomic) CDUnknownBlockType recordWithIDWasDeletedBlock;
@property (copy, nonatomic) CDUnknownBlockType recordZoneChangeTokensUpdatedBlock;
@property (copy, nonatomic) CDUnknownBlockType recordZoneFetchCompletionBlock;
@property (copy, nonatomic) CDUnknownBlockType fetchRecordZoneChangesCompletionBlock;

+ (id)alloc;
+ (Class)__class;

@end

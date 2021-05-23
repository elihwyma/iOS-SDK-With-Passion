/*
 Image: /System/Library/PrivateFrameworks/IMTransferAgent.framework/IMTransferAgent
 */

#import <Foundation/NSObject.h>

@class CKContainer;

@interface IMTransferAgentNicknameController : NSObject

{
    CKContainer *_nickNameContainer;
}

@property (nonatomic, readonly) CKContainer *nickNameContainer;

+ (id)sharedInstance;
+ (id)ckQueue;

- (id)lockdownManager;
- (_Bool)shouldUseDevNickNameContainer;
- (void)setPersonalNickname:(id)arg1 oldRecordID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)getNicknameWithRecordID:(id)arg1 decryptionKey:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)deleteAllPersonalNicknamesWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_serverSaysToUseOldContainer;
- (id)_nickNameContainerIdentifier;
- (id)_nickNameContainer;
- (id)nickNamePublicDatabase;
- (void)fetchCurrentUserForNicknameContainer:(CDUnknownBlockType)arg1;
- (id)_nickNameFetchConfiguration;
- (id)_nickNamePublicDB;
- (void)performCloudKitOperation:(CDUnknownBlockType)arg1 withError:(id)arg2;
- (void)_updateEncryptedPersonalNicknameToPublicCloudKitDBSavingRecord:(id)arg1 deletingRecordID:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)_updateEncryptedPersonalNicknameToPublicCloudKitDBSavingRecord:(id)arg1 deletingRecordIDs:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)fetchAllNicknamesForCurrentUser:(CDUnknownBlockType)arg1;
- (id)_nickNameSaveConfiguration;
- (void)_handleSaveNicknameError:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)cloudKitOperationWithRetryCount:(unsigned long long)arg1 withError:(id)arg2 operation:(CDUnknownBlockType)arg3;
- (double)_retryIntervalForRetryCount:(unsigned long long)arg1;

@end

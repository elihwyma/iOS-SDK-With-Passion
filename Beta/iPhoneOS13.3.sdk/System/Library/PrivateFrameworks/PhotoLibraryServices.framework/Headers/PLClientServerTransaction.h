/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString, PLPhotoLibraryPathManager;

@interface PLClientServerTransaction : NSObject

{
    NSString *_transactionToken;
    NSSet *_changeScopes;
    PLPhotoLibraryPathManager *_pathManager;
}

@property (copy, nonatomic) NSString *transactionToken;
@property (nonatomic, readonly) NSSet *changeScopes;
@property (nonatomic, readonly) PLPhotoLibraryPathManager *pathManager;

+ (unsigned long long)scopeValuesFromScopes:(id)arg1;
+ (id)serverTransactionQueue;
+ (id)_serverTransactionForPathManager:(id)arg1 isNew:(_Bool *)arg2;
+ (id)beginClientTransactionWithChangeScopes:(id)arg1 pathManager:(id)arg2;
+ (id)_filePathForTransactionWithToken:(id)arg1 pathManager:(id)arg2;
+ (id)_scopeValuesByScope;
+ (id)scopesFromScopeValues:(unsigned long long)arg1;
+ (id)beginServerTransactionWithToken:(id)arg1 changeScopes:(id)arg2 pathManager:(id)arg3;
+ (id)beginServerTransactionWithClientTransactionFromXPCDictionary:(id)arg1 pathManager:(id)arg2;
+ (id)_recoveryHistoryFilePathForPathManager:(id)arg1;
+ (void)_recordRecoveryAttemptForPathManager:(id)arg1;
+ (_Bool)_hasExcessiveRecoveryAttemptsForPathManager:(id)arg1;
+ (_Bool)_archiveRecoveryHistoryForPathManager:(id)arg1 error:(id *)arg2;
+ (void)_checkForAndHandleExcessiveRecoveryAttemptsForPathManager:(id)arg1 sqliteErrorHandler:(CDUnknownBlockType)arg2;
+ (id)_allTransactionPathsForPathManager:(id)arg1;
+ (unsigned long long)_readScopeValuesFromFileDescriptor:(int)arg1;
+ (_Bool)_isOutstandingTransactionAtPath:(id)arg1 getScopeValues:(unsigned long long *)arg2;
+ (id)_outstandingTransactionScopesByPathForPathManager:(id)arg1;
+ (void)handleOutstandingTransactionsForPathManager:(id)arg1 sqliteErrorHandler:(CDUnknownBlockType)arg2 handler:(CDUnknownBlockType)arg3;
+ (void)_cleanupAllTransactionsScopesByPath:(id)arg1;
+ (id)_transactionTokenFromXPCDictionary:(id)arg1;
+ (id)_changeScopesFromXPCDictionary:(id)arg1;
+ (id)_libraryURLFromXPCDictionary:(id)arg1;
+ (void)addTransaction:(id)arg1 toXPCDictionary:(id)arg2;
+ (void)addTransaction:(id)arg1 toUserInfo:(id)arg2;
+ (void)removeTransactionFromUserInfo:(id)arg1;
+ (id)transactionFromUserInfo:(id)arg1;
+ (id)descriptionOfAllTransactionFilesForPathManager:(id)arg1;

- (id)initWithPathManager:(id)arg1;
- (void)addChangeScopes:(id)arg1;
- (void)pushChangeScopesBatch;
- (void)popChangeScopesBatch;
- (_Bool)isClientTransaction;
- (void)completeTransaction;
- (void)completeTransactionScope:(id)arg1;
- (void)abortTransaction;
- (void)stillAlive;

@end

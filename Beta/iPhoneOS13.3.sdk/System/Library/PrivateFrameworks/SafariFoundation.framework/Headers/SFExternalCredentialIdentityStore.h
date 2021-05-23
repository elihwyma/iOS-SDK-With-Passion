/*
 Image: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
 */

#import <SafariCore/WBSSQLiteStore.h>

@class NSObject, WBSSQLiteStatementCache;

@protocol OS_dispatch_queue;

@interface SFExternalCredentialIdentityStore : WBSSQLiteStore

{
    WBSSQLiteStatementCache *_statements;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)initWithURL:(id)arg1;
- (void)fetchCredentialIdentitiesMatchingDomains:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (int)_createFreshDatabaseSchema;
- (int)_vacuum;
- (id)initWithURL:(id)arg1 protectionType:(long long)arg2;
- (void)_databaseWillClose;
- (int)_currentSchemaVersion;
- (void)openAndCheckIntegrity:(_Bool)arg1 createIfNeeded:(_Bool)arg2 fallBackToMemoryStoreIfError:(_Bool)arg3 lockingPolicy:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)saveCredentialIdentities:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeCredentialIdentities:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeAllCredentialIdentitiesWithCompletion:(CDUnknownBlockType)arg1;
- (void)replaceCredentialIdentitiesWithIdentities:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (int)_saveCredentialIdentities:(id)arg1;
- (int)_removeAllCredentialIdentities;
- (int)_removeCredentialIdentities:(id)arg1;
- (int)_removeCredentialIdentity:(id)arg1;
- (int)_updateCredentialIdentity:(id)arg1;
- (int)_insertCredentialIdentity:(id)arg1;
- (id)_fetchCredentialIdentities;
- (id)_fetchCredentialIdentitiesMatchingDomains:(id)arg1;
- (id)_credentialIdentityFromRow:(id)arg1;
- (_Bool)_fetchStoreIsEmpty;
- (void)fetchCredentialIdentitiesWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchStoreEmptyStateWithCompletion:(CDUnknownBlockType)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class ICDelegateAccountStoreOptions, ICDelegateAccountStoreXPCWriter, NSMutableArray, NSString;

@interface ICDelegateAccountStore : NSObject

{
    NSMutableArray *_connectionPool;
    _Bool _isOpen;
    struct os_unfair_lock_s _lock;
    ICDelegateAccountStoreOptions *_options;
    ICDelegateAccountStore *_strongSelf;
    ICDelegateAccountStoreXPCWriter *_xpcWriter;
}

@property (copy, nonatomic, readonly) NSString *databasePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)openWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

- (void)close;
- (_Bool)connectionNeedsResetForCorruption:(id)arg1;
- (void)addDelegationUUIDs:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removeAllTokensWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeDelegationUUIDs:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removeIdentityPropertiesForUserIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeTokenForUserIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeTokensExpiringBeforeDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setIdentityProperties:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setToken:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_initWithValidatedOptions:(id)arg1;
- (id)initSingleWriterWithOptions:(id)arg1 error:(id *)arg2;
- (void)_openWithXPCWriter:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_popConnection;
- (void)_recycleConnection:(id)arg1;
- (void)_postDidChangeNotification;
- (void)_writeUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)_resetCorruptionUsingSQL;
- (void)_resetCorruptionUsingXPC;
- (void)_writeSQLUsingBlock:(CDUnknownBlockType)arg1;
- (void)_writeXPCUsingBlock:(CDUnknownBlockType)arg1;
- (void)readUsingBlock:(CDUnknownBlockType)arg1;

@end

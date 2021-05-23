/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class ICSQLiteConnection, NSString;

@interface ICDelegateAccountStoreSQLWriter : NSObject

{
    ICSQLiteConnection *_connection;
    _Bool _isValid;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)invalidate;
- (id)initWithConnection:(id)arg1;
- (void)addDelegationUUIDs:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removeAllTokensWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeDelegationUUIDs:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removeIdentityPropertiesForUserIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeTokenForUserIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeTokensExpiringBeforeDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setIdentityProperties:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setToken:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)_removeAccountForIdentityKey:(id)arg1;
- (_Bool)_removeTokenForIdentityKey:(id)arg1;
- (void)_setToken:(id)arg1 forIdentityKey:(id)arg2;

@end

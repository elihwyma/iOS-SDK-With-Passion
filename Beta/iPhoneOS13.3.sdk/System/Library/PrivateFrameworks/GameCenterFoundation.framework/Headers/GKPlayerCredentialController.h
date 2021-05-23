/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

@class ACAccountStore, GKThreadsafeDictionary;

@interface GKPlayerCredentialController : NSObject

{
    long long _loginCancelledCount;
    ACAccountStore *_store;
    GKThreadsafeDictionary *_primaryCredentialCache;
    GKThreadsafeDictionary *_allCredentialsCache;
}

@property (retain, nonatomic) ACAccountStore *store;
@property (retain, nonatomic) GKThreadsafeDictionary *primaryCredentialCache;
@property (retain, nonatomic) GKThreadsafeDictionary *allCredentialsCache;
@property long long loginCancelledCount;
@property (readonly) _Bool loginDisabled;

+ (id)accessQueue;
+ (id)sharedController;
+ (void)migrateOldAccountInformation;

- (id)init;
- (void)dealloc;
- (id)accessQueue;
- (void)accountStoreDidChange:(id)arg1;
- (id)credentialForPlayer:(id)arg1 environment:(long long)arg2;
- (void)accountStoreEmailDidChange:(id)arg1;
- (void)invalidateCredentialCaches;
- (void)_transact:(CDUnknownBlockType)arg1 complete:(CDUnknownBlockType)arg2;
- (id)_transactAndWait:(CDUnknownBlockType)arg1;
- (id)allCredentialsForEnvironment:(long long)arg1;
- (id)primaryCredentialForEnvironment:(long long)arg1;
- (void)setCredential:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setPrimaryCredential:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getAltDSIDFromIDMSForCredential:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeAllCredentialsForEnvironment:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeCredential:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)replaceCredential:(id)arg1 withCredential:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (unsigned long long)loginStatusForCredential:(id)arg1;
- (id)credentialForUsername:(id)arg1 environment:(long long)arg2;
- (id)pushCredentialForEnvironment:(long long)arg1;
- (id)suggestedUsername;

@end

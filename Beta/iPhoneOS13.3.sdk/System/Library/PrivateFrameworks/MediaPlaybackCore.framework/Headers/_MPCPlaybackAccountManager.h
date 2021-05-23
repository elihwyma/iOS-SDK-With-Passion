/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

@class MPCPlaybackEngine, NSArray, NSMutableDictionary;

@interface _MPCPlaybackAccountManager : NSObject

{
    struct os_unfair_lock_s _lock;
    NSMutableDictionary *_accounts;
    MPCPlaybackEngine *_playbackEngine;
}

@property (weak, nonatomic, readonly) MPCPlaybackEngine *playbackEngine;
@property (copy, nonatomic, readonly) NSArray *accounts;

- (id)accountForDSID:(id)arg1;
- (id)initWithPlaybackEngine:(id)arg1;
- (void)_subscriptionStatusChangedNotification:(id)arg1;
- (void)_userIdentityStoreChangedNotification:(id)arg1;
- (void)_updateAccounts;
- (id)accountForHashedDSID:(id)arg1;
- (void)_buildAccountFromLocalIdentity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_buildAccountFromDelegatedIdentity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_enumerateIdentitiesWithCompletion:(CDUnknownBlockType)arg1;

@end

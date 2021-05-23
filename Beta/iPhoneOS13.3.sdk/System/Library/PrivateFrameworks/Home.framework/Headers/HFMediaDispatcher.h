/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class ACAccountStore, NSArray, NSHashTable;

@interface HFMediaDispatcher : NSObject

{
    ACAccountStore *_appleMusicAccountStore;
    NSArray *_appleMusicMagicAuthCapableAccounts;
    NSHashTable *_appleMusicAccountObservers;
}

@property (retain, nonatomic) NSHashTable *appleMusicAccountObservers;
@property (copy, nonatomic) NSArray *appleMusicMagicAuthCapableAccounts;
@property (nonatomic, readonly) ACAccountStore *appleMusicAccountStore;
@property (nonatomic, readonly) _Bool isUsingiCloud;

+ (id)sharedDispatcher;

- (id)init;
- (void)_setupAppleMusicAccountStoreIfNecessary;
- (_Bool)_reloadAppleMusicMagicAuthCapableAccounts;
- (void)_accountsStoreWasUpdated:(id)arg1;
- (void)addAppleMusicAccountObserver:(id)arg1;
- (void)removeAppleMusicAccountObserver:(id)arg1;

@end

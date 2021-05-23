/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class MFMailboxUidTransformer, NSArray, NSMapTable, NSString;

@protocol EDAccountsProvider, EDMailboxProviderDelegate, EFScheduler, OS_dispatch_queue;

@interface MFMailboxProvider : NSObject

{
    _Atomic int _deferringInvalidationCount;
    _Bool _needsToInvalidate;
    id <EDMailboxProviderDelegate> delegate;
    id <EDAccountsProvider> _accountsProvider;
    MFMailboxUidTransformer *_mailboxUidTransformer;
    NSMapTable *_uidToMailboxMap;
    NSMapTable *_objectIDToUidMap;
    NSArray *_allMailboxCache;
    NSObject<OS_dispatch_queue> *_mailboxCacheQueue;
    id <EFScheduler> _observerScheduler;
}

@property (weak, nonatomic) id <EDAccountsProvider> accountsProvider;
@property (retain, nonatomic) MFMailboxUidTransformer *mailboxUidTransformer;
@property (retain) NSMapTable *uidToMailboxMap;
@property (retain) NSMapTable *objectIDToUidMap;
@property (retain) NSArray *allMailboxCache;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *mailboxCacheQueue;
@property (retain, nonatomic) id <EFScheduler> observerScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <EDMailboxProviderDelegate> delegate;

+ (id)log;

- (void)_invalidateCache;
- (id)legacyMailboxForObjectID:(id)arg1;
- (void)_mailboxInvalidated:(id)arg1;
- (void)_willReloadMailboxList:(id)arg1;
- (void)_didReloadMailboxList:(id)arg1;
- (void)_didChangeMailboxList:(id)arg1;
- (void)_willFetchMailboxList:(id)arg1;
- (void)_didFetchMailboxList:(id)arg1;
- (void)_beginDeferringInvalidation;
- (void)enumerateAccountsWithBlock:(CDUnknownBlockType)arg1;
- (void)_endDeferringInvalidation;
- (void)_populateCache;
- (id)mailboxesFromLegacyMailboxes:(id)arg1;
- (id)mailboxFromLegacyMailbox:(id)arg1;
- (id)legacyMailboxesForObjectIDs:(id)arg1;
- (_Bool)_isDeferringInvalidation;
- (id)allMailboxes;
- (id)mailboxForObjectID:(id)arg1;
- (id)mailboxObjectIDsForMailboxType:(long long)arg1;
- (long long)mailboxTypeForMailboxObjectID:(id)arg1;
- (void)fetchMailboxes;
- (id)initWithAccountsProvider:(id)arg1;
- (void)invalidateMailboxes;

@end

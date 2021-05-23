/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Email/EMRepository.h>

@class EFPromise, EMAccountRepository, EMRemoteConnection, NSMapTable, NSMutableDictionary, NSOrderedSet, NSString;

@protocol EFCancelable;

@interface EMMailboxRepository : EMRepository

{
    struct os_unfair_lock_s _mailboxesPromiseLock;
    struct os_unfair_lock_s _lock;
    NSMutableDictionary *_mailboxesByObjectID;
    EMRemoteConnection *_connection;
    id <EFCancelable> _registrationCancelable;
    EFPromise *_mailboxesPromise;
    NSMapTable *_observerMap;
    EMAccountRepository *_accountRepository;
}

@property (retain) EMRemoteConnection *connection;
@property (retain, nonatomic) id <EFCancelable> registrationCancelable;
@property (readonly) NSOrderedSet *mailboxesIfAvailable;
@property (retain, nonatomic) EFPromise *mailboxesPromise;
@property (retain, nonatomic) NSMapTable *observerMap;
@property (nonatomic, readonly) EMAccountRepository *accountRepository;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;
+ (id)remoteInterface;

- (void)dealloc;
- (id)initInternal;
- (id)mailboxForObjectID:(id)arg1;
- (id)mailboxObjectIDsForMailboxType:(long long)arg1;
- (long long)mailboxTypeForMailboxObjectID:(id)arg1;
- (id)initForTesting;
- (id)performQuery:(id)arg1 withObserver:(id)arg2;
- (void)refreshMailboxList;
- (id)initWithRemoteConnection:(id)arg1 accountRepository:(id)arg2;
- (void)_restartObservingMailboxChangesIfNecessary;
- (void)_commonInitWithAccountRepository:(id)arg1;
- (id)initForTestingWithAccountRepository:(id)arg1;
- (void)mailboxListChanged:(id)arg1;
- (void)_startObservingMailboxChangesIfNecessary;
- (id)_mailboxesFuture;
- (id)_filterIDsFromMailbox:(id)arg1 withQuery:(id)arg2;
- (id)_remoteMailboxObjectIDsForMailboxType:(long long)arg1;
- (long long)_remoteMailboxTypeForMailboxObjectID:(id)arg1;
- (void)_prepareMailboxes:(id)arg1;
- (void)performQuery:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)mailboxesForObjectIDs:(id)arg1;
- (id)performMailboxChangeAction:(id)arg1;

@end

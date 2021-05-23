/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@protocol EDMailboxProvider;

@interface EDMailboxPersistence : NSObject

{
    struct os_unfair_lock_s _changeObserversByIdentifierLock;
    NSMutableDictionary *_changeObserversByIdentifier;
    id <EDMailboxProvider> _mailboxProvider;
}

@property (retain, nonatomic) NSMutableDictionary *changeObserversByIdentifier;
@property (retain, nonatomic) id <EDMailboxProvider> mailboxProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)deleteMailbox:(id)arg1;
- (_Bool)renameMailbox:(id)arg1 newName:(id)arg2;
- (id)initWithMailboxProvider:(id)arg1;
- (id)legacyMailboxForObjectID:(id)arg1;
- (id)mailboxDatabaseIDsForMailboxObjectIDs:(id)arg1 createIfNecessary:(_Bool)arg2;
- (_Bool)createMailbox:(id)arg1 parentMailboxID:(id)arg2;
- (_Bool)moveMailbox:(id)arg1 newParentMailboxID:(id)arg2;
- (void)serverCountsForMailboxScope:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)mailboxListInvalidated;
- (id)allMailboxes;
- (id)mailboxObjectIDsForMailboxType:(long long)arg1;
- (long long)mailboxTypeForMailboxObjectID:(id)arg1;
- (id)legacyMailboxForMailboxURL:(id)arg1;
- (void)allMailboxesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)userCreatedMailboxObjectIDs;
- (void)fetchMailboxLists;
- (void)addChangeObserver:(id)arg1 withIdentifier:(id)arg2;
- (void)removeChangeObserverWithIdentifier:(id)arg1;

@end

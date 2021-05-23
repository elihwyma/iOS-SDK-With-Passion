/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class EDMessagePersistence, EMThread, EMThreadObjectID, NSArray, _EDThreadPersistence_SQLHelper, _EDThreadPersistence_ThreadMessages;

@interface _EDThreadPersistence_PersistedThread : NSObject

{
    _Bool _didCreateTempMessagesView;
    _EDThreadPersistence_ThreadMessages *_messages;
    long long _threadDatabaseID;
    _EDThreadPersistence_SQLHelper *_sqlHelper;
}

@property (nonatomic, readonly) _EDThreadPersistence_ThreadMessages *messages;
@property (nonatomic, readonly) long long threadDatabaseID;
@property (nonatomic, readonly) _EDThreadPersistence_SQLHelper *sqlHelper;
@property (nonatomic, readonly) EDMessagePersistence *messagePersistence;
@property (nonatomic, readonly) long long threadScopeDatabaseID;
@property (nonatomic, readonly) EMThreadObjectID *threadObjectID;
@property (nonatomic, readonly) NSArray *wrappedMessages;
@property (nonatomic, readonly) EMThread *thread;

- (id)debugDescription;
- (id)initWithMessages:(id)arg1 threadDatabaseID:(long long)arg2;
- (_Bool)addMailboxes;
- (_Bool)addSenders;
- (_Bool)addRecipientsForType:(unsigned long long)arg1;
- (id)updateNewestReadAndDisplayMessage;
- (_Bool)updateNewestReadMessage:(id)arg1;
- (_Bool)updateDisplayMessageWithUnreadWrappedMessages:(id)arg1;
- (void)addKeyPathsForDisplayMessageChangeToKeyPaths:(id)arg1;
- (_Bool)setPriorityForDisplayMessageSender;
- (void)_ensureTempMessagesView;
- (id)_mailboxDatabaseIDsForWrappedMessages;
- (id)senderDatabaseIDsAndDates;
- (_Bool)addSenders:(id)arg1;
- (id)recipientDatabaseIDsAndDatesForRecipientType:(unsigned long long)arg1;
- (_Bool)addRecipients:(id)arg1 ofType:(unsigned long long)arg2;
- (void)dropTemporaryView;

@end

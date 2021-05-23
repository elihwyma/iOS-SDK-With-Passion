/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class EDMailboxPersistence, EDMessagePersistence, NSMutableDictionary, NSString;

@protocol EDInteractionEventLog, OS_dispatch_queue;

@interface EDInteractionLogger : NSObject

{
    NSMutableDictionary *_viewedMessages;
    NSMutableDictionary *_messageListMessages;
    NSObject<OS_dispatch_queue> *_stateTrackingQueue;
    id <EDInteractionEventLog> _eventLog;
    EDMessagePersistence *_messagePersistence;
    EDMailboxPersistence *_mailboxPersistence;
    NSObject<OS_dispatch_queue> *_processingQueue;
    struct _NSRange _messageListVisibleRows;
}

@property (retain, nonatomic) NSMutableDictionary *_viewedMessages;
@property (retain, nonatomic) NSMutableDictionary *_messageListMessages;
@property (nonatomic) struct _NSRange _messageListVisibleRows;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_stateTrackingQueue;
@property (retain, nonatomic) EDMessagePersistence *messagePersistence;
@property (retain, nonatomic) EDMailboxPersistence *mailboxPersistence;
@property (retain, nonatomic) id <EDInteractionEventLog> _eventLog;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)applicationWillSuspend;
- (void)applicationWillResume;
- (void)persistenceDidAddMessages:(id)arg1 generationWindow:(id)arg2;
- (void)persistenceWillChangeFlags:(id)arg1 messages:(id)arg2;
- (void)persistenceWillTransferMessages:(id)arg1 transferType:(long long)arg2 destinationMailboxURL:(id)arg3 userInitiated:(_Bool)arg4;
- (void)logEvent:(id)arg1 date:(id)arg2 messageID:(id)arg3 data:(id)arg4;
- (void)logEvent:(id)arg1 date:(id)arg2 data:(id)arg3;
- (void)_logMessageListDisplayEndedForState:(id)arg1 now:(id)arg2;
- (void)_viewingEndedForAllMessages;
- (void)clickedLinkInMessage:(id)arg1 scheme:(id)arg2;
- (void)scrolledToEndOfMessage:(id)arg1;
- (void)viewingEndedForMessage:(id)arg1;
- (void)composeReplyStartedForMessage:(id)arg1;
- (void)composeFowardStartedForMessage:(id)arg1;
- (void)applicationLaunched;
- (id)initWithMessagePersistence:(id)arg1 mailboxPersistence:(id)arg2 eventLog:(id)arg3;
- (void)_conversationFlagsChanged:(id)arg1;
- (void)_composeStartedForMessage:(id)arg1 eventName:(id)arg2;
- (void)deliveredMessage:(id)arg1 account:(id)arg2;
- (id)_stateForMessage:(id)arg1 extra:(id)arg2 container:(id)arg3;
- (id)_range:(struct _NSRange)arg1 minusRange:(struct _NSRange)arg2;
- (void)_logMessageListDisplayStartedMessage:(id)arg1 now:(id)arg2 type:(id)arg3 row:(long long)arg4 cellStyle:(id)arg5;
- (void)movedMessages:(id)arg1 toMailboxType:(long long)arg2;
- (void)messageListDisplayEndedForAllMessages;
- (void)composedMessageSent:(id)arg1 account:(id)arg2;
- (void)viewingStartedForMessage:(id)arg1;
- (void)messageListDisplayVisibleRowsChanged:(struct _NSRange)arg1;
- (void)messageListDisplayStartedForMessage:(id)arg1 messageListType:(id)arg2 row:(long long)arg3 cellStyle:(id)arg4;
- (void)messageListDisplayEndedForMessage:(id)arg1 cellStyle:(id)arg2;
- (void)movedMessages:(id)arg1 toMailbox:(id)arg2;
- (void)archivedMessages:(id)arg1;
- (void)deletedMessages:(id)arg1;
- (void)copiedMessages:(id)arg1 toMailbox:(id)arg2;
- (void)waitForPendingStateChanges;

@end

/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class EDMessageChangeManager, EDMessagePersistence, NSString;

@protocol OS_dispatch_queue;

@interface EDOutgoingMessageRepository : NSObject

{
    NSObject<OS_dispatch_queue> *_workQueue;
    EDMessagePersistence *_messagePersistence;
    EDMessageChangeManager *_messageChangeManager;
}

@property (retain, nonatomic) EDMessagePersistence *messagePersistence;
@property (retain, nonatomic) EDMessageChangeManager *messageChangeManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;
+ (id)signpostLog;

- (void)performBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)signpostID;
- (void)saveDraftMessage:(id)arg1 mailboxID:(id)arg2 previousDraftObjectID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)deleteDraftsInMailboxID:(id)arg1 documentID:(id)arg2 previousDraftObjectID:(id)arg3;
- (void)deliverMessage:(id)arg1 usingMailDrop:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)outboxContainsMessageFromAccountObjectID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)suspendDeliveryQueue;
- (void)resumeDeliveryQueue;
- (void)processAllQueuedMessages;
- (void)isProcessingWithCompletion:(CDUnknownBlockType)arg1;
- (void)numberOfPendingMessagesWithCompletion:(CDUnknownBlockType)arg1;
- (id)messagesForDocumentID:(id)arg1 mailboxID:(id)arg2;
- (id)initWithMessagePersistence:(id)arg1 messageChangeManager:(id)arg2;

@end

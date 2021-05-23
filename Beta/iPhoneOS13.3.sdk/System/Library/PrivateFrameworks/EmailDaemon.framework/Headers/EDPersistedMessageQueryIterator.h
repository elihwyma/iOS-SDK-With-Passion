/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

#import <EmailDaemon/Swift-Protocol.h>

@class EDMessagePersistence, EFCancelationToken, EFQuery, EFQueue, EMMailboxScope, NSMutableSet, NSString;

@interface EDPersistedMessageQueryIterator : NSObject <Swift>

{
    EDMessagePersistence *_messagePersistence;
    EMMailboxScope *_mailboxScope;
    EFQuery *_query;
    EFCancelationToken *_cancelationToken;
    EFQueue *_persistedMessageQueue;
    long long _remaining;
    NSMutableSet *_seenHashes;
    CDUnknownBlockType _handler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)cancel;
- (void)flush;
- (_Bool)shouldCancel;
- (id)initWithMessagePersistence:(id)arg1 query:(id)arg2 batchSize:(long long)arg3 firstBatchSize:(long long)arg4 limit:(long long)arg5 handler:(CDUnknownBlockType)arg6;
- (void)addPersistedMessage:(id)arg1;
- (void)_processPersistedMessages:(id)arg1;
- (void)addPersistedMessages:(id)arg1;

@end

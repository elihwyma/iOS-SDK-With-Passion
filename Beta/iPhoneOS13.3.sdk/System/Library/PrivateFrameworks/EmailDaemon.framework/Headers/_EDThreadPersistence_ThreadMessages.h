/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class EDMessagePersistence, EMThread, EMThreadObjectID, NSArray, _EDThreadPersistence_SQLHelper;

@interface _EDThreadPersistence_ThreadMessages : NSObject

{
    EMThread *_thread;
    EDMessagePersistence *_messagePersistence;
    long long _threadScopeDatabaseID;
    EMThreadObjectID *_threadObjectID;
    NSArray *_wrappedMessages;
    _EDThreadPersistence_SQLHelper *_sqlHelper;
}

@property (nonatomic, readonly) _EDThreadPersistence_SQLHelper *sqlHelper;
@property (nonatomic, readonly) EDMessagePersistence *messagePersistence;
@property (nonatomic, readonly) long long threadScopeDatabaseID;
@property (nonatomic, readonly) EMThreadObjectID *threadObjectID;
@property (nonatomic, readonly) NSArray *wrappedMessages;
@property (nonatomic, readonly) EMThread *thread;

- (id)debugDescription;
- (_Bool)addThreadReplacingExisting:(_Bool)arg1 journaled:(_Bool)arg2;
- (id)updateThreadTableWithJournaled:(_Bool)arg1;
- (id)_threadQuery;
- (id)_displayWrappedMessageWithNewestReadWrappedMessage:(id *)arg1;
- (id)_iterateNewestUnreadWrappedMessagesInWrappedMessages:(id)arg1 iteratorBlock:(CDUnknownBlockType)arg2;
- (id)initWithSQLHelper:(id)arg1 messagePersistence:(id)arg2 threadScopeDatabaseID:(long long)arg3 threadObjectID:(id)arg4 wrappedMessages:(id)arg5;
- (id)_newestUnreadWrappedMessagesWithNewestReadWrappedMessage:(id *)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class NSConditionLock, NSMutableArray, NSString;

@protocol EFScheduler;

@interface _EDMessageItemIDCollector : NSObject

{
    id <EFScheduler> _scheduler;
    NSMutableArray *_messageItemIDs;
    NSConditionLock *_collectionLock;
    NSString *_errorString;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)queryHelper:(id)arg1 didFindMessages:(id)arg2;
- (void)queryHelperDidFindAllMessages:(id)arg1;
- (void)queryHelper:(id)arg1 didAddMessages:(id)arg2;
- (void)queryHelper:(id)arg1 messageFlagsDidChangeForMessages:(id)arg2;
- (void)queryHelper:(id)arg1 conversationIDDidChangeForMessages:(id)arg2 fromConversationID:(long long)arg3;
- (void)queryHelper:(id)arg1 conversationNotificationLevelDidChangeForConversation:(long long)arg2 conversationID:(long long)arg3;
- (void)queryHelper:(id)arg1 objectIDDidChangeForMessage:(id)arg2 oldObjectID:(id)arg3 oldConversationID:(long long)arg4;
- (void)queryHelper:(id)arg1 didUpdateMessages:(id)arg2 forKeyPaths:(id)arg3;
- (void)queryHelper:(id)arg1 didDeleteMessages:(id)arg2;
- (void)queryHelperDidFinishRemoteSearch:(id)arg1;
- (void)queryHelperNeedsRestart:(id)arg1;
- (id)collectItemIDsWithQuery:(id)arg1 messagePersistence:(id)arg2 hookRegistry:(id)arg3 remoteSearchProvider:(id)arg4 errorString:(id *)arg5;

@end

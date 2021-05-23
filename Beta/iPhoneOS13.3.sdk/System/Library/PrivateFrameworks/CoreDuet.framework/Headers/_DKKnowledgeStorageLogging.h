/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface _DKKnowledgeStorageLogging : NSObject

{
    NSObject<OS_dispatch_queue> *_notificationQueue;
}

@property (readonly) NSObject<OS_dispatch_queue> *notificationQueue;

+ (id)sharedInstance;

- (id)init;
- (void)knowledgeStorage:(id)arg1 didInsertEventsWithStreamNameCounts:(id)arg2;
- (void)knowledgeStorage:(id)arg1 didDeleteEventsWithStreamNameCounts:(id)arg2;
- (void)knowledgeStorage:(id)arg1 didInsertLocalEventsWithStreamNameCounts:(id)arg2;
- (void)knowledgeStorage:(id)arg1 didTombstoneEventsWithStreamNameCounts:(id)arg2;
- (id)portraitStreamNames;
- (void)_sendDistributedNotificationName:(id)arg1 object:(id)arg2 throttledActivityName:(id)arg3;
- (id)streamNamesNotificationWhitelist;
- (void)_updateCounter:(id)arg1 streamNameCounts:(id)arg2;
- (void)_sendDistributedNotificationName:(id)arg1 streamNameCounts:(id)arg2;
- (void)_sendDistributedNotificationName:(id)arg1;

@end

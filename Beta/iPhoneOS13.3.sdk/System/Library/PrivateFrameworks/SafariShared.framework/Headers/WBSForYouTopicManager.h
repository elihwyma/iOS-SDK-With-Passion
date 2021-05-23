/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class CKContextClient, NSArray, NSDate, PPNamedEntityStore, WBSHistory, WBSRecentHistoryTopicTagController;

@protocol OS_dispatch_queue;

@interface WBSForYouTopicManager : NSObject

{
    WBSRecentHistoryTopicTagController *_historyTopicTagController;
    PPNamedEntityStore *_namedEntityStore;
    NSObject<OS_dispatch_queue> *_internalQueue;
    WBSHistory *_history;
    CKContextClient *_contextClient;
    NSDate *_lastContextKitRequestDate;
    NSArray *_mostRecentUserVisibleTopics;
}

- (id)initWithHistory:(id)arg1 contextClient:(id)arg2;
- (void)contextKitTopicsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)portraitNamedEntitiesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_createInternalQueueIfNecessary;

@end

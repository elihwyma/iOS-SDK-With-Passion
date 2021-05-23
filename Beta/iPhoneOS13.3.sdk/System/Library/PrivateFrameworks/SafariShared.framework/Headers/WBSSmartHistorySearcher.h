/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSArray;

@protocol OS_dispatch_queue;

@interface WBSSmartHistorySearcher : NSObject

{
    NSArray *_topics;
    NSObject<OS_dispatch_queue> *_searchQueue;
}

- (id)_searchItemsInTopic:(id)arg1 forText:(id)arg2 options:(unsigned long long)arg3;
- (id)_searchTopicsForText:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithTopics:(id)arg1;
- (void)performSearchWithText:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

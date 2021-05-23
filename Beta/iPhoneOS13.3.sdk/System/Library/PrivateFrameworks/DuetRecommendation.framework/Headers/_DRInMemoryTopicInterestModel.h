/*
 Image: /System/Library/PrivateFrameworks/DuetRecommendation.framework/DuetRecommendation
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, _DRTopicInterestSummary;

@protocol OS_dispatch_queue;

@interface _DRInMemoryTopicInterestModel : NSObject

{
    NSMutableArray *_topics;
    _DRTopicInterestSummary *_summary;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

+ (id)predicateForTopicInteractionsBefore:(id)arg1;
+ (id)predicateForTopicsWithPrefix:(id)arg1;
+ (id)predicateForTopicInteractionsAfter:(id)arg1;

- (id)init;
- (void)purgeEntriesWithPrefix:(id)arg1 earlierThanDate:(id)arg2;
- (void)recordPresentationOfTopics:(id)arg1 onDate:(id)arg2;
- (void)recordSelectionOfTopics:(id)arg1 onDate:(id)arg2;
- (id)computeSummaryWithFilter:(id)arg1;
- (void)enumerateTopicCountsWithFilter:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)purgeEntriesEarlierThanDate:(id)arg1;

@end

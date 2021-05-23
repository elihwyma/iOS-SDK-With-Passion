/*
 Image: /System/Library/PrivateFrameworks/DuetRecommendation.framework/DuetRecommendation
 */

#import <Foundation/NSObject.h>

@class _DKKnowledgeStorage;

@protocol OS_dispatch_queue;

@interface _DRTopicInterestModel : NSObject

{
    NSObject<OS_dispatch_queue> *_syncQueue;
    _DKKnowledgeStorage *_storage;
}

@property (retain) NSObject<OS_dispatch_queue> *syncQueue;
@property (retain) _DKKnowledgeStorage *storage;

+ (id)topicActionCategoryType;
+ (id)topicPresentedCategory;
+ (id)topicSelectedCategory;
+ (id)predicateForTopicInteractionsBefore:(id)arg1;
+ (id)predicateForTopicsWithPrefix:(id)arg1;
+ (id)newsStorageDirectory;
+ (id)predicateForTopicInteractionsAfter:(id)arg1;

- (id)init;
- (id)initWithStorageDirectory:(id)arg1;
- (id)initWithStorageDirectory:(id)arg1 localOnly:(_Bool)arg2;
- (void)purgeEntriesWithPrefix:(id)arg1 earlierThanDate:(id)arg2;
- (void)recordPresentationOfTopics:(id)arg1 onDate:(id)arg2;
- (void)recordSelectionOfTopics:(id)arg1 onDate:(id)arg2;
- (id)computeSummaryWithFilter:(id)arg1;
- (void)enumerateTopicCountsWithFilter:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)purgeEntriesEarlierThanDate:(id)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/DuetRecommendation.framework/DuetRecommendation
 */

#import <CoreDuet/_DKQuery.h>

@class NSObject, NSPredicate;

@protocol OS_dispatch_queue;

@interface _DRTopicEnumerationQuery : _DKQuery

{
    NSObject<OS_dispatch_queue> *_defaultQueue;
    NSPredicate *_predicate;
    unsigned long long _limit;
    CDUnknownBlockType _topicEnumerator;
}

@property (retain) NSPredicate *predicate;
@property unsigned long long limit;
@property (copy) CDUnknownBlockType topicEnumerator;

+ (id)topicEnumerationQueryWithPredicate:(id)arg1 topicEnumerator:(CDUnknownBlockType)arg2;
+ (id)enumerationSumExpression;
+ (id)enumerationCountExpresion;

- (id)executeUsingCoreDataStorage:(id)arg1 error:(id *)arg2;
- (id)handleResults:(id)arg1 error:(id)arg2;
- (id)initWithPredicate:(id)arg1 topicEnumerator:(CDUnknownBlockType)arg2;

@end

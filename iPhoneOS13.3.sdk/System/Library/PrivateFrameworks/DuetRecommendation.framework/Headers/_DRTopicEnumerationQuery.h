//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDuet/_DKQuery.h>

#import <DuetRecommendation/_DKExecutableQuery-Protocol.h>

@class NSObject, NSPredicate;
@protocol OS_dispatch_queue;

@interface _DRTopicEnumerationQuery : _DKQuery <_DKExecutableQuery>
{
    NSObject<OS_dispatch_queue> *_defaultQueue;
    NSPredicate *_predicate;
    NSUInteger _limit;
    id /* CDUnknownBlockType */ _topicEnumerator;
}

+ (id)enumerationSumExpression;
+ (id)enumerationCountExpresion;
+ (id)topicEnumerationQueryWithPredicate:(id)arg1 topicEnumerator:(id /* CDUnknownBlockType */)arg2;
@property(copy) id /* CDUnknownBlockType */ topicEnumerator; // @synthesize topicEnumerator=_topicEnumerator;
@property NSUInteger limit; // @synthesize limit=_limit;
@property(retain) NSPredicate *predicate; // @synthesize predicate=_predicate;
// - (void).cxx_destruct;
- (id)executeUsingCoreDataStorage:(id)arg1 error:(id )arg2;
- (id)handleResults:(id)arg1 error:(id)arg2;
- (id)initWithPredicate:(id)arg1 topicEnumerator:(id /* CDUnknownBlockType */)arg2;

@end


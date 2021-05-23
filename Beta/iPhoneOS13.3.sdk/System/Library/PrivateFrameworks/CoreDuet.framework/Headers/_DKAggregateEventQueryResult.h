/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSArray, NSError, NSMutableArray, _DKEventQuery;

@interface _DKAggregateEventQueryResult : NSObject

{
    _DKEventQuery *_query;
    NSMutableArray *_mutableEvents;
    NSMutableArray *_mutableErrors;
    unsigned long long _numberOfContributions;
}

@property (retain, nonatomic) _DKEventQuery *query;
@property (copy, nonatomic, readonly) NSArray *aggregateEvents;
@property (copy, nonatomic, readonly) NSError *aggregateError;
@property (retain, nonatomic) NSMutableArray *mutableEvents;
@property (retain, nonatomic) NSMutableArray *mutableErrors;
@property (nonatomic) unsigned long long numberOfContributions;

- (id)initWithEventQuery:(id)arg1;
- (void)addEvents:(id)arg1;
- (void)addError:(id)arg1;

@end

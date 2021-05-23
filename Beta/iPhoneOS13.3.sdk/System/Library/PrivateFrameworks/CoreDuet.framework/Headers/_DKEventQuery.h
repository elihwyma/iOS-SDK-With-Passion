/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <CoreDuet/_DKQuery.h>

@class NSArray, NSObject, NSPredicate, NSSet;

@protocol OS_dispatch_queue;

@interface _DKEventQuery : _DKQuery

{
    NSObject<OS_dispatch_queue> *_defaultQueue;
    _Bool _readMetadata;
    _Bool _deduplicateValues;
    NSPredicate *_predicate;
    NSArray *_eventStreams;
    NSArray *_sortDescriptors;
    unsigned long long _limit;
    unsigned long long _offset;
    NSSet *_deviceIDs;
    long long _resultType;
    NSArray *_groupByProperties;
    CDUnknownBlockType _resultsHandler;
}

@property long long resultType;
@property (retain) NSArray *groupByProperties;
@property (copy) CDUnknownBlockType resultsHandler;
@property (retain) NSPredicate *predicate;
@property (retain) NSArray *eventStreams;
@property (retain) NSArray *sortDescriptors;
@property unsigned long long limit;
@property unsigned long long offset;
@property _Bool readMetadata;
@property _Bool deduplicateValues;
@property (retain) NSSet *deviceIDs;

+ (void)load;
+ (_Bool)supportsSecureCoding;
+ (id)eventQueryWithPredicate:(id)arg1 eventStreams:(id)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4 sortDescriptors:(id)arg5;
+ (id)predicateForEventsOfMinimumDuration:(double)arg1;
+ (id)expressionForEventDuration;
+ (id)eventQueryWithPredicate:(id)arg1 eventStreams:(id)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4 sortDescriptors:(id)arg5 resultHandler:(CDUnknownBlockType)arg6;
+ (id)predicateForEventsOfMaximumDuration:(double)arg1;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)executeUsingCoreDataStorage:(id)arg1 error:(id *)arg2;
- (id)handleResults:(id)arg1 error:(id)arg2;
- (id)constructFetchRequestPredicate;
- (id)initWithPredicate:(id)arg1 eventStreams:(id)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4 sortDescriptors:(id)arg5 resultHandler:(CDUnknownBlockType)arg6;

@end

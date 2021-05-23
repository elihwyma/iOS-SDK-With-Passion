/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <CoreDuet/_DKQuery.h>

@class NSArray, NSDateInterval, NSPredicate, NSString, _DKEventStream;

@interface _DKHistogramQuery : _DKQuery

{
    _Bool _includeLocalResults;
    _Bool _includeRemoteResults;
    _DKEventStream *_stream;
    NSDateInterval *_interval;
    CDUnknownBlockType _histogramHandler;
    NSString *_customIdentifier;
    unsigned long long _minimumOccurrencesForInclusion;
    NSPredicate *_predicate;
    NSArray *_valueKeyPaths;
}

@property (retain, nonatomic) _DKEventStream *stream;
@property (retain, nonatomic) NSDateInterval *interval;
@property (retain, nonatomic) NSString *customIdentifier;
@property (nonatomic) _Bool includeLocalResults;
@property (nonatomic) _Bool includeRemoteResults;
@property (nonatomic) unsigned long long minimumOccurrencesForInclusion;
@property (retain, nonatomic) NSPredicate *predicate;
@property (retain, nonatomic) NSArray *valueKeyPaths;
@property (copy, nonatomic) CDUnknownBlockType histogramHandler;

+ (_Bool)supportsSecureCoding;
+ (id)histogramQueryForStream:(id)arg1 interval:(id)arg2 withPredicate:(id)arg3;
+ (id)histogramQueryForStream:(id)arg1 interval:(id)arg2;
+ (id)histogramQueryForStream:(id)arg1 interval:(id)arg2 predicate:(id)arg3 valueKeyPaths:(id)arg4;
+ (id)histogramQueryForPersistedHistogramsForStream:(id)arg1 withCustomIdentifier:(id)arg2;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)executeUsingCoreDataStorage:(id)arg1 error:(id *)arg2;
- (id)handleResults:(id)arg1 error:(id)arg2;
- (id)_defaultValueKeyPaths;
- (id)_valueForEvent:(id)arg1;
- (id)_constructFetchRequestPredicate;
- (id)_histogramFromManagedObjects:(id)arg1;
- (id)_histogramFromValueCounts:(id)arg1;
- (id)_histogramFromEvents:(id)arg1;
- (id)_fetchRemoteResultsWithStorage:(id)arg1 error:(id *)arg2;

@end

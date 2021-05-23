/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDDatabaseTransactionContext, HDProfile, _HKFilter;

@interface HDActivitySummaryBuilder : NSObject

{
    HDProfile *_profile;
    _HKFilter *_filter;
    _Bool _shouldIncludePrivateProperties;
    _Bool _shouldIncludeStatistics;
    _Bool _orderByDateAscending;
    unsigned long long _limit;
    HDDatabaseTransactionContext *_databaseTransactionContext;
    long long _enumeratedSummaryCount;
}

@property (nonatomic) _Bool shouldIncludePrivateProperties;
@property (nonatomic) _Bool shouldIncludeStatistics;
@property (nonatomic) _Bool orderByDateAscending;
@property (nonatomic) unsigned long long limit;
@property (copy, nonatomic) HDDatabaseTransactionContext *databaseTransactionContext;
@property (nonatomic, readonly) long long enumeratedSummaryCount;

- (id)init;
- (id)initWithProfile:(id)arg1;
- (_Bool)enumerateActivitySummariesWithPredicate:(id)arg1 error:(id *)arg2 handler:(CDUnknownBlockType)arg3;
- (id)initWithProfile:(id)arg1 filter:(id)arg2;
- (_Bool)_enumerateActivitySummariesAndCachesWithPredicate:(id)arg1 largestAnchor:(long long *)arg2 error:(id *)arg3 handler:(CDUnknownBlockType)arg4;
- (void)activitySummariesWithPredicate:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)batchedActivitySummariesWithPredicate:(id)arg1 maxBatchSize:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;

@end

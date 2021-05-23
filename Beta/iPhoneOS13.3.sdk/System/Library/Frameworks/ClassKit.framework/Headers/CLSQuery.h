/*
 Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

@class CLSSearchSpecification, NSDate, NSMutableArray, NSString;

@interface CLSQuery

{
    NSMutableArray *_results;
    struct os_unfair_lock_s _lock;
    _Bool _executing;
    _Bool _shouldAddResultsToDataStore;
    _Bool _shouldFaultResults;
    long long _fetchLimit;
    CLSSearchSpecification *_searchSpec;
    CDUnknownBlockType _completion;
    NSDate *_startDate;
    unsigned long long _state;
}

@property (getter=isExecuting) _Bool executing;
@property (nonatomic) _Bool shouldAddResultsToDataStore;
@property (nonatomic) _Bool shouldFaultResults;
@property (retain) NSDate *startDate;
@property (nonatomic) unsigned long long state;
@property (nonatomic) long long fetchLimit;
@property (nonatomic, readonly) CLSSearchSpecification *searchSpec;
@property (copy, nonatomic) CDUnknownBlockType completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)queryWithObjectType:(Class)arg1 predicate:(id)arg2 error:(id *)arg3;
+ (id)queryWithObjectType:(Class)arg1 predicate:(id)arg2;
+ (id)queryWithSearchSpecification:(id)arg1;

- (void)lock;
- (void)unlock;
- (void)reset;
- (oneway void)clientRemote_invalidate;
- (oneway void)clientRemote_deliverObject:(id)arg1;
- (id)initWithObjectType:(Class)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 error:(id *)arg4;
- (id)initWithSearchSpecification:(id)arg1 error:(id *)arg2;
- (void)_notifyOfCompletionWithError:(id)arg1;
- (void)_faultResultsAndComplete;
- (void)_notifyOfCompletionWithResults:(id)arg1 error:(id)arg2;
- (oneway void)clientRemote_finishWithState:(unsigned long long)arg1 error:(id)arg2;

@end

/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

#import <Foundation/NSObject.h>

@class CNAutocompleteQueryCacheMissAuditor, CNCache, CNObservable, NSString;

@protocol CNSchedulerProvider;

@interface CNAutocompleteQueryCacheHelper : NSObject

{
    CNCache *_cache;
    NSString *_searchString;
    CNObservable *_serverSearchObservable;
    CNAutocompleteQueryCacheMissAuditor *_cacheMissAuditor;
    id <CNSchedulerProvider> _schedulerProvider;
}

@property (nonatomic, readonly) CNCache *cache;
@property (copy, nonatomic, readonly) NSString *searchString;
@property (nonatomic, readonly) CNObservable *serverSearchObservable;
@property (nonatomic, readonly) CNAutocompleteQueryCacheMissAuditor *cacheMissAuditor;
@property (nonatomic, readonly) id <CNSchedulerProvider> schedulerProvider;

+ (id)cache_os_log;
+ (id)stringByRemovingLastCharacterFromString:(id)arg1;
+ (_Bool)shouldCacheResults:(id)arg1;

- (id)initWithCache:(id)arg1 searchString:(id)arg2 serverSearchObservable:(id)arg3 cacheMissAuditor:(id)arg4 schedulerProvider:(id)arg5;
- (id)cachedFutureForSearchString:(id)arg1;
- (id)remoteResultsForSearchString:(id)arg1 andCompletePromise:(id)arg2;
- (id)remoteResultsForSearchString:(id)arg1;
- (id)initWithCache:(id)arg1 searchString:(id)arg2 serverSearchObservable:(id)arg3;
- (id)cachedResultsObservable;
- (id)uncachedResultsObservable;
- (id)observablesForSearchString:(id)arg1 withCachedResults:(id)arg2;

@end

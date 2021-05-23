/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface WBSParsecSearchResultCache : NSObject

{
    NSMutableDictionary *_resultSetCache;
    NSMutableDictionary *_resultSetsByPrefix;
    unsigned long long _cachedQueriesLimit;
}

@property (nonatomic, readonly) NSArray *allCachedQueries;

- (id)resultSetWithQuery:(id)arg1;
- (void)cacheResultSet:(id)arg1;
- (_Bool)_shouldCacheResultSetForQueryMatching:(id)arg1;
- (_Bool)_resultSet:(id)arg1 isMatchForQuery:(id)arg2;
- (id)initWithCachedQueriesLimit:(unsigned long long)arg1;
- (void)cacheResultSetsFromSearchResponse:(id)arg1;
- (id)bestResultSetForQuery:(id)arg1;

@end

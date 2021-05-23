/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class ML3StatementCacheList, NSMutableDictionary;

@interface ML3DatabaseStatementCache : NSObject

{
    NSMutableDictionary *_statementsDictionary;
    ML3StatementCacheList *_nodeList;
    unsigned long long _cacheSize;
}

@property (nonatomic, readonly) unsigned long long cacheSize;

- (void)dealloc;
- (void)clearCache;
- (void)cacheStatement:(id)arg1;
- (id)initWithCacheSize:(unsigned long long)arg1;
- (id)cachedStatementForSQL:(id)arg1;
- (id)allStatements;

@end

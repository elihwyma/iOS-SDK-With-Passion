/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface _DKObjectFromMOCache : NSObject

{
    NSMutableDictionary *_cache;
    NSMutableDictionary *_cacheEntries;
    NSMutableDictionary *_cacheHits;
    NSMutableDictionary *_cacheMisses;
}

@property (retain) NSMutableDictionary *cacheEntries;
@property (retain) NSMutableDictionary *cacheHits;
@property (retain) NSMutableDictionary *cacheMisses;
@property (retain) NSMutableDictionary *cache;

- (id)init;
- (id)objectForKey:(id)arg1 type:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 type:(id)arg3;
- (id)objectForKey:(id)arg1 type:(id)arg2 setIfMissingWithBlock:(CDUnknownBlockType)arg3;
- (id)initWithReporting;
- (void)reportMetrics;
- (void)removeObjectForKey:(id)arg1 type:(id)arg2;
- (id)deduplicateString:(id)arg1;

@end

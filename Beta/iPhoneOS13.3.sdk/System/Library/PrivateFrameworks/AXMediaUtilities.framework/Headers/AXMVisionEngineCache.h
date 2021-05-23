/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableOrderedSet;

@protocol OS_dispatch_queue;

@interface AXMVisionEngineCache : NSObject

{
    NSObject<OS_dispatch_queue> *_cacheQueue;
    long long _cacheQueue_maxItems;
    NSMutableOrderedSet *_cacheQueue_orderedKeys;
    NSMutableDictionary *_cacheQueue_results;
}

@property (nonatomic, readonly) long long cacheSize;

- (id)description;
- (id)debugDescription;
- (void)purgeCache;
- (void)setResult:(id)arg1 forKey:(id)arg2;
- (id)initWithCacheSize:(long long)arg1;
- (long long)_cacheQueue_cacheSize;
- (id)_cacheQueue_resultForKey:(id)arg1;
- (void)_cacheQueue_setResult:(id)arg1 forKey:(id)arg2;
- (id)resultForKey:(id)arg1;

@end

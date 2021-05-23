/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

@class NSCache;

@interface INCache : NSObject

{
    NSCache *_underlyingCache;
}

@property (nonatomic, readonly) NSCache *_cacheDictionary;

+ (id)sharedCache;

- (id)init;
- (id)_init;
- (void)addCacheableObject:(id)arg1;
- (void)removeCacheableObject:(id)arg1;
- (id)cacheableObjectForIdentifier:(id)arg1;
- (id)consumeCacheableObjectForIdentifier:(id)arg1;
- (void)removeAllCacheableObjects;

@end

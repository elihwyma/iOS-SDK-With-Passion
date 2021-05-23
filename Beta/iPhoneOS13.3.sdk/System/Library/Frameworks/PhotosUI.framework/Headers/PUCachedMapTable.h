/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

#import <PhotosUI/Swift-Protocol.h>

@class NSMapTable, NSMutableOrderedSet;

__attribute__((visibility("hidden")))
@interface PUCachedMapTable : NSObject <Swift>

{
    unsigned long long _cacheCountLimit;
    NSMapTable *__mapTable;
    NSMutableOrderedSet *__cachedObjects;
}

@property (nonatomic, readonly) NSMapTable *_mapTable;
@property (nonatomic, readonly) NSMutableOrderedSet *_cachedObjects;
@property (nonatomic) unsigned long long cacheCountLimit;
@property (nonatomic, readonly) unsigned long long accurateCount;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)removeAllObjects;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (id)keyEnumerator;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)_mapTableCreateIfNeeded:(_Bool)arg1;
- (id)_cachedObjectsCreateIfNeeded:(_Bool)arg1;
- (unsigned long long)_initialCapacity;
- (void)_objectWasRecentlyUsed:(id)arg1;

@end

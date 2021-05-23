/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSRecursiveLock;

@interface PXLRUMemoryCache : NSObject

{
    unsigned long long _numberOfSlots;
    NSMapTable *_cacheDictionary;
    NSRecursiveLock *_recursiveLock;
    struct _PXLRUMemoryCacheList *_leastRecentUsedList;
    NSMapTable *_leastRecentUsedDictionary;
}

@property (nonatomic) unsigned long long numberOfSlots;
@property (nonatomic, readonly) unsigned long long currentUsedSlots;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)allKeys;
- (void)removeAllObjects;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)_promoteListElement:(struct _PXLRUMemoryCacheListElement *)arg1;
- (void)_removeListElement:(struct _PXLRUMemoryCacheListElement *)arg1;
- (void)evictSlots:(unsigned long long)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
 */

#import <NSObject.h>

@class NSMutableDictionary, NSRecursiveLock;

@interface OFLRUCache : NSObject

{
    unsigned long long _numberOfSlots;
    NSMutableDictionary *_cacheDictionary;
    NSRecursiveLock *_recursiveLock;
    struct _OFLRUCacheList *_leastRecentUsedList;
    NSMutableDictionary *_leastRecentUsedDictionary;
}

@property (nonatomic) unsigned long long numberOfSlots;
@property (nonatomic, readonly) unsigned long long currentUsedSlots;

- (id)init;
- (void)dealloc;
- (id)allKeys;
- (void)removeAllObjects;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (_Bool)writeToURL:(id)arg1;
- (void)_promoteListElement:(struct _OFLRUCacheListElement *)arg1;
- (void)_removeListElement:(struct _OFLRUCacheListElement *)arg1;
- (void)evictSlots:(unsigned long long)arg1;
- (_Bool)loadFromURL:(id)arg1;

@end

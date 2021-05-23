/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OITSULRUCache.h>

__attribute__((visibility("hidden")))
@interface OITSUAtomicLRUCache : OITSULRUCache

- (id)allKeys;
- (void)removeAllObjects;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (id)allValues;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setEvictionCallbackTarget:(id)arg1 selector:(SEL)arg2;
- (void)clearEvictionCallbackTarget;

@end

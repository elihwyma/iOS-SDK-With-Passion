/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <TSUtility/TSUFlushableObject.h>

@class NSMutableDictionary, NSString;

@interface TSUCache : TSUFlushableObject

{
    NSString *mCacheName;
    NSMutableDictionary *mCache;
}

- (id)init;
- (void)dealloc;
- (id)description;
- (unsigned long long)count;
- (void)removeAllObjects;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)initWithName:(id)arg1;
- (void)unload;
- (_Bool)hasFlushableContent;
- (id)p_objectForKey:(id)arg1;
- (void)p_addEntriesFromDictionary:(id)arg1;
- (id)p_objectsForKeys:(id)arg1 notFoundMarker:(id)arg2;

@end

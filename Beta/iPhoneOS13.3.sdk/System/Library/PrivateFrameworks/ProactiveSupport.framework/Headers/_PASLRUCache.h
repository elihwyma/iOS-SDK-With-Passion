/*
 Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface _PASLRUCache : NSObject

{
    NSMutableDictionary *_items;
    NSMutableArray *_keysMRU;
    unsigned long long _countLimit;
}

- (void)removeAllObjects;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithCountLimit:(unsigned long long)arg1;

@end

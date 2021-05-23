/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class TILRUDictionaryNode;

@interface TILRUDictionary : NSObject

{
    struct __CFDictionary *_dictionary;
    unsigned long long _maxCount;
    TILRUDictionaryNode *_head;
    TILRUDictionaryNode *_tail;
}

+ (id)dictionaryWithMaximumCapacity:(unsigned long long)arg1;

- (void)dealloc;
- (id)description;
- (unsigned long long)count;
- (id)allKeys;
- (void)removeAllObjects;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)_removeNodeFromLinkedList:(id)arg1;
- (void)_addNodeToFront:(id)arg1;
- (void)_removeNode:(id)arg1;
- (void)_moveNodeToFront:(id)arg1;
- (id)initWithMaximumCapacity:(unsigned long long)arg1;
- (unsigned long long)linkedListCount;
- (id)allKeysInLRUOrder;
- (id)allValuesInLRUOrder;
- (id)objectForKeyWithoutAffectingLRU:(id)arg1;

@end

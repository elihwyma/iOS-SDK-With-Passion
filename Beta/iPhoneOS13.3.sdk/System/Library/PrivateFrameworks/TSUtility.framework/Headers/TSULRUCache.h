/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, TSUNoCopyDictionary;

@interface TSULRUCache : NSObject

{
    TSUNoCopyDictionary *mData;
    NSMutableArray *mOrderedKeys;
    unsigned long long mMax;
    id mCallbackTarget;
    SEL mCallback;
}

@property (nonatomic, readonly) unsigned long long maxSize;

- (void)dealloc;
- (id)allKeys;
- (void)removeAllObjects;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (id)allValues;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)initWithMaxSize:(unsigned long long)arg1;
- (void)p_removeOldestObject;
- (void)setEvictionCallbackTarget:(id)arg1 selector:(SEL)arg2;
- (void)clearEvictionCallbackTarget;

@end

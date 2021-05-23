/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <Foundation/NSObject.h>

@class TSULinkedPointerSetEntry;

@interface TSUMutableLinkedPointerSet : NSObject

{
    struct __CFDictionary *mDictionary;
    TSULinkedPointerSetEntry *mHead;
    TSULinkedPointerSetEntry *mTail;
}

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)count;
- (id)objectEnumerator;
- (void)addObject:(id)arg1;
- (void)removeObject:(id)arg1;
- (id)array;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)removeAllObjects;
- (_Bool)containsObject:(id)arg1;
- (id)firstObject;
- (id)reverseObjectEnumerator;
- (id)objectEnumeratorAfterObject:(id)arg1;
- (_Bool)hasObjects;
- (void)insertFirstObject:(id)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <Foundation/NSEnumerator.h>

@class TSULinkedPointerSetEntry;

@interface TSULinkedPointerSetEnumerator : NSEnumerator

{
    TSULinkedPointerSetEntry *mHead;
    TSULinkedPointerSetEntry *mLastUsed;
}

- (id)nextObject;
- (id)initWithFirstEntry:(id)arg1;

@end

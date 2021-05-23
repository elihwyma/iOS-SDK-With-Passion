/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <Foundation/NSEnumerator.h>

@class TSULinkedPointerSetEntry;

@interface TSULinkedPointerSetReverseEnumerator : NSEnumerator

{
    TSULinkedPointerSetEntry *mTail;
    TSULinkedPointerSetEntry *mLastUsed;
}

- (id)nextObject;
- (id)initWithLastEntry:(id)arg1;

@end

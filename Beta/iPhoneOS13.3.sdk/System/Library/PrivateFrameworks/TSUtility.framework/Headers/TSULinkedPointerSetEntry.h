/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <Foundation/NSObject.h>

@interface TSULinkedPointerSetEntry : NSObject

{
    id mObject;
    TSULinkedPointerSetEntry *mPrevious;
    TSULinkedPointerSetEntry *mNext;
}

- (void)dealloc;
- (id)initWithObject:(id)arg1 previousEntry:(id)arg2;

@end

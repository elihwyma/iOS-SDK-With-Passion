/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSEnumerator.h>

@class NSArray, TSWPStorage;

@interface TSWPStorageChildEnumerator : NSEnumerator

{
    TSWPStorage *_storage;
    struct _NSRange _charRange;
    unsigned int _index;
    NSArray *_charOffsetArray;
}

- (void)dealloc;
- (id)nextObject;
- (id)initWithStorage:(id)arg1 range:(struct _NSRange)arg2;

@end

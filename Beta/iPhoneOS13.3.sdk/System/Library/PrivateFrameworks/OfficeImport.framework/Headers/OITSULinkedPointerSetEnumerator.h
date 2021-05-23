/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSEnumerator.h>

@class OITSULinkedPointerSetEntry;

__attribute__((visibility("hidden")))
@interface OITSULinkedPointerSetEnumerator : NSEnumerator

{
    OITSULinkedPointerSetEntry *mHead;
    OITSULinkedPointerSetEntry *mLastUsed;
}

- (id)nextObject;
- (id)initWithFirstEntry:(id)arg1;

@end

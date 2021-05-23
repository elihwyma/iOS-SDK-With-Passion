/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSEnumerator.h>

@class OITSULinkedPointerSetEntry;

__attribute__((visibility("hidden")))
@interface OITSULinkedPointerSetReverseEnumerator : NSEnumerator

{
    OITSULinkedPointerSetEntry *mTail;
    OITSULinkedPointerSetEntry *mLastUsed;
}

- (id)nextObject;
- (id)initWithLastEntry:(id)arg1;

@end

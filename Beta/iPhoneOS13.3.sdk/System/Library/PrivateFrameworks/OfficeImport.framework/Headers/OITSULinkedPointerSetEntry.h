/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface OITSULinkedPointerSetEntry : NSObject

{
    id mObject;
    OITSULinkedPointerSetEntry *mPrevious;
    OITSULinkedPointerSetEntry *mNext;
}

- (void)dealloc;
- (id)initWithObject:(id)arg1 previousEntry:(id)arg2;

@end

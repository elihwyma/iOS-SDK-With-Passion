/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSEnumerator.h>

__attribute__((visibility("hidden")))
@interface _PFResultObjectKeyEnumerator : NSEnumerator

{
    id _target;
    const id *_keys;
    unsigned long long *_referenceItems;
    struct _NSRange _range;
    unsigned long long _index;
}

- (void)dealloc;
- (void)_invalidate;
- (id)nextObject;
- (id)initWithArray:(const id *)arg1 forTarget:(id)arg2 withReferenceValues:(unsigned long long *)arg3 andRange:(struct _NSRange)arg4;

@end

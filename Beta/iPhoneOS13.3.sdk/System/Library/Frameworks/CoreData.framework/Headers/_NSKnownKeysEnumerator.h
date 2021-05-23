/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSEnumerator.h>

__attribute__((visibility("hidden")))
@interface _NSKnownKeysEnumerator : NSEnumerator

{
    id _target;
    const id *_list;
    const id *_referenceItems;
    struct _NSRange _range;
    unsigned long long _index;
    unsigned long long _flags;
}

- (void)dealloc;
- (void)_invalidate;
- (id)nextObject;
- (id)initWithArray:(const id *)arg1 forTarget:(id)arg2 withReferenceValues:(const id *)arg3 andRange:(struct _NSRange)arg4 andCopyItems:(_Bool)arg5;

@end

/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSEnumerator.h>

@class NSIndexSet;

__attribute__((visibility("hidden")))
@interface _NSIndexSetEnumerator : NSEnumerator

{
    NSIndexSet *_indexSet;
    unsigned long long _index;
}

- (void)dealloc;
- (id)nextObject;
- (id)initWithIndexSet:(id)arg1;

@end

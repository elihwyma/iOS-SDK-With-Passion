/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSEnumerator.h>

__attribute__((visibility("hidden")))
@interface NSSearchPathEnumerator : NSEnumerator

{
    long long state;
    unsigned long long directory;
    unsigned long long domainMask;
}

- (id)nextObject;
- (id)initWithDirectory:(unsigned long long)arg1 domains:(unsigned long long)arg2;

@end

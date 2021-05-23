/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSEnumerator.h>

@class NSConstantArray;

__attribute__((visibility("hidden")))
@interface __NSConstantArrayEnumerator : NSEnumerator

{
    NSConstantArray *_underlyingArray;
    unsigned long long _index;
}

- (id)nextObject;
- (id)allObjects;
- (id)initWithConstantArray:(id)arg1;

@end

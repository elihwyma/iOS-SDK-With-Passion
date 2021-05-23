/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSEnumerator.h>

@class NSConstantDictionary;

__attribute__((visibility("hidden")))
@interface __NSConstantDictionaryEnumerator : NSEnumerator

{
    NSConstantDictionary *_underlyingDictionary;
    unsigned long long _currentIndex;
    _Bool _isForKeys;
}

- (id)nextObject;
- (id)initWithConstantDictionary:(id)arg1 enumerateKeys:(_Bool)arg2;

@end

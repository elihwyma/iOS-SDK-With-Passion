/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSEnumerator.h>

@class NSSimpleAttributeDictionary;

__attribute__((visibility("hidden")))
@interface NSSimpleAttributeDictionaryEnumerator : NSEnumerator

{
    NSSimpleAttributeDictionary *dictionary;
    unsigned long long nextElement;
}

- (void)dealloc;
- (id)nextObject;
- (id)initWithAttributeDictionary:(id)arg1;

@end

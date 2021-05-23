/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <Foundation/NSEnumerator.h>

@class NSAttributeDictionary;

@interface NSAttributeDictionaryEnumerator : NSEnumerator

{
    NSAttributeDictionary *dictionary;
    unsigned long long nextElement;
}

- (void)dealloc;
- (id)nextObject;
- (id)initWithAttributeDictionary:(id)arg1;

@end

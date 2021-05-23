/*
 Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

#import <Foundation/NSEnumerator.h>

@class _PASLPDictionary;

@interface _PASLPDictionaryEnumerator : NSEnumerator

{
    _PASLPDictionary *_lpDict;
    unsigned long long _ofs;
}

- (id)nextObject;
- (id)initWithLPDictionary:(id)arg1;

@end

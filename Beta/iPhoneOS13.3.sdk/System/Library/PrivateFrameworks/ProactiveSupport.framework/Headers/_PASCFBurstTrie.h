/*
 Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

#import <Foundation/NSObject.h>

@interface _PASCFBurstTrie : NSObject

{
    struct _CFBurstTrie *_trie;
}

- (id)init;
- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (unsigned int)payloadForString:(id)arg1;
- (unsigned int)payloadForString:(id)arg1 range:(struct _NSRange)arg2;
- (unsigned int)payloadForUTF8String:(const char *)arg1 length:(unsigned long long)arg2;
- (void)runBlockWithTrie:(CDUnknownBlockType)arg1;

@end

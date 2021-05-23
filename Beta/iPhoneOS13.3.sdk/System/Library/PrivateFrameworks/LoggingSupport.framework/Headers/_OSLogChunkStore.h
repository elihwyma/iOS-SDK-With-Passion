/*
 Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _OSLogChunkStore : NSObject

{
    const void *_ptr;
    unsigned long long _sz;
}

- (id)initWithBytes:(const void *)arg1 size:(unsigned long long)arg2;
- (void)enumerateChunksInRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateChunksUsingBlock:(CDUnknownBlockType)arg1;

@end

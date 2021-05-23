/*
 Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

#import <LoggingSupport/_OSLogChunkStore.h>

__attribute__((visibility("hidden")))
@interface _OSLogChunkMemory : _OSLogChunkStore

{
    CDUnknownBlockType _deallocator;
}

- (void)dealloc;
- (id)initWithBytes:(const void *)arg1 size:(unsigned long long)arg2 deallocator:(CDUnknownBlockType)arg3;

@end

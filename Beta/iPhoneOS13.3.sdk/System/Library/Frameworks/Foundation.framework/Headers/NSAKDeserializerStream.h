/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface NSAKDeserializerStream : NSObject

{
    const void *memory;
    const char *current;
    unsigned long long left;
    unsigned long long max;
    _Bool freeWhenDone;
}

- (void)dealloc;
- (id)initFromMemoryNoCopy:(const void *)arg1 length:(unsigned long long)arg2 freeWhenDone:(_Bool)arg3;
- (int)readInt;
- (unsigned long long)readAlignedDataSize;
- (void)readData:(void *)arg1 length:(unsigned long long)arg2;
- (id)initFromPath:(id)arg1;

@end

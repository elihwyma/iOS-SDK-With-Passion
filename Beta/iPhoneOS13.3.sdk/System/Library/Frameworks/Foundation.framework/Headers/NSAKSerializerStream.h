/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface NSAKSerializerStream : NSObject

{
    void *memory;
    unsigned long long current;
    unsigned long long max;
    struct __CFDictionary *roomForIntLocations;
}

- (void)dealloc;
- (void)copySerializationInto:(void *)arg1;
- (unsigned long long)writeInt:(unsigned long long)arg1;
- (unsigned long long)writeAlignedDataSize:(unsigned long long)arg1;
- (unsigned long long)writeData:(const void *)arg1 length:(unsigned long long)arg2;
- (unsigned long long)writeRoomForInt:(int *)arg1;
- (void)writeDelayedInt:(unsigned long long)arg1 for:(int)arg2;
- (_Bool)writeToPath:(id)arg1 safely:(_Bool)arg2;

@end

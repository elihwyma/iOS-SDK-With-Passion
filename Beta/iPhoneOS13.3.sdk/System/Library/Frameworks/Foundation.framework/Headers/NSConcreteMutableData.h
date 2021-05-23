/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSMutableData.h>

__attribute__((visibility("hidden")))
@interface NSConcreteMutableData : NSMutableData

{
    unsigned int _reserved:1;
    unsigned int _needToZero:1;
    unsigned int _hasVM:1;
    unsigned int _retainCount:29;
    unsigned long long _length;
    unsigned long long _capacity;
    void *_bytes;
}

- (void)appendBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (id)init;
- (void)dealloc;
- (unsigned long long)length;
- (const void *)bytes;
- (id)initWithCapacity:(unsigned long long)arg1;
- (void *)mutableBytes;
- (void)setLength:(unsigned long long)arg1;
- (void)increaseLengthBy:(unsigned long long)arg1;
- (_Bool)_providesConcreteBacking;
- (id)initWithBytes:(void *)arg1 length:(unsigned long long)arg2 copy:(_Bool)arg3 deallocator:(CDUnknownBlockType)arg4;
- (id)initWithLength:(unsigned long long)arg1;
- (void)replaceBytesInRange:(struct _NSRange)arg1 withBytes:(const void *)arg2;
- (void)appendData:(id)arg1;
- (void)resetBytesInRange:(struct _NSRange)arg1;
- (void)_freeBytes;
- (_Bool)_canUseRealloc;

@end

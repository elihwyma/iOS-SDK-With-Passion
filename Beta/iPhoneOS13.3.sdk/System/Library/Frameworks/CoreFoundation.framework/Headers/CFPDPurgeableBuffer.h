/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <CoreFoundation/CFPDDataBuffer.h>

__attribute__((visibility("hidden")))
@interface CFPDPurgeableBuffer : CFPDDataBuffer

{
    struct __CFData *handle;
    unsigned long long allocSize;
    _Bool safe;
    _Bool usedMalloc;
}

- (void)dealloc;
- (unsigned long long)length;
- (void *)bytes;
- (_Bool)purgable;
- (void)endAccessing;
- (_Bool)beginAccessing;
- (id)initWithFileDescriptor:(int)arg1 size:(unsigned long long)arg2;
- (id)initWithPropertyList:(void *)arg1;

@end

/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <CoreFoundation/CFPDDataBuffer.h>

__attribute__((visibility("hidden")))
@interface CFPDCFDataBuffer : CFPDDataBuffer

{
    struct __CFData *data;
}

- (void)dealloc;
- (unsigned long long)length;
- (void *)bytes;
- (struct __CFData *)copyCFData;
- (id)copyXPCData;
- (id)initWithCFData:(struct __CFData *)arg1;

@end

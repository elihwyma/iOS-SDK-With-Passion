/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CPFontInfo : NSObject

{
    struct __CFData *fontData;
    const char *dataPtr;
    unsigned int offset;
    unsigned int fontDataLength;
    _Bool valid;
}

- (void)dealloc;
- (void)finalize;
- (float)readFloat;
- (void)dispose;
- (int)kernUnitsPerEm;
- (unsigned char)readByte;
- (unsigned int)readUnsignedLong;
- (struct CGRect)readRect;
- (int)readLong;
- (id)initWithFontData:(struct __CFData *)arg1;
- (_Bool)getDescriptor:(CDStruct_05724ab2 *)arg1;
- (struct __CFData *)newKernData;

@end

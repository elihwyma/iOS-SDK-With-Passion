/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CPFontKerning : NSObject

{
    struct __CFData *kernTable;
    const char *dataPtr;
    unsigned int offset;
    unsigned int kernTableLength;
    struct __CFDictionary *kernDictionary;
    _Bool override;
    _Bool valid;
}

- (void)dealloc;
- (void)finalize;
- (void)dispose;
- (unsigned char)readByte;
- (unsigned int)readUnsignedLong;
- (id)initWithKernData:(struct __CFData *)arg1;
- (unsigned short)readUnsignedShort;
- (void)doKerningPair;
- (void)doSubtableFormat0;
- (void)doSubtableFormat1;
- (void)doSubtableFormat2;
- (void)doSubtableFormat3;
- (void)doOTSubtable;
- (void)doTTSubtable;
- (void)doTable;
- (id)initWithCGFont:(struct CGFont *)arg1;
- (short)readShort;
- (struct __CFDictionary *)createKernTable;

@end

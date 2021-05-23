/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableData;

__attribute__((visibility("hidden")))
@interface MFBitmap : NSObject

{
    int m_width;
    int m_height;
    unsigned int m_bitsPerPixel;
    int m_compression;
    _Bool m_isOS2;
    unsigned int m_infoHeaderSize;
    unsigned int m_paletteSize;
    NSMutableData *m_bmpData;
}

- (id)init;
- (_Bool)isEmpty;
- (_Bool)isFlipped;
- (const char *)pixelData;
- (unsigned int)coloursUsed:(const char *)arg1 in_headerSize:(unsigned int)arg2 in_usage:(int)arg3;
- (void)writePaletteEntry:(id)arg1 in_index:(int)arg2;
- (void)setNull;
- (_Bool)parseHeader:(const char *)arg1 in_headerSize:(unsigned int)arg2;
- (void)appendDIBPalette:(id)arg1 in_header:(const char *)arg2 in_headerSize:(unsigned int)arg3 in_usage:(int)arg4;
- (_Bool)processDIBHeader:(id)arg1 in_header:(const char *)arg2 in_headerSize:(unsigned int)arg3 in_usage:(int)arg4;
- (unsigned int)pixelDataOffset:(const char *)arg1 in_headerSize:(unsigned int)arg2 in_usage:(int)arg3;
- (void)writeFileHeader;
- (void)writeInfoHeader;
- (id)initWithDIBitmap:(id)arg1 in_dib:(const char *)arg2 in_dibSize:(unsigned int)arg3 in_usage:(int)arg4;
- (id)initWithDIBitmap:(id)arg1 in_header:(const char *)arg2 in_headerSize:(unsigned int)arg3 in_bitmap:(const char *)arg4 in_bitmapSize:(unsigned int)arg5 in_usage:(int)arg6;
- (id)initWithBitmap:(id)arg1 in_width:(int)arg2 in_height:(int)arg3 in_planes:(int)arg4 in_bitsPerPixel:(int)arg5 in_bitmap:(const char *)arg6 in_bitmapSize:(unsigned int)arg7;
- (void)setMonoPalette:(id)arg1;

@end

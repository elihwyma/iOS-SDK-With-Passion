/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MFFont : NSObject

{
    int m_lfHeight;
    int m_lfWidth;
    int m_lfEscapement;
    int m_lfOrientation;
    int m_lfWeight;
    _Bool m_lfItalic;
    _Bool m_lfUnderline;
    _Bool m_lfStrikeOut;
    int m_lfCharSet;
    int m_lfOutPrecision;
    unsigned char m_lfClipPrecision;
    int m_lfQuality;
    int m_pitch;
    int m_family;
    NSString *m_lfFaceName;
    NSString *m_elfFullName;
    NSString *m_elfStyle;
    unsigned int m_elfVersion;
    unsigned int m_elfStyleSize;
    unsigned int m_elfMatch;
    unsigned int m_elfVendorId;
    unsigned int m_elfCulture;
}

+ (id)fontWithStockFont:(int)arg1;
+ (id)fontWithFeatures:(int)arg1 lfWidth:(int)arg2 lfEscapement:(int)arg3 lfOrientation:(int)arg4 lfWeight:(int)arg5 lfItalic:(_Bool)arg6 lfUnderline:(_Bool)arg7 lfStrikeOut:(_Bool)arg8 lfCharSet:(int)arg9 lfOutPrecision:(int)arg10 lfClipPrecision:(unsigned char)arg11 lfQuality:(int)arg12 pitch:(int)arg13 family:(int)arg14 lfFaceName:(id)arg15;
+ (id)fontWithExtendedFeatures:(int)arg1 lfWidth:(int)arg2 lfEscapement:(int)arg3 lfOrientation:(int)arg4 lfWeight:(int)arg5 lfItalic:(_Bool)arg6 lfUnderline:(_Bool)arg7 lfStrikeOut:(_Bool)arg8 lfCharSet:(int)arg9 lfOutPrecision:(int)arg10 lfClipPrecision:(unsigned char)arg11 lfQuality:(int)arg12 pitch:(int)arg13 family:(int)arg14 lfFaceName:(id)arg15 elfFullName:(id)arg16 elfStyle:(id)arg17 elfVersion:(unsigned int)arg18 elfStyleSize:(unsigned int)arg19 elfMatch:(unsigned int)arg20 elfVendorId:(unsigned int)arg21 elfCulture:(unsigned int)arg22;

- (_Bool)underline;
- (int)selectInto:(id)arg1;
- (id)initWithAllFeatures:(int)arg1 lfWidth:(int)arg2 lfEscapement:(int)arg3 lfOrientation:(int)arg4 lfWeight:(int)arg5 lfItalic:(_Bool)arg6 lfUnderline:(_Bool)arg7 lfStrikeOut:(_Bool)arg8 lfCharSet:(int)arg9 lfOutPrecision:(int)arg10 lfClipPrecision:(unsigned char)arg11 lfQuality:(int)arg12 pitch:(int)arg13 family:(int)arg14 lfFaceName:(id)arg15 elfFullName:(id)arg16 elfStyle:(id)arg17 elfVersion:(unsigned int)arg18 elfStyleSize:(unsigned int)arg19 elfMatch:(unsigned int)arg20 elfVendorId:(unsigned int)arg21 elfCulture:(unsigned int)arg22;
- (id)initWithFeatures:(int)arg1 lfWidth:(int)arg2 lfEscapement:(int)arg3 lfOrientation:(int)arg4 lfWeight:(int)arg5 lfItalic:(_Bool)arg6 lfUnderline:(_Bool)arg7 lfStrikeOut:(_Bool)arg8 lfCharSet:(int)arg9 lfOutPrecision:(int)arg10 lfClipPrecision:(unsigned char)arg11 lfQuality:(int)arg12 pitch:(int)arg13 family:(int)arg14 lfFaceName:(id)arg15;
- (id)initWithStockFont:(int)arg1;
- (struct CGRect)textExtent:(id)arg1 options:(int)arg2 in_spacingValues:(int *)arg3 in_count:(int)arg4;
- (id)stringWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (int)getCharset;
- (id)faceName;
- (double)escapement;
- (_Bool)strikeout;
- (double)fontHeight;

@end

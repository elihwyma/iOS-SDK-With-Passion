/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMStyle.h>

#import <OfficeImport/Swift-Protocol.h>

@class EDStyle;

__attribute__((visibility("hidden")))
@interface EMCellStyle : CMStyle <Swift>

{
    EDStyle *_edStyle;
    int _edCellType;
    double _columnWidth;
    double _contentWidth;
    _Bool _truncateContents;
    _Bool _resolvedProperties;
}

+ (double)contentWidthForColumnWidth:(double)arg1;
+ (id)_parseFontName:(id)arg1 nameContainsBold:(_Bool *)arg2 nameContainsItalic:(_Bool *)arg3;
+ (id)styleForFont:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)cssStyleString;
- (id)cacheFriendlyCSSStyleString;
- (id)initWithEDStyle:(id)arg1 type:(int)arg2 columnWidth:(unsigned long long)arg3 contentWidth:(unsigned long long)arg4 truncateContents:(_Bool)arg5;
- (void)addFontStyle:(id)arg1;
- (void)addBordersStyle:(id)arg1;
- (void)addFillStyle:(id)arg1;
- (void)addAlignmentStyle:(id)arg1;
- (void)resolveFormatType;
- (void)resolveContentWidth;

@end

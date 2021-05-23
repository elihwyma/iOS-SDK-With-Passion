/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class WDDocument, WDText;

__attribute__((visibility("hidden")))
@interface WDSection : NSObject

{
    unsigned int mOriginal:1;
    unsigned int mTracked:1;
    unsigned int mResolved:1;
    WDText *mText;
    WDText *mEvenPageHeader;
    WDText *mOddPageHeader;
    WDText *mFirstPageHeader;
    WDText *mEvenPageFooter;
    WDText *mOddPageFooter;
    WDText *mFirstPageFooter;
    CDStruct_a57204a6 mOriginalProperties;
    CDStruct_a57204a6 mTrackedProperties;
    WDDocument *mDocument;
}

@property (weak, readonly) WDDocument *document;

- (id)description;
- (id).cxx_construct;
- (unsigned short)columnCount;
- (id)text;
- (void)setLeftMargin:(long long)arg1;
- (void)setRightMargin:(long long)arg1;
- (void)setTopMargin:(long long)arg1;
- (void)setBottomMargin:(long long)arg1;
- (long long)topMargin;
- (id)initWithDocument:(id)arg1;
- (long long)rightMargin;
- (id)rightBorder;
- (unsigned int)pageScale;
- (int)textDirection;
- (void)setColumnCount:(unsigned short)arg1;
- (void)setPageWidth:(long long)arg1;
- (long long)pageWidth;
- (void)setPageHeight:(long long)arg1;
- (long long)pageHeight;
- (long long)bottomMargin;
- (int)borderOffset;
- (long long)leftMargin;
- (id)topBorder;
- (id)bottomBorder;
- (long long)headerMargin;
- (_Bool)isPageWidthOverridden;
- (_Bool)isPageHeightOverridden;
- (_Bool)isBreakTypeOverridden;
- (int)breakType;
- (_Bool)isLeftMarginOverridden;
- (_Bool)isRightMarginOverridden;
- (_Bool)isTopMarginOverridden;
- (id)firstPageHeader;
- (id)oddPageHeader;
- (_Bool)isBottomMarginOverridden;
- (_Bool)isBottomBorderOverridden;
- (_Bool)isTitlePageOverridden;
- (_Bool)titlePage;
- (id)evenPageHeader;
- (id)firstPageFooter;
- (id)oddPageFooter;
- (id)evenPageFooter;
- (_Bool)isTopBorderOverridden;
- (_Bool)isLeftBorderOverridden;
- (_Bool)isRightBorderOverridden;
- (id)leftBorder;
- (void)setTextDirection:(int)arg1;
- (void)setHeaderMargin:(long long)arg1;
- (void)setFooterMargin:(long long)arg1;
- (long long)footerMargin;
- (void)setResolveMode:(int)arg1;
- (id)mutableTopBorder;
- (id)mutableLeftBorder;
- (id)mutableBottomBorder;
- (id)mutableRightBorder;
- (void)setBreakType:(int)arg1;
- (void)setPageOrientation:(int)arg1;
- (void)setGutterMargin:(long long)arg1;
- (void)setRtlGutter:(_Bool)arg1;
- (void)setBorderDepth:(int)arg1;
- (void)setBorderDisplay:(int)arg1;
- (void)setBorderOffset:(int)arg1;
- (void)setLineNumberStart:(short)arg1;
- (void)setLineNumberIncrement:(unsigned short)arg1;
- (void)setLineNumberDistance:(short)arg1;
- (void)setLineNumberRestart:(int)arg1;
- (void)setPageNumberFormat:(int)arg1;
- (void)setPageNumberStart:(unsigned short)arg1;
- (void)setPageNumberRestart:(_Bool)arg1;
- (void)setChapterNumberSeparator:(int)arg1;
- (void)setColumnsEqualWidth:(_Bool)arg1;
- (void)setBidi:(_Bool)arg1;
- (int)resolveMode;
- (_Bool)isColumnCountOverridden;
- (void)appendColumnWidth:(long long)arg1;
- (void)appendColumnSpace:(long long)arg1;
- (void)setColumnSpace:(long long)arg1;
- (void)setVerticalJustification:(int)arg1;
- (void)setTitlePage:(_Bool)arg1;
- (void)setFormattingChanged:(_Bool)arg1;
- (void)setIndexToAuthorIDOfFormattingChange:(unsigned short)arg1;
- (void)setFormattingChangeDate:(id)arg1;
- (_Bool)isPageOrientationOverridden;
- (int)pageOrientation;
- (_Bool)isHeaderMarginOverridden;
- (_Bool)isFooterMarginOverridden;
- (_Bool)isGutterMarginOverridden;
- (long long)gutterMargin;
- (_Bool)isRtlGutterOverridden;
- (_Bool)rtlGutter;
- (_Bool)isBorderDepthOverridden;
- (int)borderDepth;
- (_Bool)isBorderDisplayOverridden;
- (int)borderDisplay;
- (_Bool)isBorderOffsetOverridden;
- (_Bool)isLineNumberStartOverridden;
- (short)lineNumberStart;
- (_Bool)isLineNumberIncrementOverridden;
- (unsigned short)lineNumberIncrement;
- (_Bool)isLineNumberDistanceOverridden;
- (short)lineNumberDistance;
- (_Bool)isLineNumberRestartOverridden;
- (int)lineNumberRestart;
- (_Bool)isPageNumberFormatOverridden;
- (int)pageNumberFormat;
- (_Bool)isPageNumberStartOverridden;
- (unsigned short)pageNumberStart;
- (_Bool)isPageNumberRestartOverridden;
- (_Bool)pageNumberRestart;
- (_Bool)isChapterNumberSeparatorOverridden;
- (int)chapterNumberSeparator;
- (_Bool)isColumnsEqualWidthOverridden;
- (_Bool)columnsEqualWidth;
- (long long)columnWidthAt:(unsigned int)arg1;
- (long long)columnSpaceAt:(unsigned int)arg1;
- (_Bool)isColumnSpaceOverridden;
- (long long)columnSpace;
- (_Bool)isVerticalJustificationOverridden;
- (int)verticalJustification;
- (_Bool)isBidiOverridden;
- (_Bool)bidi;
- (_Bool)isFormattingChangedOverridden;
- (_Bool)formattingChanged;
- (_Bool)isIndexToAuthorIDOfFormattingChangeOverridden;
- (unsigned short)indexToAuthorIDOfFormattingChange;
- (_Bool)isFormattingChangeDateOverridden;
- (id)formattingChangeDate;
- (_Bool)isTextDirectionOverridden;
- (void)setPageScale:(unsigned int)arg1;
- (_Bool)isPageScaleOverridden;
- (_Bool)isLastColumnWidthDefined;
- (_Bool)isColumnWidthDefinedAt:(unsigned int)arg1;

@end

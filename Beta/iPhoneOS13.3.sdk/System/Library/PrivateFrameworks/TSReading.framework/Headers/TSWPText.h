/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, TSDCanvas, TSDLayout, TSPObject, TSUColor, TSWPColumnStyle, TSWPListStyle, TSWPPadding, TSWPParagraphStyle, TSWPStorage;

@protocol TSDHint, TSWPFootnoteHeightMeasurer, TSWPFootnoteMarkProvider, TSWPOffscreenColumn, TSWPStyleProvider, TSWPTextDelegate;

@interface TSWPText : NSObject

{
    TSWPParagraphStyle *_paragraphStyle;
    TSWPListStyle *_listStyle;
    TSWPColumnStyle *_columnStyle;
    TSUColor *_textColorOverride;
    TSWPStorage *_storage;
    NSMutableArray *_columns;
    struct CGSize _minSize;
    struct CGSize _maxSize;
    unsigned long long _pageNumber;
    unsigned long long _pageCount;
    int _flags;
    struct CGPoint _anchor;
    unsigned int _naturalAlignment;
    int _naturalDirection;
    NSObject<TSWPTextDelegate> *_delegate;
    _Bool _allowsLastLineTruncation;
    unsigned int _maxLineCount;
    id <TSWPStyleProvider> _styleProvider;
    double _reservedWidthWhenTruncating;
}

@property (nonatomic) NSObject<TSWPTextDelegate> *delegate;
@property (nonatomic, readonly) TSWPParagraphStyle *paragraphStyle;
@property (retain, nonatomic) TSUColor *textColorOverride;
@property (retain, nonatomic) id <TSWPStyleProvider> styleProvider;
@property (nonatomic) unsigned int maxLineCount;
@property (nonatomic) _Bool allowsLastLineTruncation;
@property (nonatomic) double reservedWidthWhenTruncating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic, readonly) NSMutableArray *columns;
@property (retain, nonatomic, readonly) id <TSWPOffscreenColumn> previousTargetLastColumn;
@property (nonatomic, readonly) const struct TSWPTopicNumberHints *previousTargetTopicNumbers;
@property (retain, nonatomic, readonly) id <TSWPOffscreenColumn> nextTargetFirstColumn;
@property (nonatomic, readonly) const struct TSWPTopicNumberHints *nextTargetTopicNumbers;
@property (nonatomic, readonly) id <TSWPFootnoteHeightMeasurer> footnoteHeightMeasurer;
@property (nonatomic, readonly) id <TSWPFootnoteMarkProvider> footnoteMarkProvider;
@property (nonatomic, readonly) TSPObject<TSDHint> *nextTargetFirstChildHint;
@property (nonatomic, readonly) struct CGSize minSize;
@property (nonatomic, readonly) struct CGSize maxSize;
@property (nonatomic, readonly) struct CGSize currentSize;
@property (nonatomic, readonly) struct CGPoint position;
@property (nonatomic, readonly) struct CGPoint anchorPoint;
@property (nonatomic, readonly) unsigned int autosizeFlags;
@property (nonatomic, readonly) unsigned int verticalAlignment;
@property (nonatomic, readonly) unsigned int naturalAlignment;
@property (nonatomic, readonly) int naturalDirection;
@property (nonatomic, readonly) _Bool wantsLineFragments;
@property (nonatomic, readonly) unsigned long long pageNumber;
@property (nonatomic, readonly) unsigned long long pageCount;
@property (nonatomic, readonly) _Bool textIsVertical;
@property (nonatomic, readonly) _Bool layoutIsValid;
@property (nonatomic, readonly) double maxAnchorY;
@property (nonatomic, readonly) struct CGRect maskRect;
@property (retain, nonatomic) NSMutableArray *anchoredDrawablesForRelayout;
@property (nonatomic, readonly) TSDCanvas *canvas;
@property (nonatomic, readonly) TSDLayout *parentLayoutForInlineAttachments;
@property (nonatomic, readonly) _Bool shouldHyphenate;
@property (nonatomic, readonly) struct __CFLocale *hyphenationLocale;
@property (nonatomic, readonly) _Bool ignoresEquationAlignment;
@property (nonatomic, readonly) _Bool allowsDescendersToClip;
@property (nonatomic, readonly) _Bool pushAscendersIntoColumn;
@property (nonatomic, readonly) _Bool alwaysAllowWordSplit;
@property (nonatomic, readonly) struct CGSize adjustedInsets;
@property (nonatomic, readonly) TSWPPadding *layoutMargins;
@property (nonatomic, readonly) unsigned long long columnCount;
@property (nonatomic, readonly) _Bool alwaysStartsNewTarget;
@property (nonatomic, readonly) _Bool shrinkTextToFit;
@property (nonatomic, readonly) _Bool columnsAreLeftToRight;
@property (nonatomic, readonly) double textScaleFactor;

+ (void)renderColumn:(id)arg1 selection:(id)arg2 inContext:(struct CGContext *)arg3 isFlipped:(_Bool)arg4 viewScale:(double)arg5;
+ (void)renderColumns:(id)arg1 selection:(id)arg2 inContext:(struct CGContext *)arg3 isFlipped:(_Bool)arg4 viewScale:(double)arg5;

- (void)dealloc;
- (double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
- (double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
- (double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 outWidth:(double *)arg3 outGap:(double *)arg4;
- (id)textWrapper;
- (id)initWithParagraphStyle:(id)arg1;
- (struct CGSize)measureStorage:(id)arg1;
- (void)addAttachmentLayout:(id)arg1;
- (_Bool)shouldPositionAttachmentsIteratively;
- (unsigned long long)iterativeAttachmentPositioningMaxPassCount;
- (id)currentInlineDrawableLayouts;
- (id)currentAnchoredDrawableLayouts;
- (id)validatedLayoutForAnchoredDrawable:(id)arg1;
- (id)layoutForInlineDrawable:(id)arg1;
- (_Bool)isLayoutOffscreen;
- (id)columnMetricsForCharIndex:(unsigned long long)arg1 outRange:(struct _NSRange *)arg2;
- (_Bool)isLastTarget;
- (void)setNeedsDisplayInTargetRect:(struct CGRect)arg1;
- (struct CGRect)targetRectForCanvasRect:(struct CGRect)arg1;
- (_Bool)adjustColumnOriginForAlignment;
- (_Bool)caresAboutStorageChanges;
- (void)layoutManagerNeedsLayout:(id)arg1;
- (void)layoutManager:(id)arg1 didClearDirtyRangeWithDelta:(long long)arg2 afterCharIndex:(unsigned long long)arg3;
- (id)lineHintsForTarget:(id)arg1;
- (_Bool)forceWesternLineBreaking;
- (id)initWithParagraphStyle:(id)arg1 listStyle:(id)arg2 columnStyle:(id)arg3 alignmentForNaturalAlignment:(unsigned int)arg4 naturalDirection:(int)arg5;
- (id)layoutTextStorage:(id)arg1 minSize:(struct CGSize)arg2 maxSize:(struct CGSize)arg3 anchor:(struct CGPoint)arg4 pageNumber:(unsigned long long)arg5 pageCount:(unsigned long long)arg6 flags:(int)arg7;
- (id)layoutMultiColumnTextStorage:(id)arg1 minSize:(struct CGSize)arg2 maxSize:(struct CGSize)arg3 anchor:(struct CGPoint)arg4 pageNumber:(unsigned long long)arg5 pageCount:(unsigned long long)arg6 flags:(int)arg7;
- (id)layoutText:(id)arg1 kind:(int)arg2 minSize:(struct CGSize)arg3 maxSize:(struct CGSize)arg4 anchor:(struct CGPoint)arg5 flags:(int)arg6;
- (id)layoutText:(id)arg1 minSize:(struct CGSize)arg2 maxSize:(struct CGSize)arg3 anchor:(struct CGPoint)arg4 flags:(int)arg5;
- (id)layoutTextStorage:(id)arg1 minSize:(struct CGSize)arg2 maxSize:(struct CGSize)arg3 anchor:(struct CGPoint)arg4 flags:(int)arg5;
- (void)drawColumn:(id)arg1 selection:(id)arg2 inContext:(struct CGContext *)arg3 isFlipped:(_Bool)arg4 viewScale:(double)arg5;
- (void)drawColumn:(id)arg1 inContext:(struct CGContext *)arg2 isFlipped:(_Bool)arg3 viewScale:(double)arg4;
- (id)initWithParagraphStyle:(id)arg1 columnStyle:(id)arg2 alignmentForNaturalAlignment:(unsigned int)arg3 naturalDirection:(int)arg4;
- (id)initWithParagraphStyle:(id)arg1 listStyle:(id)arg2 columnStyle:(id)arg3;
- (id)initWithParagraphStyle:(id)arg1 columnStyle:(id)arg2;
- (id)initWithParagraphStyle:(id)arg1 listStyle:(id)arg2;
- (struct CGSize)measureText:(id)arg1;
- (void)drawText:(id)arg1 inContext:(struct CGContext *)arg2 minSize:(struct CGSize)arg3 maxSize:(struct CGSize)arg4 anchor:(struct CGPoint)arg5 flags:(int)arg6 viewScale:(double)arg7;

@end

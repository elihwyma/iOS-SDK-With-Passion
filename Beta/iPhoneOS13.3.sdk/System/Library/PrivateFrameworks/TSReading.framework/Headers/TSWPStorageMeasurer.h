/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, TSDCanvas, TSDLayout, TSPObject, TSWPPadding, TSWPStorage;

@protocol TSDHint, TSWPFootnoteHeightMeasurer, TSWPFootnoteMarkProvider, TSWPLayoutParent, TSWPOffscreenColumn, TSWPStyleProvider;

@interface TSWPStorageMeasurer : NSObject

{
    TSWPStorage *_storage;
    NSObject<TSWPLayoutParent> *_layoutParent;
    id <TSWPStyleProvider> _styleProvider;
    NSMutableArray *_columns;
    struct CGSize _minSize;
    struct CGSize _maxSize;
    unsigned int _flags;
    struct CGPoint _anchor;
}

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
@property (nonatomic, readonly) _Bool allowsLastLineTruncation;
@property (nonatomic, readonly) double reservedWidthWhenTruncating;
@property (nonatomic, readonly) unsigned int maxLineCount;
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

- (void)dealloc;
- (id)initWithStorage:(id)arg1;
- (id)styleProvider;
- (double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
- (double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
- (double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 outWidth:(double *)arg3 outGap:(double *)arg4;
- (id)textWrapper;
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
- (_Bool)caresAboutStorageChanges;
- (void)layoutManagerNeedsLayout:(id)arg1;
- (void)layoutManager:(id)arg1 didClearDirtyRangeWithDelta:(long long)arg2 afterCharIndex:(unsigned long long)arg3;
- (id)lineHintsForTarget:(id)arg1;
- (id)pLayoutWithMinSize:(struct CGSize)arg1 maxSize:(struct CGSize)arg2 anchor:(struct CGPoint)arg3 flags:(unsigned int)arg4;
- (struct CGSize)measuredSizeWithFlags:(unsigned int)arg1;
- (struct CGSize)measuredSizeWithFlags:(unsigned int)arg1 maxSize:(struct CGSize)arg2 layoutParent:(id)arg3 styleProvider:(id)arg4;

@end

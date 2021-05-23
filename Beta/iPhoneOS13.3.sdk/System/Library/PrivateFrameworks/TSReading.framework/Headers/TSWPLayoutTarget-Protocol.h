/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/Swift-Protocol.h>

@class NSMutableArray, TSDCanvas, TSDLayout, TSPObject;

@protocol TSDHint, TSWPFootnoteHeightMeasurer, TSWPFootnoteMarkProvider, TSWPOffscreenColumn;

@protocol TSWPLayoutTarget <Swift>

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

- (unsigned short)addAttachmentLayout: /* Error: Ran out of types for this method. */;
- (unsigned short)shouldPositionAttachmentsIteratively;
- (unsigned short)iterativeAttachmentPositioningMaxPassCount;
- (unsigned short)currentInlineDrawableLayouts;
- (unsigned short)currentAnchoredDrawableLayouts;
- (unsigned short)validatedLayoutForAnchoredDrawable: /* Error: Ran out of types for this method. */;
- (unsigned short)layoutForInlineDrawable: /* Error: Ran out of types for this method. */;
- (unsigned short)isLayoutOffscreen;
- (unsigned short)columnMetricsForCharIndex:outRange: /* Error: Ran out of types for this method. */;
- (unsigned short)isLastTarget;
- (unsigned short)setNeedsDisplayInTargetRect: /* Error: Ran out of types for this method. */;
- (unsigned short)targetRectForCanvasRect: /* Error: Ran out of types for this method. */;

@end

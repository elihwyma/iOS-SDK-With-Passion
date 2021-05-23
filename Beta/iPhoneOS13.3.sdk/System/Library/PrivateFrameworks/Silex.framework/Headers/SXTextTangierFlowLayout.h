/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <TSReading/TSDLayout.h>

@class NSMutableArray, NSString, TSDCanvas, TSPObject;

@protocol TSDHint, TSWPFootnoteHeightMeasurer, TSWPFootnoteMarkProvider, TSWPOffscreenColumn;

@interface SXTextTangierFlowLayout : TSDLayout

{
    NSMutableArray *_columns;
}

@property (retain, nonatomic) NSMutableArray *columns;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic, readonly) id <TSWPOffscreenColumn> previousTargetLastColumn;
@property (nonatomic, readonly) const void *previousTargetTopicNumbers;
@property (retain, nonatomic, readonly) id <TSWPOffscreenColumn> nextTargetFirstColumn;
@property (nonatomic, readonly) const void *nextTargetTopicNumbers;
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

- (void)dealloc;
- (void)validate;
- (id)initWithInfo:(id)arg1 layout:(id)arg2 frame:(struct CGRect)arg3;
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
- (unsigned long long)characterPositionForPoint:(struct CGPoint)arg1;
- (struct CGPoint)pointForCharacterPosition:(unsigned long long)arg1;
- (struct CGPoint)capturedInfoPositionForAttachment;
- (id)layoutGeometryFromInfo;
- (_Bool)shouldDisplayGuides;
- (_Bool)shouldProvideSizingGuides;

@end

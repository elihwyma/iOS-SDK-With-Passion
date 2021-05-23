/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDLayout.h>

@class NSMutableArray, NSString, TSDBezierPath, TSDCanvas, TSPObject, TSWPLayoutManager;

@protocol TSDHint, TSWPFootnoteHeightMeasurer, TSWPFootnoteMarkProvider, TSWPOffscreenColumn;

@interface TSWPLayout : TSDLayout

{
    TSWPLayoutManager *_layoutManager;
    NSMutableArray *_columns;
    _Bool _textLayoutValid;
}

@property (nonatomic, readonly) TSWPLayoutManager *layoutManager;
@property (nonatomic, readonly) _Bool textLayoutValid;
@property (nonatomic, readonly) TSDBezierPath *interiorClippingPath;
@property (nonatomic, readonly) _Bool shouldWrapAroundExternalDrawables;
@property (nonatomic, readonly) unsigned int lineCount;
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

- (void)dealloc;
- (id)initWithInfo:(id)arg1;
- (void)validate;
- (struct CGRect)rectForSelection:(id)arg1;
- (id)styleProvider;
- (id)p_wpLayoutParent;
- (Class)repClassOverride;
- (id)computeLayoutGeometry;
- (void)invalidateTextLayout;
- (id)textWrapper;
- (void)invalidateSize;
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
- (_Bool)invalidateForPageCountChange;
- (struct CGPoint)capturedInfoPositionForAttachment;
- (id)layoutGeometryFromInfo;
- (_Bool)shouldDisplayGuides;
- (_Bool)shouldProvideSizingGuides;
- (void)parentDidChange;
- (void)wrappableChildInvalidated:(id)arg1;
- (void)layoutSearchForString:(id)arg1 options:(unsigned long long)arg2 hitBlock:(CDUnknownBlockType)arg3;
- (void)layoutSearchForAnnotationWithHitBlock:(CDUnknownBlockType)arg1;
- (id)dependentLayouts;
- (void)parentWillChangeTo:(id)arg1;
- (struct CGPoint)calculatePointFromSearchReference:(id)arg1;
- (id)reliedOnLayouts;
- (struct CGRect)rectForPresentingAnnotationPopoverForSelection:(id)arg1;
- (struct CGRect)frameForCulling;
- (id)initWithInfo:(id)arg1 frame:(struct CGRect)arg2;
- (void)p_invalidateTextLayout;
- (void *)initialLayoutState;
- (_Bool)p_parentAutosizes;
- (void)p_validateTextLayout;
- (struct CGRect)p_protectedRectWithinLayoutForSelectionRect:(struct CGRect)arg1;
- (id)p_firstAncestorRespondingToSelector:(SEL)arg1;
- (void)invalidateParentForAutosizing;
- (struct CGRect)p_rectForSelection:(id)arg1 useParagraphModeRects:(_Bool)arg2;
- (_Bool)caresAboutStorageChanges;
- (void)layoutManagerNeedsLayout:(id)arg1;
- (void)layoutManager:(id)arg1 didClearDirtyRangeWithDelta:(long long)arg2 afterCharIndex:(unsigned long long)arg3;
- (id)lineHintsForTarget:(id)arg1;
- (id)textColorOverride;
- (void)invalidateMaxAutoGrowWidth;
- (void)invalidateForFootnoteNumberingChange;
- (double)baselineForCharIndex:(unsigned int)arg1;

@end

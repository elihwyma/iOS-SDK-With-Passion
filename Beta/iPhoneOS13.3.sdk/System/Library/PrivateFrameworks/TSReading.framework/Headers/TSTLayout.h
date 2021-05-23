/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSWPTextHostLayout.h>

@class NSString, TSTEditingState, TSTLayoutHint, TSTLayoutSpaceBundle, TSTMasterLayout, TSTTableInfo, TSTTableModel, TSWPLayout, TSWPPadding;

@interface TSTLayout : TSWPTextHostLayout

{
    TSTMasterLayout *mMasterLayout;
    TSTLayoutHint *mLayoutHint;
    struct CGRect mCanvasVisibleRect;
    struct CGRect mPreviousVisibleStrokeFrame;
    _Bool mProcessChangesFiltering;
    _Bool mTabsVisible;
    _Bool mTableNameVisibilityIsValid;
    _Bool mTableNameVisible;
    _Bool mNewCanvasRevealedHorizontally;
    _Bool mNewCanvasRevealedVertically;
    _Bool mLayoutDirectionIsLeftToRight;
    TSTLayoutSpaceBundle *mSpaceBundle;
    struct {
        double tableNameHeight;
        struct CGSize scaleToFitParent;
        struct CGSize scaleToFitEnclosingTextColumn;
    } mCached;
    struct CGRect mRenderingFrameForLayoutGeometryFromInfo;
    TSWPLayout *mContainedTextEditingLayout;
    struct UIEdgeInsets mCachedPaddingForEditingCell;
    struct CGRect mComputedEditingCellContentFrame;
    unsigned int mCachedVerticalAlignmentForEditingCell;
    struct CGSize mTableSizeWithoutStrokes;
    struct CGSize mStrokeDelta;
    struct CGSize mCapturedStrokeFrameSizeForInline;
    CDStruct_5f1f7aa9 mEditingSpillingTextRange;
    unsigned int mContainedTextEditorParagraphAlignment;
    _Bool mContainedTextEditorTextWraps;
    _Bool mContainedTextEditorSpills;
    struct CGSize mSpillingTextSize;
    int mCoordinatesChangedMaskForChrome;
}

@property (nonatomic, readonly) TSTTableInfo *tableInfo;
@property (nonatomic, readonly) TSTTableModel *tableModel;
@property (retain, nonatomic) TSTMasterLayout *masterLayout;
@property (retain, nonatomic) TSTLayoutHint *layoutHint;
@property (retain, nonatomic) TSTLayoutSpaceBundle *spaceBundle;
@property (nonatomic) _Bool processChangesFiltering;
@property (nonatomic, readonly) TSTEditingState *editingState;
@property (nonatomic) _Bool newCanvasRevealedHorizontally;
@property (nonatomic) _Bool newCanvasRevealedVertically;
@property (nonatomic, readonly) _Bool layoutDirectionIsLeftToRight;
@property (nonatomic) struct CGSize scaleToFit;
@property (retain, nonatomic) TSWPLayout *containedTextEditingLayout;
@property (nonatomic, readonly) struct UIEdgeInsets paddingForEditingCell;
@property (nonatomic, readonly) struct CGRect computedEditingCellContentFrame;
@property (nonatomic, readonly) CDStruct_5f1f7aa9 editingSpillingTextRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) struct CGSize adjustedInsets;
@property (nonatomic, readonly) TSWPPadding *layoutMargins;
@property (nonatomic, readonly) unsigned long long columnCount;
@property (nonatomic, readonly) _Bool alwaysStartsNewTarget;
@property (nonatomic, readonly) _Bool shrinkTextToFit;
@property (nonatomic, readonly) _Bool columnsAreLeftToRight;
@property (nonatomic, readonly) double textScaleFactor;

- (void)dealloc;
- (void)invalidate;
- (struct CGSize)minimumSize;
- (id)initWithInfo:(id)arg1;
- (id)children;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)setNeedsDisplay;
- (void)validate;
- (struct CGRect)rectForSelection:(id)arg1;
- (_Bool)isBeingManipulated;
- (unsigned int)autosizeFlagsForTextLayout:(id)arg1;
- (unsigned int)verticalAlignmentForTextLayout:(id)arg1;
- (void)invalidateForAutosizingTextLayout:(id)arg1;
- (struct CGRect)nonAutosizedFrameForTextLayout:(id)arg1;
- (struct CGRect)autosizedFrameForTextLayout:(id)arg1 textSize:(struct CGSize)arg2;
- (id)dependentsOfTextLayout:(id)arg1;
- (Class)repClassForTextLayout:(id)arg1;
- (double)maxAutoGrowWidthForTextLayout:(id)arg1;
- (struct CGRect)maskRectForTextLayout:(id)arg1;
- (unsigned int)naturalAlignmentForTextLayout:(id)arg1;
- (struct CGSize)initialTextSize;
- (double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
- (double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
- (double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 outWidth:(double *)arg3 outGap:(double *)arg4;
- (id)computeLayoutGeometry;
- (void)invalidateSize;
- (_Bool)inPrintPreviewMode;
- (void)updateChildrenFromInfo;
- (int)wrapFitType;
- (_Bool)textIsVertical;
- (struct CGPoint)capturedInfoPositionForAttachment;
- (id)layoutGeometryFromInfo;
- (void)layoutSearchForString:(id)arg1 options:(unsigned long long)arg2 hitBlock:(CDUnknownBlockType)arg3;
- (id)childSearchTargets;
- (void)layoutSearchForAnnotationWithHitBlock:(CDUnknownBlockType)arg1;
- (_Bool)orderedBefore:(id)arg1;
- (void)processChanges:(id)arg1;
- (_Bool)supportsRotation;
- (id)dependentLayouts;
- (struct CGRect)alignmentFrame;
- (struct CGPoint)calculatePointFromSearchReference:(id)arg1;
- (void)layoutSearchForSpellingErrorsWithHitBlock:(CDUnknownBlockType)arg1 stop:(_Bool *)arg2;
- (void)willBeAddedToLayoutController:(id)arg1;
- (void)willBeRemovedFromLayoutController:(id)arg1;
- (struct CGPoint)infoGeometryPositionForCurrentAttachedLayoutGeometry;
- (_Bool)resizeMayChangeAspectRatio;
- (_Bool)canAspectRatioLockBeChangedByUser;
- (id)initialInfoGeometry;
- (struct CGRect)rectForPresentingAnnotationPopoverForSelection:(id)arg1;
- (void)offsetGeometryBy:(struct CGPoint)arg1;
- (struct CGRect)alignmentFrameForProvidingGuidesInRoot;
- (_Bool)canRotateChildLayout:(id)arg1;
- (_Bool)inFindReplaceMode;
- (void)storage:(id)arg1 didChangeRange:(struct _NSRange)arg2 delta:(long long)arg3 broadcastKind:(int)arg4;
- (_Bool)p_getLayoutDirectionLeftToRight;
- (id)initWithInfo:(id)arg1 layoutHint:(id)arg2;
- (void)removeContainedTextEditingLayout;
- (void)validateTableNameVisibility;
- (_Bool)isZoomedEditing;
- (void)setupContainedTextEditingLayout:(CDStruct_0441cfb5)arg1;
- (void)p_updateCachedStyleInformationFromCellID:(CDStruct_0441cfb5)arg1;
- (unsigned int)p_naturalAlignmentForCellID:(CDStruct_0441cfb5)arg1;
- (unsigned int)p_defaultAlignmentForTableWritingDirection;
- (_Bool)p_layoutWhollyContainsGridRange:(CDStruct_58eae27c)arg1;
- (struct CGSize)p_rangeUpAndLeftOfIntersectionRangeOfGridRange:(CDStruct_58eae27c)arg1;
- (struct CGRect)p_computeSpillingTextFrameForLayout:(id)arg1 textSize:(struct CGSize)arg2 editingSpillRange:(CDStruct_5f1f7aa9 *)arg3;
- (void)invalidateTableNameVisibility;
- (void)p_processChange:(id)arg1 forChangeSource:(id)arg2 actions:(id)arg3;
- (void)p_processChangeActions:(id)arg1;
- (void)bezierPathsForCellRegion:(id)arg1 transform:(struct CGAffineTransform)arg2 viewScale:(double)arg3 inset:(double)arg4 block:(CDUnknownBlockType)arg5;
- (int)reapCoordinatesChangedMaskForChrome;

@end

/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSWPTextHostRep.h>

@class CALayer, CAShapeLayer, NSMutableArray, NSSet, NSString, TSDCanvasView, TSDEditorController, TSDKnobTracker, TSDTilingLayer, TSTAnimation, TSTCellRegion, TSTEditingState, TSTLayout, TSTMasterLayout, TSTSearchReference, TSTSelectionDragController, TSTTableCellTextEditingRep, TSTTableInfo, TSTTableModel, TSTTableReferences, TSTTableSelection, TSWPHyperlinkField, TSWPStorage, TSWPTextEditing;

@protocol TSTCanvasReferenceController, TSTTableAnimationController, TSTTableChromeProvider, TSTTableKnobTrackerVisitorProtocol, TSTTableRepDelegate;

@interface TSTTableRep : TSWPTextHostRep

{
    struct CGRect mCanvasVisibleRect;
    struct CGRect mSearchSelectionBounds;
    TSDTilingLayer *mOverlayTableName;
    TSDTilingLayer *mOverlayFrozenHeaderCorner;
    TSDTilingLayer *mOverlayFrozenHeaderRows;
    TSDTilingLayer *mOverlayFrozenHeaderColumns;
    CALayer *mOverlayFrozenHeaderRowsMask;
    CALayer *mOverlayFrozenHeaderColumnsMask;
    CALayer *mOverlayFrozenHeaderTableBodyMask;
    CALayer *mOverlayFrozenHeaderTableNameMask;
    double mCurrentScreenScale;
    CDStruct_5f1f7aa9 mDirtyCellRange;
    _Bool mRecursivelyDrawingInContext;
    NSMutableArray *mAnimationStack;
    id <TSTTableAnimationController> mAnimationController;
    TSTTableCellTextEditingRep *mContainedTextEditingRep;
    TSWPTextEditing *mTableNameTextEditing;
    CDStruct_0441cfb5 mControlCellID;
    CDStruct_0441cfb5 mRatingsDragCellID;
    id <TSTTableChromeProvider> mTableChrome;
    TSTTableReferences *mReferences;
    CAShapeLayer *mHighlightedHyperlinkLayer;
    _Bool mIsAspectOperationInProgress;
    _Bool mIsZoomOperationInProgress;
    _Bool mIsZoomToEditOperationInProgress;
    CDStruct_5f1f7aa9 mZoomToEditVisibleCellRange;
    CAShapeLayer *mFindSelectionHighlightLayer;
    TSTTableSelection *mSourceFillSelection;
    TSTTableSelection *mTargetFillSelection;
    _Bool mWPEndedTableNameEditing;
    _Bool _settingSelection;
    TSTSelectionDragController *mCellDragController;
    _Bool mDragByHandleOnly;
    _Bool mSelectionUsesBezierPath;
    _Bool mSelectsCellOnInitialTap;
    _Bool mUsesWholeChromeResizer;
    id <TSTCanvasReferenceController> mCanvasReferenceController;
    id <TSTTableRepDelegate> mDelegate;
    TSDKnobTracker<TSTTableKnobTrackerVisitorProtocol> *mVisitorKnobTracker;
    NSSet *mVisibleFillKnobs;
    CDStruct_0441cfb5 mEditingHyperlinkCellID;
    TSWPStorage *mHyperlinkParentStorage;
    _Bool mHyperlinkModified;
    _Bool mInspectingHyperlinkInEditingStorage;
    TSWPHyperlinkField *mHyperlinkField;
    CAShapeLayer *mCellEditingMaskLayer;
}

@property (nonatomic) TSTSelectionDragController *cellDragController;
@property (nonatomic) CDStruct_0441cfb5 ratingsDragCellID;
@property (retain, nonatomic) TSTSearchReference *activeSearchReference;
@property (nonatomic, readonly) TSTTableInfo *tableInfo;
@property (nonatomic, readonly) TSTTableModel *tableModel;
@property (nonatomic, readonly) TSTEditingState *editingState;
@property (nonatomic, readonly) TSTLayout *tableLayout;
@property (nonatomic, readonly) TSTMasterLayout *masterLayout;
@property (nonatomic) id <TSTTableAnimationController> animationController;
@property (nonatomic, readonly) id <TSTTableRepDelegate> delegate;
@property (nonatomic, readonly) struct CGAffineTransform transformToCanvas;
@property (nonatomic, readonly) struct CGAffineTransform transformFromCanvas;
@property (nonatomic, readonly) struct CGRect canvasVisibleRect;
@property (nonatomic, readonly) TSDCanvasView *canvasView;
@property (nonatomic, readonly) TSDEditorController *editorController;
@property (nonatomic, readonly) id <TSTTableChromeProvider> tableChrome;
@property (nonatomic, readonly) id <TSTCanvasReferenceController> canvasReferenceController;
@property (nonatomic, readonly) TSTCellRegion *selectionRegion;
@property (nonatomic, readonly) CALayer *layerForRep;
@property (nonatomic, readonly) TSDKnobTracker<TSTTableKnobTrackerVisitorProtocol> *visitorKnobTracker;
@property (nonatomic, readonly) _Bool isZoomToEditOperationInProgress;
@property (nonatomic, readonly) TSTAnimation *currentAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)tableRepDelegateClass;

- (void)dealloc;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)setNeedsDisplay;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)willBeRemoved;
- (int)tilingMode;
- (_Bool)isDraggable;
- (void)orientationDidChange:(id)arg1;
- (void)screenScaleDidChange;
- (void)invalidateSelection;
- (void)viewScaleDidChange;
- (struct CGPath *)newPathForSearchReference:(id)arg1;
- (id)imageForSearchReference:(id)arg1 forPath:(struct CGPath *)arg2 shouldPulsate:(_Bool)arg3;
- (void)addAdditionalChildLayersToArray:(id)arg1;
- (void)invalidateComments;
- (id)hitRep:(struct CGPoint)arg1;
- (_Bool)canDrawTilingLayerInBackground:(id)arg1;
- (_Bool)mustDrawOnMainThreadForInteractiveCanvas;
- (_Bool)canDrawInBackgroundDuringScroll;
- (id)additionalLayersUnderLayer;
- (id)additionalLayersOverLayer;
- (id)overlayLayers;
- (struct CGRect)layerFrameInScaledCanvas;
- (id)hitRepChrome:(struct CGPoint)arg1;
- (id)repForDragging;
- (void)layoutInRootChangedFrom:(id)arg1 to:(id)arg2 translatedOnly:(_Bool)arg3;
- (void)recursivelyDrawInContext:(struct CGContext *)arg1;
- (_Bool)canDrawInParallel;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (void)updateChildrenFromLayout;
- (void)updateFromLayout;
- (void)invalidateAnnotationColor;
- (_Bool)handlesEditMenu;
- (struct CGRect)boundsForResizeGuideUI;
- (void)p_hideSelectionLayers;
- (void)invalidateTableName;
- (id)editorSelection;
- (void)contentsRectForCellRangeAcrossSpaces:(CDStruct_5f1f7aa9)arg1 contentsCenterInfo:(CDStruct_7bd98050 *)arg2 canvasFrame:(struct CGRect *)arg3 contentsRect:(struct CGRect *)arg4;
- (struct CGRect)deviceBoundsForCellRange:(CDStruct_5f1f7aa9)arg1;
- (void)validateVisibleRect;
- (void)dirtyCellRange:(CDStruct_5f1f7aa9)arg1;
- (void)setNeedsDisplayInCellRange:(CDStruct_5f1f7aa9)arg1;
- (id)p_frozenHeaderOverlayLayers;
- (void)validateTableName;
- (void)validateFrozenHeaderCorner;
- (void)validateFrozenHeaderRows;
- (void)validateFrozenHeaderColumns;
- (void)validateFrozenHeaderTableBodyMask;
- (void)invalidateCellRange:(CDStruct_5f1f7aa9)arg1 fittingRange:(CDStruct_5f1f7aa9)arg2 invalidateSize:(_Bool)arg3;
- (void)p_invalidateCellCommentBadges;
- (id)p_tableNameOverlayLayers;
- (struct CGRect)p_alignedLayerFrameForLayoutSpace:(id)arg1 transform:(struct CGAffineTransform)arg2;
- (void)pushAnimation:(id)arg1;
- (void)popAnimation;
- (id)p_textImageForPath:(struct CGPath *)arg1 shouldPulsate:(_Bool)arg2;
- (id)newCommandToApplyGeometry:(id)arg1 toInfo:(id)arg2;
- (_Bool)shouldRestartTextEditing;
- (_Bool)shouldCommitPendingTextEdit;
- (void)asyncPostTextChangedInRange:(CDStruct_5f1f7aa9)arg1 strokeRange:(CDStruct_5f1f7aa9)arg2;
- (void)invalidateEditingCell;
- (struct CGRect)canvasBoundsForCellRange:(CDStruct_5f1f7aa9)arg1;
- (struct CGRect)boundsForCellSelection:(CDStruct_0441cfb5)arg1;
- (void)validateStrokesInEditingSpillingTextRange;
- (_Bool)isFullyVisibleWithBorder:(int)arg1;
- (void)updateDynamicModeForEditingSpillText;
- (void)invalidateCellRange:(CDStruct_5f1f7aa9)arg1;
- (void)invalidateFrozenHeaders;
- (void)beginDragInsertFromPalette;
- (void)endDragInsertFromPalette;
- (struct CGPath *)p_newPathForSearchReference:(id)arg1;
- (void)p_editingDidEnd;

@end

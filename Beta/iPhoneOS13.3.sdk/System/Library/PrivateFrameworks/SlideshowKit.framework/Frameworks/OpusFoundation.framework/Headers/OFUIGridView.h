/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
 */

#import <OpusFoundation/OFUIScrollView.h>

@class NSMutableArray, NSString, OFUIGridViewCell, OFUIGridViewController, UIPinchGestureRecognizer;

@protocol OFUIGridViewDataSource, OFUIGridViewDelegate, OFUIWindowDraggingSource><OFUIGridViewDragging;

@interface OFUIGridView : OFUIScrollView

{
    OFUIGridViewController *_gridViewController;
    unsigned long long _orientation;
    struct CGSize _cellSize;
    struct CGSize _minCellSize;
    struct CGSize _maxCellSize;
    struct UIEdgeInsets _borderInset;
    unsigned long long _numberOfCellsPerRow;
    double _minimumCellSpacePadding;
    double _cellSpacePadding;
    id <OFUIGridViewDataSource> _dataSource;
    id <OFUIGridViewDelegate> _gridViewDelegate;
    unsigned long long _numberOfCells;
    unsigned long long _numberOfCachedPages;
    unsigned long long _visibleIndexBegin;
    unsigned long long _visibleIndexEnd;
    NSMutableArray *_displayedCells;
    NSMutableArray *_recycledCells;
    _Bool _dirtyLayout;
    _Bool _editing;
    id <OFUIWindowDraggingSource><OFUIGridViewDragging> _draggingSource;
    long long _draggingDestinationIndex;
    long long _draggingDestinationCount;
    _Bool _isDraggingIn;
    UIPinchGestureRecognizer *_liveResizingPinchGestureRecognizer;
    _Bool _allowLiveResizing;
    _Bool _isLiveResizing;
    struct CGSize _cellSizeBeforeLiveResizing;
    _Bool _allowAutoscroll;
    _Bool _allowFastPanning;
    struct CGPoint _fastPanningLastTranslation;
    _Bool _isFastPanning;
    _Bool _allowSelectAll;
    _Bool _allowContinuousSelection;
    double _percentageScrolledToRestore;
    _Bool _canUpdateCells;
    OFUIGridViewCell *_lastCellUpdatedForMerge;
}

@property (nonatomic) _Bool isLiveResizing;
@property (nonatomic) long long draggingDestinationIndex;
@property (nonatomic) _Bool isFastPanning;
@property (nonatomic) OFUIGridViewController *gridViewController;
@property (nonatomic, readonly) unsigned long long numberOfCells;
@property (nonatomic) double percentageScrolledToRestore;
@property (nonatomic) _Bool canUpdateCells;
@property (nonatomic) unsigned long long orientation;
@property (nonatomic) struct CGSize cellSize;
@property (nonatomic) struct CGSize minCellSize;
@property (nonatomic) struct CGSize maxCellSize;
@property (nonatomic) struct UIEdgeInsets borderInset;
@property (nonatomic) double minimumCellSpacePadding;
@property (nonatomic) unsigned long long numberOfCachedPages;
@property (nonatomic) id <OFUIGridViewDataSource> dataSource;
@property (nonatomic) id <OFUIGridViewDelegate> gridViewDelegate;
@property (nonatomic, getter=isEditing) _Bool editing;
@property (nonatomic) id <OFUIWindowDraggingSource><OFUIGridViewDragging> draggingSource;
@property (nonatomic) long long draggingDestinationCount;
@property (nonatomic, readonly) _Bool isDraggingIn;
@property (nonatomic) _Bool allowLiveResizing;
@property (nonatomic) _Bool allowAutoscroll;
@property (nonatomic) _Bool allowFastPanning;
@property (nonatomic) _Bool allowSelectAll;
@property (nonatomic) _Bool allowContinuousSelection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)commonInit;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)reloadData;
- (void)handlePan:(id)arg1;
- (id)dequeueReusableCellWithIdentifier:(id)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (id)visibleCells;
- (void)_updateContentSize;
- (void)_layoutSubviews;
- (void)forceLayout;
- (id)cellAtIndex:(unsigned long long)arg1;
- (void)_updateCells;
- (struct CGPoint)draggingSource:(id)arg1 badgeCenterForItem:(id)arg2;
- (struct CGRect)draggingSource:(id)arg1 originalFrameForItem:(id)arg2;
- (void)draggingSource:(id)arg1 prepareItem:(id)arg2;
- (void)draggingSource:(id)arg1 cleanupItem:(id)arg2;
- (struct CGRect)draggingDestination:(id)arg1 originalFrameForItem:(id)arg2;
- (unsigned long long)draggingDestinationEntered:(id)arg1;
- (unsigned long long)draggingDestinationUpdated:(id)arg1;
- (void)draggingDestinationExited:(id)arg1;
- (_Bool)prepareForDragOperation:(id)arg1;
- (_Bool)performDragOperation:(id)arg1;
- (void)concludeDragOperation:(id)arg1;
- (void)draggingDestinationEnded:(id)arg1 cancelled:(_Bool)arg2;
- (float)autoscrollDistance:(struct CGRect)arg1;
- (void)autoscroll:(float)arg1;
- (_Bool)canAutoscroll;
- (void)prepareForUnloading;
- (void)updateLayout:(_Bool)arg1;
- (id)displayedCells;
- (_Bool)isCellVisible:(id)arg1;
- (void)handleLiveResizingPinchGesture:(id)arg1;
- (void)cleanupDisplayedCells;
- (struct CGPoint)_cellPositionAtIndex:(long long)arg1;
- (struct CGSize)_cellSizeAtIndex:(long long)arg1;
- (struct CGSize)_bestContentSize;
- (long long)_indexAtPosition:(struct CGPoint)arg1;
- (struct _NSRange)_displayedCellsRange;
- (id)indexesForDisplayedCells;
- (_Bool)isFrameVisible:(struct CGRect)arg1;
- (id)displayedCellWithItem:(id)arg1;
- (void)deleteCellsAtIndexes:(id)arg1 animated:(_Bool)arg2;
- (_Bool)isFrameEntirelyVisible:(struct CGRect)arg1;
- (void)insertCellsAtIndexes:(id)arg1 animated:(_Bool)arg2;
- (float)_autoscrollDistanceForProximityToEdge:(float)arg1;
- (id)indexesForVisibleCells;
- (void)moveCellsAtIndexes:(id)arg1 toIndexes:(id)arg2 animated:(_Bool)arg3;

@end

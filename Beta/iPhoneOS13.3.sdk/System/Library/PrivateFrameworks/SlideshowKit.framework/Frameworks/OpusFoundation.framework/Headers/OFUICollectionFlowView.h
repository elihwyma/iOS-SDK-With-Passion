/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
 */

#import <UICollectionView.h>

@class NSIndexPath, NSMutableArray, NSString;

@protocol OFUICollectionFlowViewDragging;

@interface OFUICollectionFlowView : UICollectionView

{
    id <OFUICollectionFlowViewDragging> _draggingDelegate;
    NSMutableArray *_draggingPasteboardTypes;
    _Bool _isDragging;
    _Bool _isAnimating;
    NSIndexPath *_draggingSelectionIndexPath;
    NSIndexPath *_draggingEmptyIndexPath;
    float _mergeRectInset;
}

@property (retain, nonatomic) NSIndexPath *draggingSelectionIndexPath;
@property (nonatomic) id <OFUICollectionFlowViewDragging> draggingDelegate;
@property (retain, nonatomic) NSIndexPath *draggingEmptyIndexPath;
@property (nonatomic) float mergeRectInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)registerDraggingPasteboardType:(id)arg1;
- (void)unregisterAllDraggingPasteboardType;
- (id)draggingPasteboardTypes;
- (struct CGRect)draggingDestination:(id)arg1 originalFrameForItem:(id)arg2;
- (unsigned long long)draggingDestinationEntered:(id)arg1;
- (unsigned long long)draggingDestinationUpdated:(id)arg1;
- (void)draggingDestinationExited:(id)arg1;
- (_Bool)prepareForDragOperation:(id)arg1;
- (_Bool)performDragOperation:(id)arg1;
- (void)concludeDragOperation:(id)arg1;
- (void)draggingDestinationWillEnd:(id)arg1 cancelled:(_Bool)arg2;
- (void)draggingDestinationEnded:(id)arg1 cancelled:(_Bool)arg2;
- (float)autoscrollDistance:(struct CGRect)arg1;
- (void)autoscroll:(float)arg1;
- (_Bool)canAutoscroll;
- (_Bool)isFrameVisible:(struct CGRect)arg1;
- (float)_autoscrollDistanceForProximityToEdge:(float)arg1;
- (void)setDraggingEmptyIndexPath:(id)arg1 session:(id)arg2;
- (void)_prepareDragging:(id)arg1;
- (void)_cleanupDragging:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewFlowLayout:(id)arg2;
- (_Bool)_isFrameEntirelyVisible:(struct CGRect)arg1;

@end

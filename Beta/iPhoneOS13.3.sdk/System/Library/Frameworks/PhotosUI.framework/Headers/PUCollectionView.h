/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UICollectionView.h>

@class NSIndexPath, NSString, PXUIAutoScroller, UILongPressGestureRecognizer, UIView, _UIDragSnappingFeedbackGenerator;

@protocol PUCollectionViewReorderDelegate, PUCollectionViewSelectionDelegate;

__attribute__((visibility("hidden")))
@interface PUCollectionView : UICollectionView

{
    UILongPressGestureRecognizer *_dragGestureRecognizer;
    NSIndexPath *_dragSourceIndexPath;
    NSIndexPath *_dragTargetIndexPath;
    UIView *_draggedView;
    struct CGPoint _draggedViewCenterOffset;
    PXUIAutoScroller *_autoScroller;
    _Bool _shouldWorkaround34630932;
    id <PUCollectionViewReorderDelegate> _reorderDelegate;
    id <PUCollectionViewSelectionDelegate> _selectionDelegate;
    _UIDragSnappingFeedbackGenerator *__feedbackDragBehavior;
}

@property (nonatomic, readonly) _UIDragSnappingFeedbackGenerator *_feedbackDragBehavior;
@property (weak, nonatomic) id <PUCollectionViewReorderDelegate> reorderDelegate;
@property (weak, nonatomic) id <PUCollectionViewSelectionDelegate> selectionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_reuseKeyForSupplementaryViewOfKind:(id)arg1 withReuseIdentifier:(id)arg2;

- (void)dealloc;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)reloadData;
- (void)insertItemsAtIndexPaths:(id)arg1;
- (void)deleteItemsAtIndexPaths:(id)arg1;
- (void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;
- (id)indexPathsForSelectedItems;
- (void)adjustedContentInsetDidChange;
- (void)_applyAutomaticAdjustedContentOffset:(struct CGPoint)arg1;
- (void)didScrollToInitialPosition;
- (void)_handleDrag:(id)arg1;
- (id)_reorderableLayout;
- (void)_updateDragUsingIndexPathUpdateBlock:(CDUnknownBlockType)arg1;
- (void)visiblyInsertItemAtIndexPath:(id)arg1 modelUpdate:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSIndexPath, NSSet, NSString, PXUIAutoScroller, UIGestureRecognizer, UIScrollView;

@protocol PXPeopleSwipeSelectionManagerDelegate;

@interface PXPeopleSwipeSelectionManager : NSObject

{
    CDStruct_0794f076 _needsUpdateFlags;
    struct {
        _Bool respondsToItemIndexPathAtLocation;
        _Bool respondsToItemIndexPathClosestLeadingLocation;
        _Bool respondsToItemIndexPathClosestAboveLocation;
    } _delegateFlags;
    id <PXPeopleSwipeSelectionManagerDelegate> _delegate;
    unsigned long long _state;
    UIScrollView *_scrollView;
    UIGestureRecognizer *_swipeGestureRecognizer;
    NSIndexPath *_startingIndexPath;
    NSIndexPath *_currentIndexPath;
    NSSet *_selectedIndexPathsBeforeSwipe;
    id _pausingChangesToken;
    PXUIAutoScroller *_autoScroller;
}

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSIndexPath *startingIndexPath;
@property (retain, nonatomic) NSIndexPath *currentIndexPath;
@property (copy, nonatomic) NSSet *selectedIndexPathsBeforeSwipe;
@property (retain, nonatomic) id pausingChangesToken;
@property (nonatomic, readonly) PXUIAutoScroller *autoScroller;
@property (nonatomic, readonly) _Bool isSelecting;
@property (weak, nonatomic) id <PXPeopleSwipeSelectionManagerDelegate> delegate;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (nonatomic, readonly) UIGestureRecognizer *swipeGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)initWithScrollView:(id)arg1;
- (void)autoScroller:(id)arg1 didAutoscrollWithTimestamp:(double)arg2;
- (id)_itemIndexPathAtLocation:(struct CGPoint)arg1;
- (id)_itemIndexPathClosestLeadingLocation:(struct CGPoint)arg1;
- (id)_itemIndexPathClosestAboveLocation:(struct CGPoint)arg1;
- (void)_handleSwipeSelectionGesture:(id)arg1;
- (void)_beginSelectionFromIndexPath:(id)arg1;
- (void)_updateSelectionWithHitIndexPath:(id)arg1 leadingClosestIndexPath:(id)arg2 aboveClosestIndexPath:(id)arg3;
- (void)_endSelection;
- (void)_invalidateSelectedIndexPaths;
- (void)_updateSelectedIndexPaths;

@end

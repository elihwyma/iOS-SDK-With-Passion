/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PXIndexPathSet, PXSectionedSelectionManager, PXUIAutoScroller, UIMultiSelectInteraction, UIScrollView;

@protocol PXSwipeSelectionManagerDelegate;

@interface PXSwipeSelectionManager : NSObject <Swift>

{
    CDStruct_0794f076 _needsUpdateFlags;
    struct {
        _Bool respondsToItemIndexPathAtLocation;
        _Bool respondsToItemIndexPathClosestLeadingLocation;
        _Bool respondsToItemIndexPathClosestAboveLocation;
        _Bool respondsToShouldSelectItemAtIndexPath;
        _Bool respondsToShouldBeginSelectionAtLocation;
        _Bool respondsToShouldAutomaticallyTransitionToMultiSelectModeAtPoint;
        _Bool respondsToAutomaticallyTransitionToMultiSelectMode;
        _Bool respondsToIndexPathSetFromIndexPathToIndexPath;
        _Bool respondsToDidAutoScroll;
    } _delegateFlags;
    id <PXSwipeSelectionManagerDelegate> _delegate;
    unsigned long long _state;
    UIScrollView *_scrollView;
    PXSectionedSelectionManager *_selectionManager;
    UIMultiSelectInteraction *_multiSelectInteraction;
    unsigned long long __currentDataSourceIdentifier;
    PXIndexPathSet *__selectedIndexPathsBeforeSwipe;
    id __pausingChangesToken;
    PXUIAutoScroller *__autoScroller;
    struct PXSimpleIndexPath __startingIndexPath;
    struct PXSimpleIndexPath __currentIndexPath;
}

@property (nonatomic, setter=_setState:) unsigned long long state;
@property (nonatomic, setter=_setCurrentDataSourceIdentifier:) unsigned long long _currentDataSourceIdentifier;
@property (nonatomic, setter=_setStartingIndexPath:) struct PXSimpleIndexPath _startingIndexPath;
@property (nonatomic, setter=_setCurrentIndexPath:) struct PXSimpleIndexPath _currentIndexPath;
@property (retain, nonatomic, setter=_setSelectedIndexPathsBeforeSwipe:) PXIndexPathSet *_selectedIndexPathsBeforeSwipe;
@property (retain, nonatomic, setter=_setPausingChangesToken:) id _pausingChangesToken;
@property (nonatomic, readonly) PXUIAutoScroller *_autoScroller;
@property (weak, nonatomic) id <PXSwipeSelectionManagerDelegate> delegate;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (nonatomic, readonly) PXSectionedSelectionManager *selectionManager;
@property (nonatomic, readonly) UIMultiSelectInteraction *multiSelectInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)supportsMultiSelectInteraction:(id)arg1;
- (_Bool)isInMultiSelectMode;
- (void)automaticallyTransitionToMultiSelectModeKeepingCurrentSelection:(_Bool)arg1;
- (_Bool)interaction:(id)arg1 shouldAutomaticallyTransitionToMultiSelectModeAtPoint:(struct CGPoint)arg2 withVelocity:(struct CGPoint)arg3;
- (void)willBeginMultiSelectInteraction:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)multiSelectInteraction:(id)arg1 toggleSelectionStateUpToPoint:(struct CGPoint)arg2;
- (_Bool)shouldAllowSelectionExtensionAtPoint:(struct CGPoint)arg1;
- (void)multiSelectInteraction:(id)arg1 appendSelectionAtPoint:(struct CGPoint)arg2;
- (void)didEndMultiSelectInteraction:(id)arg1 atPoint:(struct CGPoint)arg2;
- (_Bool)interaction:(id)arg1 shouldAutomaticallyTransitionToMultiSelectModeAtPoint:(struct CGPoint)arg2;
- (_Bool)shouldBeginMultiSelectInteraction:(id)arg1 atPoint:(struct CGPoint)arg2 withVelocity:(struct CGPoint)arg3;
- (_Bool)_isSelecting;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)sectionedDataSourceManagerInterestingObjectReferences:(id)arg1;
- (void)autoScroller:(id)arg1 didAutoscrollWithTimestamp:(double)arg2;
- (struct PXSimpleIndexPath)_itemIndexPathAtLocation:(struct CGPoint)arg1;
- (struct PXSimpleIndexPath)_itemIndexPathClosestLeadingLocation:(struct CGPoint)arg1;
- (struct PXSimpleIndexPath)_itemIndexPathClosestAboveLocation:(struct CGPoint)arg1;
- (void)_beginSelectionFromIndexPath:(struct PXSimpleIndexPath)arg1;
- (void)_updateSelectionWithHitIndexPath:(struct PXSimpleIndexPath)arg1 leadingClosestIndexPath:(struct PXSimpleIndexPath)arg2 aboveClosestIndexPath:(struct PXSimpleIndexPath)arg3;
- (void)_endSelection;
- (void)_invalidateSelectedIndexPaths;
- (void)_updateSelectedIndexPaths;
- (id)initWithSelectionManager:(id)arg1 scrollView:(id)arg2;
- (void)_updateWithDataSource:(id)arg1 changeHistory:(id)arg2;
- (_Bool)_shouldBeginMultiSelectAtLocation:(struct CGPoint)arg1;

@end

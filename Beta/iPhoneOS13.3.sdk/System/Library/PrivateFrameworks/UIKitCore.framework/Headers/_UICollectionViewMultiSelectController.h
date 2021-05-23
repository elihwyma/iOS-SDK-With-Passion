/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UICollectionView, UIMultiSelectInteraction, UIMultiSelectInteractionState;

__attribute__((visibility("hidden")))
@interface _UICollectionViewMultiSelectController : NSObject

{
    unsigned long long _computedAxisConstraint;
    UICollectionView *_collectionView;
    UIMultiSelectInteraction *_multiSelectInteraction;
    UIMultiSelectInteractionState *_selectionState;
}

@property (weak, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIMultiSelectInteraction *multiSelectInteraction;
@property (retain, nonatomic) UIMultiSelectInteractionState *selectionState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithCollectionView:(id)arg1;
- (void)selectedIndexPathsChanged:(id)arg1;
- (_Bool)supportsMultiSelectInteraction:(id)arg1;
- (_Bool)isInMultiSelectMode;
- (void)automaticallyTransitionToMultiSelectModeKeepingCurrentSelection:(_Bool)arg1;
- (_Bool)interaction:(id)arg1 shouldAutomaticallyTransitionToMultiSelectModeAtPoint:(struct CGPoint)arg2 withVelocity:(struct CGPoint)arg3;
- (_Bool)shouldBeginMultiSelectInteraction:(id)arg1 ofType:(long long)arg2 atPoint:(struct CGPoint)arg3 withVelocity:(struct CGPoint)arg4;
- (void)willBeginMultiSelectInteraction:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)multiSelectInteraction:(id)arg1 toggleSelectionStateUpToPoint:(struct CGPoint)arg2;
- (_Bool)shouldAllowSelectionExtensionAtPoint:(struct CGPoint)arg1;
- (void)multiSelectInteraction:(id)arg1 appendSelectionAtPoint:(struct CGPoint)arg2;
- (void)didEndMultiSelectInteraction:(id)arg1 atPoint:(struct CGPoint)arg2;
- (_Bool)multiSelectInteractionGestureShouldPreventDragLiftGesture:(id)arg1;
- (void)didCancelMultiSelectInteraction:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)uninstallFromCollectionView;
- (unsigned long long)axisConstraint;
- (_Bool)_point:(struct CGPoint)arg1 liesBeyondFrame:(struct CGRect)arg2 inDirection:(double)arg3;
- (id)_antecedentIndexPathsForLayoutAttributes:(id)arg1 inDirection:(double)arg2;
- (id)indexPathsBetweenIndexPath:(id)arg1 andIndexPath:(id)arg2;
- (void)updateSelectedIndexPaths:(id)arg1;
- (void)_selectIndexPaths:(id)arg1;
- (void)_deselectIndexPaths:(id)arg1;
- (_Bool)_isUsingTableViewLayout;
- (id)_collectionViewDelegate;
- (_Bool)_shouldBeginInteractionAtPoint:(struct CGPoint)arg1;
- (_Bool)_isPointInsideEditControl:(struct CGPoint)arg1;
- (void)_extendSelectionToPoint:(struct CGPoint)arg1;
- (id)selectionStartIndexPath;
- (id)selectionEndIndexPath;

@end

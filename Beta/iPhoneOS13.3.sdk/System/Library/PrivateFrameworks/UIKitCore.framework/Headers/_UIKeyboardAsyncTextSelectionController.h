/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIKeyboardTextSelectionController.h>

__attribute__((visibility("hidden")))
@interface _UIKeyboardAsyncTextSelectionController : _UIKeyboardTextSelectionController

{
    _Bool _shouldDelayShowSelectionCommands;
}

- (void)showSelectionCommands;
- (void)beginFloatingCursorAtPoint:(struct CGPoint)arg1;
- (void)updateFloatingCursorAtPoint:(struct CGPoint)arg1;
- (void)endFloatingCursor;
- (void)selectTextWithGranularity:(long long)arg1 atPoint:(struct CGPoint)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)showSelectionView;
- (_Bool)cursorPositionIsContainedByRange:(id)arg1;
- (struct CGRect)caretRectForLeftmostSelectedPosition;
- (struct CGRect)caretRectForRightmostSelectedPosition;
- (_Bool)shouldAllowSelectionGestureWithTouchType:(long long)arg1 atPoint:(struct CGPoint)arg2 toProgressToState:(long long)arg3;
- (void)selectPositionAtPoint:(struct CGPoint)arg1 executionContext:(id)arg2;
- (void)selectPositionAtBoundary:(long long)arg1 inDirection:(long long)arg2 relativeToSelection:(id)arg3 executionContext:(id)arg4;
- (void)setRangedSelectionShouldShowGrabbers:(_Bool)arg1;
- (void)selectTextWithGranularity:(long long)arg1 atPoint:(struct CGPoint)arg2 executionContext:(id)arg3;
- (void)beginSelectionWithBaseAtSelectionBoundaryInDirection:(long long)arg1 initialExtentPoint:(struct CGPoint)arg2 executionContext:(id)arg3;
- (void)updateSelectionWithExtentPoint:(struct CGPoint)arg1 executionContext:(id)arg2;
- (void)updateSelectionWithExtentPoint:(struct CGPoint)arg1 withBoundary:(long long)arg2 executionContext:(id)arg3;
- (void)updateSelectionWithExtentAtBoundary:(long long)arg1 inDirection:(long long)arg2 executionContext:(id)arg3;

@end

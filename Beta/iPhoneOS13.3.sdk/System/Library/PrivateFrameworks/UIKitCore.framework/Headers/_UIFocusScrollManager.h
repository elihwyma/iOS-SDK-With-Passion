/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSHashTable, UIScreen, _UIFocusDisplayLinkScrollAnimator;

__attribute__((visibility("hidden")))
@interface _UIFocusScrollManager : NSObject

{
    UIScreen *_screen;
    _UIFocusDisplayLinkScrollAnimator *_scrollAnimator;
    NSHashTable *_activelyScrollingContainers;
}

@property (nonatomic, readonly) _UIFocusDisplayLinkScrollAnimator *scrollAnimator;
@property (nonatomic, readonly) NSHashTable *activelyScrollingContainers;
@property (weak, nonatomic, readonly) UIScreen *screen;

- (_Bool)isScrollingScrollableContainer:(id)arg1;
- (struct CGPoint)contentOffsetForScrollableContainer:(id)arg1 toShowRect:(struct CGRect)arg2 targetOffset:(struct CGPoint)arg3 targetBounds:(struct CGRect)arg4;
- (struct CGPoint)targetContentOffsetForScrollableContainer:(id)arg1;
- (void)cancelScrollingForScrollableContainer:(id)arg1;
- (void)animateOffsetOfScrollableContainer:(id)arg1 toShowFocusItem:(id)arg2;
- (void)performScrollingIfNeededForFocusUpdateInContext:(id)arg1;
- (id)initWithScreen:(id)arg1;
- (struct CGPoint)currentVelocityForScrollableContainer:(id)arg1;
- (struct CGPoint)_contentOffsetForScrollableContainer:(id)arg1 toShowFocusItemWithInfo:(id)arg2;
- (void)_ensureFocusItemIsOnscreen:(id)arg1 inScrollableContainer:(id)arg2;
- (void)_scrollToFocusItemWithInfo:(id)arg1 offset:(struct CGPoint)arg2 inScrollableContainer:(id)arg3;
- (struct CGPoint)_contentOffsetForScrollableContainer:(id)arg1 toShowFocusItemWithInfo:(id)arg2 itemFrame:(struct CGRect)arg3 targetOffset:(struct CGPoint)arg4 targetBounds:(struct CGRect)arg5;
- (struct CGPoint)contentOffsetForScrollableContainer:(id)arg1 toShowFocusItem:(id)arg2 targetOffset:(struct CGPoint)arg3 targetBounds:(struct CGRect)arg4;

@end

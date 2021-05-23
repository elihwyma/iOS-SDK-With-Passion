/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIScrollView.h>

@class UIPageController;

@interface UIPageControllerScrollView : UIScrollView

{
    UIPageController *_pageController;
}

@property (nonatomic) UIPageController *pageController;

- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_scrollViewDidEndDraggingWithDeceleration:(_Bool)arg1;
- (void)_scrollViewWillBeginDragging;
- (void)_scrollViewDidEndDecelerating;
- (void)_scrollViewAnimationEnded:(id)arg1 finished:(_Bool)arg2;
- (unsigned long long)_abuttedPagingEdges;

@end

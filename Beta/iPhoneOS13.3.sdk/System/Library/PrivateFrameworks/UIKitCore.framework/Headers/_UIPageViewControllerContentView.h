/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class UIPageControl, UIPageViewController, _UIQueuingScrollView;

__attribute__((visibility("hidden")))
@interface _UIPageViewControllerContentView : UIView

{
    UIPageViewController *_pageViewController;
    _UIQueuingScrollView *_scrollView;
    UIPageControl *_pageControl;
}

@property (nonatomic, readonly) _UIQueuingScrollView *scrollView;
@property (nonatomic, readonly) UIPageControl *pageControl;

- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)preferredFocusedView;
- (_Bool)canBecomeFocused;
- (void)layoutSubviews;
- (struct CGRect)_scrollViewFrame;
- (double)_pageSpacing;
- (void)_setupPageControl:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 andPageViewController:(id)arg2;
- (void)invalidatePageViewController;

@end

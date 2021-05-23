/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <UIKit/UIScrollView.h>

@class UIView;

@protocol UIScrollViewDelegate><TSKScrollViewDelegate;

@interface TSKScrollView : UIScrollView

{
    unsigned long long mAnimatingContentOffsetCount;
    _Bool _mayPassScrollEventsToNextResponder;
    _Bool _shouldDisableScrollingWhenCursorIsHidden;
    struct CGRect _scrollableAreaBounds;
}

@property (nonatomic) id <UIScrollViewDelegate><TSKScrollViewDelegate> delegate;
@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic, readonly, getter=isScrolling) _Bool scrolling;
@property (nonatomic) _Bool mayPassScrollEventsToNextResponder;
@property (nonatomic) _Bool shouldDisableScrollingWhenCursorIsHidden;
@property (nonatomic, readonly) struct CGRect scrollableAreaBounds;
@property (nonatomic, readonly) struct CGRect tsk_bounds;

- (void)layoutSubviews;
- (void)scrollRectToVisible:(struct CGRect)arg1 animated:(_Bool)arg2;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (struct CGRect)visibleFrame;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (struct CGSize)tsk_contentSize;
- (void)hideScrollIndicators;

@end

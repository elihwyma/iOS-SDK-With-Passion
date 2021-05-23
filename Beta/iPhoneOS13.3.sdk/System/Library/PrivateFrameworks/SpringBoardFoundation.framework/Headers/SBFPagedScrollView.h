/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <BaseBoardUI/BSUIScrollView.h>

@class NSArray;

@interface SBFPagedScrollView : BSUIScrollView

{
    _Bool _changingScrollViewLayout;
    _Bool _gestureEnabled;
    NSArray *_pageViews;
    unsigned long long _currentPageIndex;
    struct _NSRange _visiblePageRange;
}

@property (nonatomic) unsigned long long currentPageIndex;
@property (nonatomic) struct _NSRange visiblePageRange;
@property (copy, nonatomic) NSArray *pageViews;
@property (nonatomic) _Bool gestureEnabled;

- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)layoutSubviews;
- (void)_bs_didScrollWithContext:(CDStruct_3b09cf25)arg1;
- (void)_bs_willBeginScrolling;
- (void)_bs_didEndScrolling;
- (void)_layoutScrollView;
- (void)_updateVisiblePages;
- (void)layoutPages;
- (_Bool)resetContentOffsetToCurrentPage;
- (_Bool)scrollToPageAtIndex:(unsigned long long)arg1 animated:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (struct CGPoint)contentOffsetForPageAtIndex:(unsigned long long)arg1;
- (void)_updateCurrentPageForScrollOffset;
- (double)unclippedPageRelativeScrollOffset;
- (CDStruct_1cce69bb)currentScrollInterval;
- (_Bool)scrollToPageAtIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (_Bool)scrollToPageAtIndex:(unsigned long long)arg1 withAnimationSettings:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (double)pageRelativeScrollOffset;

@end

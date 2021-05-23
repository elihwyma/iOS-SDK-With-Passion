/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSString, NSTimer, UIPageControl, UIScrollView;

__attribute__((visibility("hidden")))
@interface UIKBTutorialMultipageView : UIView <Swift>

{
    UIScrollView *_pageScrollView;
    NSArray *_pageViews;
    UIPageControl *_pageControl;
    NSTimer *_nextPageScrollTimer;
    double _pagingInterval;
}

@property (retain, nonatomic) UIScrollView *pageScrollView;
@property (retain, nonatomic) NSArray *pageViews;
@property (retain, nonatomic) UIPageControl *pageControl;
@property (retain, nonatomic) NSTimer *nextPageScrollTimer;
@property (nonatomic) double pagingInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)layoutSubviews;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollToNextPage;
- (void)configMediaView;
- (id)initWithPageViews:(id)arg1 pagingInterval:(double)arg2;
- (void)resetPageScrolling;

@end

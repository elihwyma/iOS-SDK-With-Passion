/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

#import <AvatarUI/Swift-Protocol.h>

@class NSString, UIScrollView, UIView;

@protocol AVTCollapsibleHeaderControllerDelegate, UIScrollViewDelegate;

@interface AVTCollapsibleHeaderController : NSObject <Swift>

{
    _Bool _shouldResizeHeaderForScrolling;
    _Bool _shouldSnapToMinOrMax;
    _Bool _shouldOnlyExpandWhenScrollingAtEdge;
    _Bool _shouldPushContentOffsetOnExpandOrCollapse;
    _Bool _shouldCollapseOnBottomBounceScroll;
    UIScrollView *_scrollView;
    UIView *_headerView;
    id <AVTCollapsibleHeaderControllerDelegate> _delegate;
    double _minHeight;
    double _maxHeight;
    double _additionalTopContentInset;
    id <UIScrollViewDelegate> _scrollViewDelegate;
    double _scrollToCompressionMultiplier;
    double _expandMarginalScrollDistance;
    double _collapseMarginalScrollDistance;
    double _previousOffset;
    double _singleTouchOffset;
    unsigned long long _currentScrollDirection;
}

@property (weak, nonatomic) id <UIScrollViewDelegate> scrollViewDelegate;
@property (nonatomic) double scrollToCompressionMultiplier;
@property (nonatomic) double expandMarginalScrollDistance;
@property (nonatomic) double collapseMarginalScrollDistance;
@property (nonatomic) _Bool shouldPushContentOffsetOnExpandOrCollapse;
@property (nonatomic) _Bool shouldCollapseOnBottomBounceScroll;
@property (nonatomic) double previousOffset;
@property (nonatomic) double singleTouchOffset;
@property (nonatomic) unsigned long long currentScrollDirection;
@property (nonatomic) double minHeight;
@property (nonatomic) double maxHeight;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (nonatomic, readonly) UIView *headerView;
@property (nonatomic) id <AVTCollapsibleHeaderControllerDelegate> delegate;
@property (nonatomic, readonly) double currentHeightForHeader;
@property (nonatomic) double additionalTopContentInset;
@property (nonatomic) _Bool shouldResizeHeaderForScrolling;
@property (nonatomic) _Bool shouldSnapToMinOrMax;
@property (nonatomic) _Bool shouldOnlyExpandWhenScrollingAtEdge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollToTopAnimated:(_Bool)arg1;
- (struct UIEdgeInsets)updatedScrollViewInsetsFromExistingInsets:(struct UIEdgeInsets)arg1;
- (void)updateInsetsIfNeeded;
- (void)updateHeaderForHeight:(double)arg1 withOffset:(struct CGPoint)arg2 animated:(_Bool)arg3;
- (void)expandAnimated:(_Bool)arg1;
- (void)collapseAnimated:(_Bool)arg1;
- (void)updateHeaderSizeForGlobalHeaderHeight:(double)arg1;
- (struct CGPoint)topContentOffsetWithHeaderHeight:(double)arg1;
- (double)headerHeightForContentOffset:(double)arg1 contentInset:(struct UIEdgeInsets)arg2;
- (_Bool)shouldResizeGivenMarginalScrollDistancesForScrollDirection:(unsigned long long)arg1;
- (_Bool)shouldResizeGivenScrollDirection:(unsigned long long)arg1 currentHeaderHeight:(double)arg2 targetHeaderHeight:(double)arg3;
- (void)updateHeaderHeightToMatchScrollViewStateForScrollDirection:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)snapToMinMaxIfNeededAnimated:(_Bool)arg1;
- (id)initWithScrollView:(id)arg1 headerView:(id)arg2 minHeight:(double)arg3 maxHeight:(double)arg4;
- (void)updateMinHeight:(double)arg1 maxHeight:(double)arg2 animated:(_Bool)arg3;
- (void)expandAnimated:(_Bool)arg1 withFocusRect:(struct CGRect)arg2;
- (void)scrollToTopPreservingHeaderHeight:(_Bool)arg1 animated:(_Bool)arg2;

@end

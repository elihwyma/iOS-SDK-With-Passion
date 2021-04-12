//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIScrollViewScrollObserver-Protocol.h>

@class CASpringAnimation, UIScrollView, UIView;
@protocol _UITVScrollViewManagerDelegate;

__attribute__((visibility("hidden")))
@interface _UITVScrollViewManager : NSObject <_UIScrollViewScrollObserver>
{
    BOOL _delegateScrollViewManagerDidFinishScrolling;
    BOOL _useCustomMaskForScrolling;
    id <_UITVScrollViewManagerDelegate> _delegate;
    UIScrollView *_scrollView;
    long long _scrollStyle;
    CASpringAnimation *_scrollAnimation;
    UIView *_snapshotViewForWindow;
    CGPoint _targetOffset;
}

@property(nonatomic) CGPoint targetOffset; // @synthesize targetOffset=_targetOffset;
@property(nonatomic) BOOL useCustomMaskForScrolling; // @synthesize useCustomMaskForScrolling=_useCustomMaskForScrolling;
@property(retain, nonatomic) UIView *snapshotViewForWindow; // @synthesize snapshotViewForWindow=_snapshotViewForWindow;
@property(retain, nonatomic) CASpringAnimation *scrollAnimation; // @synthesize scrollAnimation=_scrollAnimation;
@property(nonatomic) long long scrollStyle; // @synthesize scrollStyle=_scrollStyle;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <_UITVScrollViewManagerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_observeScrollViewDidScroll:(id)arg1;
- (id)_customScrollViewMaskForScrolling:(CGRect)arg1;
- (void)_removeScreenshotViewIfNeeded;
- (void)_scrollToContentOffset:(CGPoint)arg1;
- (long long)_currentPage;
- (void)_scrollAnimationDidEnd:(id)arg1;
- (void)_tearDown;
- (void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2;
- (void)dealloc;
- (id)initWithScrollView:(id)arg1 scrollStyle:(long long)arg2;

@end


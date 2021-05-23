/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class CASpringAnimation, NSString, UIScrollView, UIView;

@protocol _UITVScrollViewManagerDelegate;

__attribute__((visibility("hidden")))
@interface _UITVScrollViewManager : NSObject <Swift>

{
    _Bool _delegateScrollViewManagerDidFinishScrolling;
    _Bool _useCustomMaskForScrolling;
    id <_UITVScrollViewManagerDelegate> _delegate;
    UIScrollView *_scrollView;
    long long _scrollStyle;
    CASpringAnimation *_scrollAnimation;
    UIView *_snapshotViewForWindow;
    struct CGPoint _targetOffset;
}

@property (weak, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) CASpringAnimation *scrollAnimation;
@property (nonatomic) long long scrollStyle;
@property (retain, nonatomic) UIView *snapshotViewForWindow;
@property (nonatomic) _Bool useCustomMaskForScrolling;
@property (nonatomic) struct CGPoint targetOffset;
@property (weak, nonatomic) id <_UITVScrollViewManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)_tearDown;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)_observeScrollViewDidScroll:(id)arg1;
- (long long)_currentPage;
- (void)_scrollAnimationDidEnd:(id)arg1;
- (void)_scrollToContentOffset:(struct CGPoint)arg1;
- (void)_removeScreenshotViewIfNeeded;
- (id)_customScrollViewMaskForScrolling:(struct CGRect)arg1;
- (id)initWithScrollView:(id)arg1 scrollStyle:(long long)arg2;

@end

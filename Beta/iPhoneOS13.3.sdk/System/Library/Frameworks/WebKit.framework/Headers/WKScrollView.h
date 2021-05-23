/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <UIKit/UIScrollView.h>

@class WKScrollViewDelegateForwarder, WKWebView;

@protocol UIScrollViewDelegate;

__attribute__((visibility("hidden")))
@interface WKScrollView : UIScrollView

{
    struct WeakObjCPtr<id<UIScrollViewDelegate>> _externalDelegate;
    WKScrollViewDelegateForwarder *_delegateForwarder;
    _Bool _contentInsetAdjustmentBehaviorWasExternallyOverridden;
    double _keyboardBottomInsetAdjustment;
    _Bool _scrollEnabledByClient;
    _Bool _scrollEnabledInternal;
    _Bool _zoomEnabledByClient;
    _Bool _zoomEnabledInternal;
    WKWebView<UIScrollViewDelegate> *_internalDelegate;
}

@property (nonatomic) WKWebView<UIScrollViewDelegate> *internalDelegate;
@property (nonatomic, readonly) _Bool _contentInsetAdjustmentBehaviorWasExternallyOverridden;

- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id).cxx_construct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setScrollEnabled:(_Bool)arg1;
- (void)setContentInsetAdjustmentBehavior:(long long)arg1;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)_adjustForAutomaticKeyboardInfo:(id)arg1 animated:(_Bool)arg2 lastAdjustment:(double *)arg3;
- (struct UIEdgeInsets)_systemContentInset;
- (double)_rubberBandOffsetForOffset:(double)arg1 maxOffset:(double)arg2 minOffset:(double)arg3 range:(double)arg4 outside:(_Bool *)arg5;
- (void)setZoomEnabled:(_Bool)arg1;
- (void)_setContentInsetAdjustmentBehaviorInternal:(long long)arg1;
- (void)_setScrollEnabledInternal:(_Bool)arg1;
- (void)_setContentSizePreservingContentOffsetDuringRubberband:(struct CGSize)arg1;
- (void)_setZoomEnabledInternal:(_Bool)arg1;
- (void)_updateDelegate;
- (struct CGSize)_currentTopLeftRubberbandAmount;
- (void)_restoreContentOffsetWithRubberbandAmount:(struct CGSize)arg1;
- (void)_updateScrollability;
- (void)_updateZoomability;

@end

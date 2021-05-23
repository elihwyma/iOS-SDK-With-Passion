/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <WebKit/WKWebView.h>

@class NSString, NSTimer, UIImageView, UIView, _SFDialogView;

@protocol _SFWebViewDelegate;

@interface _SFWebView : WKWebView

{
    _SFDialogView *_dialogView;
    UIImageView *_placeholderView;
    NSTimer *_placeholderViewRemovalTimer;
    double _placeholderOffset;
    long long _navigationGesturePolicy;
    id <_SFWebViewDelegate> _delegate;
    UIView *_clippingView;
    struct UIEdgeInsets _hitTestInsets;
}

@property (copy, nonatomic, readonly) NSString *evOrganizationName;
@property (nonatomic) struct UIEdgeInsets hitTestInsets;
@property (nonatomic) long long navigationGesturePolicy;
@property (weak, nonatomic) id <_SFWebViewDelegate> delegate;
@property (weak, nonatomic) UIView *clippingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)layoutSubviews;
- (_Bool)becomeFirstResponder;
- (void)safeAreaInsetsDidChange;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 configuration:(id)arg2;
- (void)setPlaceholderImage:(id)arg1;
- (void)_close;
- (void)setAllowsBackForwardNavigationGestures:(_Bool)arg1;
- (id)_enclosingViewForExposedRectComputation;
- (void)_setObscuredInsets:(struct UIEdgeInsets)arg1;
- (void)didStartFormControlInteraction;
- (void)didEndFormControlInteraction;
- (void)safariKillWebContentProcessUIActivityKillWebProcess:(id)arg1;
- (int)webProcessIDForDialogController:(id)arg1;
- (void)presentDialogView:(id)arg1 withAdditionalAnimations:(CDUnknownBlockType)arg2 forDialogController:(id)arg3;
- (void)dismissDialogView:(id)arg1 withAdditionalAnimations:(CDUnknownBlockType)arg2 forDialogController:(id)arg3;
- (void)_updateNavigationGesturesAllowed;
- (void)setPlaceholderImage:(id)arg1 offset:(double)arg2;

@end

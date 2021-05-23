/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UIView.h>

@class WKWebView, _SFBrowserToolbar, _SFCrashBanner, _SFLinkPreviewHeader, _SFNavigationBar;

@protocol SFBrowserViewDelegate;

@interface _SFBrowserView : UIView

{
    _Bool _contentReadyForDisplay;
    _Bool _shouldUseScrollToTopView;
    _Bool _hasReceivedTouchEvents;
    UIView *_contentContainerView;
    _SFBrowserToolbar *_toolbar;
    _SFNavigationBar *_navigationBar;
    double _bottomBarOffset;
    double _topBarHeight;
    WKWebView *_currentWebView;
    unsigned long long _navigationBarBehavior;
    _SFLinkPreviewHeader *_previewHeader;
    UIView *_statusBarBackgroundView;
    UIView *_scrollToTopView;
    _SFCrashBanner *_crashBanner;
    double _crashBannerOffset;
    UIView *_quickLookDocumentView;
    double _minimalUITopOffset;
    id <SFBrowserViewDelegate> _delegate;
}

@property (nonatomic, readonly) UIView *contentContainerView;
@property (retain, nonatomic) _SFBrowserToolbar *toolbar;
@property (retain, nonatomic) _SFNavigationBar *navigationBar;
@property (nonatomic) double bottomBarOffset;
@property (nonatomic) double topBarHeight;
@property (weak, nonatomic, readonly) WKWebView *currentWebView;
@property (nonatomic) unsigned long long navigationBarBehavior;
@property (retain, nonatomic) _SFLinkPreviewHeader *previewHeader;
@property (retain, nonatomic) UIView *statusBarBackgroundView;
@property (nonatomic, readonly) UIView *scrollToTopView;
@property (nonatomic) _Bool shouldUseScrollToTopView;
@property (retain, nonatomic) _SFCrashBanner *crashBanner;
@property (nonatomic) double crashBannerOffset;
@property (nonatomic, readonly) _Bool hasReceivedTouchEvents;
@property (retain, nonatomic) UIView *quickLookDocumentView;
@property (nonatomic) double minimalUITopOffset;
@property (weak, nonatomic) id <SFBrowserViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setContentReadyForDisplay;
- (void)updateDismissButtonStyle:(long long)arg1;
- (void)addWebView:(id)arg1;
- (void)updatePreviewHeader;

@end

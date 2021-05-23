/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@class NSString, NUIContainerBoxView, WKWebView;

@interface SearchUIWebCardSectionView

{
    double _contentHeight;
    WKWebView *_webView;
}

@property (retain, nonatomic) NUIContainerBoxView *contentView;
@property (nonatomic) double contentHeight;
@property (retain, nonatomic) WKWebView *webView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (struct CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize)arg2 forArrangedSubview:(id)arg3;
- (id)setupContentView;
- (void)tlk_updateForAppearance:(id)arg1;
- (id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2;
- (id)replaceSemanticColor:(id)arg1 withColor:(id)arg2 inString:(id)arg3;

@end

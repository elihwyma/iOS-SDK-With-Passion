/*
 Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
 */

#import <UIKit/UIViewController.h>

@class NSString, NSURL, WKWebView;

@interface HRWebViewController : UIViewController

{
    NSURL *_fileURL;
    WKWebView *_webView;
    struct UIEdgeInsets _bodyInsets;
}

@property (retain, nonatomic) NSURL *fileURL;
@property (nonatomic) struct UIEdgeInsets bodyInsets;
@property (retain, nonatomic) WKWebView *webView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (id)initWithURL:(id)arg1 bodyInsets:(struct UIEdgeInsets)arg2;
- (void)_adjustWebView:(id)arg1 bodyInsets:(struct UIEdgeInsets)arg2;

@end

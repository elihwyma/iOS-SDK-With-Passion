/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UIViewController.h>

#import <SafariServices/Swift-Protocol.h>

@class NSString, WKWebView, _SFBrowserContentViewController;

__attribute__((visibility("hidden")))
@interface SFReaderViewController : UIViewController <Swift>

{
    WKWebView *_originalWebView;
    _SFBrowserContentViewController *_containerViewController;
}

@property (nonatomic, readonly) WKWebView *readerWebView;
@property (weak, nonatomic) _SFBrowserContentViewController *containerViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (id)_webView:(id)arg1 previewViewControllerForURL:(id)arg2 defaultActions:(id)arg3 elementInfo:(id)arg4;
- (void)_webView:(id)arg1 commitPreviewedViewController:(id)arg2;
- (id)initWithOriginalWebView:(id)arg1;

@end

/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UIApplicationExtensionActivity.h>

@class WKWebView;

@interface _SFDownloadCurrentPageActivity : UIApplicationExtensionActivity

{
    WKWebView *_webView;
}

- (id)initWithWebView:(id)arg1;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (void)prepareWithActivityItems:(id)arg1;
- (void)performActivity;
- (_Bool)_presentActivityOnViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;

@end

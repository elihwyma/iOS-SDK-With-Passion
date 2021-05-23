/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@protocol WKShareSheetDelegate;

__attribute__((visibility("hidden")))
@interface WKShareSheet : NSObject

{
    struct WeakObjCPtr<WKWebView> _webView;
    CompletionHandler_e3f3fa93 _completionHandler;
    struct RetainPtr<UIActivityViewController> _shareSheetViewController;
    struct RetainPtr<UIViewController> _presentationViewController;
    id <WKShareSheetDelegate> _delegate;
}

@property (weak, nonatomic) id <WKShareSheetDelegate> delegate;

- (id).cxx_construct;
- (void)dismiss;
- (id)initWithView:(id)arg1;
- (void)presentWithParameters:(const struct ShareDataWithParsedURL *)arg1 inRect:(Optional_93f3c085)arg2 completionHandler:(CompletionHandler_e3f3fa93 *)arg3;
- (void)_didCompleteWithSuccess:(_Bool)arg1;
- (void)dispatchDidDismiss;

@end

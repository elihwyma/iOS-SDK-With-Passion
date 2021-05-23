/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class WKWebView;

@protocol SFInjectedJavaScriptWebProcessController;

@interface _SFInjectedJavaScriptController : NSObject

{
    WKWebView *_webView;
    id <SFInjectedJavaScriptWebProcessController> _activityProxy;
}

- (id)initWithWebView:(id)arg1;
- (void)runJavaScriptForActivity:(id)arg1 withScript:(id)arg2 object:(id)arg3 invokeMethod:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)_webProcessActivityProxy;

@end

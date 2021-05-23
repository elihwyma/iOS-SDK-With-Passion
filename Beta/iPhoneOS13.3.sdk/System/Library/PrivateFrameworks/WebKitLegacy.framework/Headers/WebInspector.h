/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <Foundation/NSObject.h>

@class WebInspectorFrontend, WebView;

@interface WebInspector : NSObject

{
    WebView *_inspectedWebView;
    WebInspectorFrontend *_frontend;
}

@property (nonatomic, readonly, getter=isOpen) _Bool open;

- (void)dealloc;
- (void)detach:(id)arg1;
- (void)show:(id)arg1;
- (void)close:(id)arg1;
- (void)showWindow;
- (_Bool)isDebuggingJavaScript;
- (_Bool)isTimelineProfilingEnabled;
- (void)setTimelineProfilingEnabled:(_Bool)arg1;
- (id)initWithInspectedWebView:(id)arg1;
- (void)inspectedWebViewClosed;
- (void)showConsole:(id)arg1;
- (void)toggleDebuggingJavaScript:(id)arg1;
- (void)startDebuggingJavaScript:(id)arg1;
- (void)stopDebuggingJavaScript:(id)arg1;
- (_Bool)isProfilingJavaScript;
- (void)toggleProfilingJavaScript:(id)arg1;
- (void)startProfilingJavaScript:(id)arg1;
- (void)stopProfilingJavaScript:(id)arg1;
- (_Bool)isJavaScriptProfilingEnabled;
- (void)setJavaScriptProfilingEnabled:(_Bool)arg1;
- (void)attach:(id)arg1;
- (void)evaluateInFrontend:(id)arg1 script:(id)arg2;
- (void)setFrontend:(id)arg1;
- (void)releaseFrontend;

@end

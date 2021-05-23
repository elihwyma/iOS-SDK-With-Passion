/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSString, WKWebView;

@interface _WKInspector : NSObject

{
    struct ObjectStorage<WebKit::WebInspectorProxy> _inspector;
}

@property (nonatomic, readonly) WKWebView *webView;
@property (nonatomic, readonly) _Bool isConnected;
@property (nonatomic, readonly) _Bool isVisible;
@property (nonatomic, readonly) _Bool isFront;
@property (nonatomic, readonly) _Bool isProfilingPage;
@property (nonatomic, readonly) _Bool isElementSelectionActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) struct Object *_apiObject;

- (void)close;
- (void)connect;
- (void)show;
- (void)hide;
- (void)detach;
- (void)attach;
- (void)showConsole;
- (void)showResources;
- (void)showMainResourceForFrame:(id)arg1;
- (void)showTimelines;
- (void)togglePageProfiling;
- (void)toggleElementSelection;
- (void)printErrorToConsole:(id)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
 */

#import <Foundation/NSObject.h>

@class NSString, WKWebView;

@interface _MFMessageContentViewScriptHandler : NSObject

{
    WKWebView *_webView;
    NSString *_name;
    CDUnknownBlockType _handler;
}

@property (weak, nonatomic) WKWebView *webView;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) CDUnknownBlockType handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;

@end

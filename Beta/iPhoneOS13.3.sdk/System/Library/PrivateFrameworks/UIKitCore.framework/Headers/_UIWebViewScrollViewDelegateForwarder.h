/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UIWebView;

@protocol UIScrollViewDelegate;

__attribute__((visibility("hidden")))
@interface _UIWebViewScrollViewDelegateForwarder : NSObject <Swift>

{
    id <UIScrollViewDelegate> _delegate;
    UIWebView *_webView;
}

@property (nonatomic) id <UIScrollViewDelegate> delegate;
@property (nonatomic) UIWebView *webView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;

@end

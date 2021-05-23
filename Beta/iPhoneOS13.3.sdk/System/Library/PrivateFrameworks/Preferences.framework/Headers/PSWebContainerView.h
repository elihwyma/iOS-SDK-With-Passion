/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <UIKit/UIView.h>

@class NSData, NSString, UIWebView;

@interface PSWebContainerView : UIView

{
    UIWebView *_webView;
    NSData *_content;
}

@property (nonatomic, readonly) UIWebView *webView;
@property (retain, nonatomic) NSData *content;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)layoutSubviews;
- (void)setUserStyleSheet:(id)arg1;
- (_Bool)uiWebView:(id)arg1 previewIsAllowedForPosition:(struct CGPoint)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (double)heightForWidth:(double)arg1;

@end

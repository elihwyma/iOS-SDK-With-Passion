/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIWebScrollView.h>

@class UIWebBrowserView, _UIWebViewScrollViewDelegateForwarder;

__attribute__((visibility("hidden")))
@interface _UIWebViewScrollView : UIWebScrollView

{
    _UIWebViewScrollViewDelegateForwarder *_forwarder;
    _Bool _bouncesSetExplicitly;
    _Bool _contentInsetAdjustmentBehaviorWasExternallyOverridden;
    UIWebBrowserView *_browserView;
}

- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setContentInsetAdjustmentBehavior:(long long)arg1;
- (void)setBounces:(_Bool)arg1;
- (void)setBouncesHorizontally:(_Bool)arg1;
- (void)setBouncesVertically:(_Bool)arg1;
- (void)_weaklySetBouncesHorizontally:(_Bool)arg1;
- (void)_setWebView:(id)arg1;
- (_Bool)_contentInsetAdjustmentBehaviorWasExternallyOverridden;
- (void)_setContentInsetAdjustmentBehaviorInternal:(long long)arg1;

@end

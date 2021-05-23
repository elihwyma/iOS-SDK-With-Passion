/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIResponder.h>

@protocol _UITextServicesResponderProxyDelegate;

__attribute__((visibility("hidden")))
@interface _UITextServicesResponderProxy : UIResponder

{
    UIResponder *_responder;
    id <_UITextServicesResponderProxyDelegate> _delegate;
}

@property (weak, nonatomic, readonly) UIResponder *responder;
@property (weak, nonatomic) id <_UITextServicesResponderProxyDelegate> delegate;

+ (id)_proxyWithResponder:(id)arg1;

- (id)nextResponder;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)_share:(id)arg1;
- (void)_lookup:(id)arg1;
- (void)_define:(id)arg1;
- (void)_addShortcut:(id)arg1;

@end

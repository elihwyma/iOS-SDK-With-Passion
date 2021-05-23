/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIResponder.h>

@protocol _UITextLoupeResponderProxyDelegate;

__attribute__((visibility("hidden")))
@interface _UITextLoupeResponderProxy : UIResponder

{
    UIResponder *_responder;
    id <_UITextLoupeResponderProxyDelegate> _delegate;
}

@property (weak, nonatomic, readonly) UIResponder *responder;
@property (weak, nonatomic) id <_UITextLoupeResponderProxyDelegate> delegate;

+ (id)_proxyWithResponder:(id)arg1;

- (id)nextResponder;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)selectToHere:(id)arg1;

@end

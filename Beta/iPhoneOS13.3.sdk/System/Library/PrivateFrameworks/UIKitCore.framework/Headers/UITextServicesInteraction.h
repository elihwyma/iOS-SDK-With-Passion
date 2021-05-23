/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITextInteraction.h>

@class UIResponder, _UITextServiceSession, _UITextServicesResponderProxy;

__attribute__((visibility("hidden")))
@interface UITextServicesInteraction : UITextInteraction

{
    _UITextServiceSession *_definitionSession;
    _UITextServiceSession *_learnSession;
    _UITextServiceSession *_shareSession;
    _UITextServiceSession *_lookupSession;
    _UITextServicesResponderProxy *_responderProxy;
}

@property (retain, nonatomic) _UITextServicesResponderProxy *responderProxy;
@property (nonatomic, readonly) UIResponder *responder;

- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)_share:(id)arg1;
- (void)_define:(id)arg1;
- (void)_addShortcut:(id)arg1;
- (void)finishSetup;
- (void)_beginSessionWithType:(long long)arg1 sender:(id)arg2;
- (void)_removeShareController;
- (void)_removeShortcutController;

@end

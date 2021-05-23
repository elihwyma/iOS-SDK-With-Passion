/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <TextInput/TIKeyboardInputManagerStub.h>

@class NSString, _UIInputViewControllerState;

@protocol _UIIVCInterface, _UIIVCResponseDelegate;

__attribute__((visibility("hidden")))
@interface UIInputViewControllerInterface : TIKeyboardInputManagerStub

{
    id <_UIIVCResponseDelegate> _responseDelegate;
    id <_UIIVCInterface> _forwardingInterface;
    _UIInputViewControllerState *_cachedState;
}

@property (retain, nonatomic, getter=_cachedState, setter=_setCachedState:) _UIInputViewControllerState *cachedState;
@property (retain, nonatomic) id <_UIIVCInterface> forwardingInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) id <_UIIVCResponseDelegate> responseDelegate;

- (id)init;
- (void)dealloc;
- (void)_tearDownRemoteService;
- (void)_handleInputViewControllerState:(id)arg1;
- (void)syncToKeyboardState:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

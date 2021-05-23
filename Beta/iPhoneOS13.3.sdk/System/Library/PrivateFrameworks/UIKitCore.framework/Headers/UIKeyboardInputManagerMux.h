/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol TIKeyboardInputManager, _UIIVCResponseDelegateImpl;

__attribute__((visibility("hidden")))
@interface UIKeyboardInputManagerMux : NSObject

{
    NSMutableArray *_clients;
    id <_UIIVCResponseDelegateImpl> _responseDelegate;
    id <TIKeyboardInputManager> _systemInputManager;
}

@property (retain, nonatomic) id <TIKeyboardInputManager> systemInputManager;
@property (nonatomic, readonly) _Bool hasSystemInputManager;
@property (retain, nonatomic) id <_UIIVCResponseDelegateImpl> responseDelegate;

+ (_Bool)instancesRespondToSelector:(SEL)arg1;
+ (id)sharedInstance;

- (void)dealloc;
- (_Bool)isKindOfClass:(Class)arg1;
- (_Bool)conformsToProtocol:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)addClient:(id)arg1;
- (void)removeClient:(id)arg1;
- (void)setSystemInputManagerFromTextInputTraits:(id)arg1 autofillMode:(long long)arg2;
- (void)releaseConnectedClients;
- (_Bool)_systemHasKbd;
- (void)updateClientResponseDelegatesWithDelegate:(id)arg1;
- (void)removeAllClients;

@end

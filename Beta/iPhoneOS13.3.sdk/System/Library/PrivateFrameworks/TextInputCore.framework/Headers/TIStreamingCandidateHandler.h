/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class TICandidateRequestToken, TIKeyboardInputManagerBase, TIKeyboardState;

@protocol TIClientProxy, TIKeyboardInputManagerLogging;

@interface TIStreamingCandidateHandler : NSObject

{
    unsigned long long _status;
    _Bool _didCallHandler;
    TIKeyboardInputManagerBase *_inputManager;
    id <TIClientProxy> _clientProxy;
    TICandidateRequestToken *_requestToken;
    CDUnknownBlockType _candidateHandler;
    TIKeyboardState *_keyboardState;
    id <TIKeyboardInputManagerLogging> _logger;
}

@property (retain, nonatomic) TIKeyboardState *keyboardState;
@property (weak, nonatomic) id <TIKeyboardInputManagerLogging> logger;
@property (nonatomic, readonly) id <TIClientProxy> clientProxy;
@property (nonatomic, readonly) TICandidateRequestToken *requestToken;
@property (copy, nonatomic, readonly) CDUnknownBlockType candidateHandler;
@property (nonatomic, readonly) _Bool asynchronous;

- (void)dealloc;
- (void)open;
- (void)close;
- (void)pushCandidates:(id)arg1;
- (id)initWithClientProxy:(id)arg1 keyboardState:(id)arg2 requestToken:(id)arg3 logger:(id)arg4 inputManager:(id)arg5 candidateHandler:(CDUnknownBlockType)arg6;

@end

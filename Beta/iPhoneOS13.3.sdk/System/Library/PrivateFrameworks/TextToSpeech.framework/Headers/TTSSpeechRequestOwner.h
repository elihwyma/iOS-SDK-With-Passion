/*
 Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
 */

#import <Foundation/NSObject.h>

@class NSString, TTSSpeechRequest;

@protocol TTSSpeechConnectionDelegate, TTSSpeechService;

@interface TTSSpeechRequestOwner : NSObject

{
    id <TTSSpeechConnectionDelegate> _delegate;
    TTSSpeechRequest *_request;
    id <TTSSpeechService> _speechService;
}

@property (weak, nonatomic) id <TTSSpeechService> speechService;
@property (weak, nonatomic) id <TTSSpeechConnectionDelegate> delegate;
@property (nonatomic, readonly) TTSSpeechRequest *request;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)_setRequest:(id)arg1;
- (void)startSpeechRequest:(id)arg1;
- (_Bool)isSystemSpeakingOnBehalfOfCurrentConnection;
- (void)continueCurrentSpeechRequest;
- (oneway void)speechRequestDidStart:(id)arg1 forService:(id)arg2;
- (oneway void)speechRequestDidPause:(id)arg1 forService:(id)arg2;
- (oneway void)speechRequestDidContinue:(id)arg1 forService:(id)arg2;
- (oneway void)speechRequest:(id)arg1 withMark:(long long)arg2 didStartForRange:(struct _NSRange)arg3 forService:(id)arg4;
- (oneway void)speechRequest:(id)arg1 didStopWithSuccess:(_Bool)arg2 phonemesSpoken:(id)arg3 forService:(id)arg4 error:(id)arg5;
- (oneway void)speechRequest:(id)arg1 didSynthesizeSilentlyToURL:(id)arg2;
- (id)availableVoicesForLanguageCode:(id)arg1 queryingMobileAssets:(_Bool)arg2;
- (id)initWithSpeechService:(id)arg1;
- (void)stopCurrentSpeechRequestAtMark:(long long)arg1 waitUntilStopped:(_Bool)arg2;
- (void)pauseCurrentSpeechRequestAtMark:(long long)arg1 waitUntilPaused:(_Bool)arg2;

@end

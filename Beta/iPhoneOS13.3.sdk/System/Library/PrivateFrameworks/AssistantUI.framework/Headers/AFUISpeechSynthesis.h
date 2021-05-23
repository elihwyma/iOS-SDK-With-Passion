/*
 Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

#import <Foundation/NSObject.h>

@class AFQueue, AFSiriClientStateManager, AFVoiceInfo, NSMutableArray, NSMutableDictionary, NSString, VSSpeechSynthesizer;

@protocol AFUISpeechSynthesisDelegate, AFUISpeechSynthesisLocalDelegate, OS_dispatch_group, OS_dispatch_queue;

@interface AFUISpeechSynthesis : NSObject

{
    VSSpeechSynthesizer *_synthesizer;
    AFSiriClientStateManager *_siriClientStateManager;
    unsigned int _sessionID;
    AFVoiceInfo *_outputVoice;
    NSMutableDictionary *_availableVoicesForLanguage;
    NSObject<OS_dispatch_queue> *_processingElementsQueue;
    NSObject<OS_dispatch_queue> *_pendingElementsQueue;
    NSObject<OS_dispatch_group> *_pendingElementsGroup;
    id <AFUISpeechSynthesisDelegate> _delegate;
    id <AFUISpeechSynthesisLocalDelegate> _localDelegate;
    AFQueue *_elementQueue;
    NSMutableArray *_activeElements;
    NSMutableDictionary *_delayedElements;
}

@property (nonatomic, readonly, getter=_elementQueue) AFQueue *elementQueue;
@property (nonatomic, readonly, getter=_activeElements) NSMutableArray *activeElements;
@property (nonatomic, readonly, getter=_delayedElements) NSMutableDictionary *delayedElements;
@property (weak, nonatomic) id <AFUISpeechSynthesisLocalDelegate> localDelegate;
@property (retain, nonatomic) id <AFUISpeechSynthesisDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)invalidate;
- (void)cancel;
- (void)speechSynthesizer:(id)arg1 didStartSpeakingRequest:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 successfully:(_Bool)arg3 phonemesSpoken:(id)arg4 withError:(id)arg5;
- (void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 withInstrumentMetrics:(id)arg3;
- (void)speechSynthesizer:(id)arg1 didStartPresynthesizedAudioRequest:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didStopPresynthesizedAudioRequest:(id)arg2 atEnd:(_Bool)arg3 error:(id)arg4;
- (void)speechSynthesizer:(id)arg1 didFinishPresynthesizedAudioRequest:(id)arg2 withInstrumentMetrics:(id)arg3 error:(id)arg4;
- (void)setOutputVoice:(id)arg1;
- (_Bool)isSpeaking;
- (id)_synthesizer;
- (void)setAudioSessionID:(unsigned int)arg1;
- (void)queue:(id)arg1 didEnqueueObjects:(id)arg2;
- (void)prewarmIfNeeded;
- (void)enqueueText:(id)arg1 identifier:(id)arg2 language:(id)arg3 gender:(id)arg4 isPhonetic:(_Bool)arg5 provisionally:(_Bool)arg6 eligibleAfterDuration:(double)arg7 delayed:(_Bool)arg8 canUseServerTTS:(_Bool)arg9 preparationIdentifier:(id)arg10 completion:(CDUnknownBlockType)arg11 animationIdentifier:(id)arg12 analyticsContext:(id)arg13 speakableContextInfo:(id)arg14;
- (void)enqueueText:(id)arg1 identifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)enqueueAudioData:(id)arg1 identifier:(id)arg2 provisionally:(_Bool)arg3 eligibleAfterDuration:(double)arg4 completion:(CDUnknownBlockType)arg5;
- (void)enqueuePhaticWithCompletion:(CDUnknownBlockType)arg1;
- (void)processDelayedItem:(id)arg1;
- (void)skipCurrentSynthesis;
- (void)speechSynthesisElementSynthesisEligibilityDidChange:(id)arg1;
- (_Bool)_isSynthesisQueueEmpty;
- (void)_cancelByCancellingActiveElementsOnly:(_Bool)arg1;
- (void)invalidateOnMainThread;
- (id)_siriClientStateManager;
- (void)_processElementQueue;
- (id)_activeElementWithPresynthesizedAudioRequest:(id)arg1;
- (id)_activeElementWithSpeechRequest:(id)arg1;
- (void)_enqueueText:(id)arg1 audioData:(id)arg2 identifier:(id)arg3 language:(id)arg4 gender:(id)arg5 isPhonetic:(_Bool)arg6 provisionally:(_Bool)arg7 eligibleAfterDuration:(double)arg8 delayed:(_Bool)arg9 canUseServerTTS:(_Bool)arg10 preparationIdentifier:(id)arg11 shouldCache:(_Bool)arg12 synthesizesWhileRecording:(_Bool)arg13 completion:(CDUnknownBlockType)arg14 animationIdentifier:(id)arg15 analyticsContext:(id)arg16 speakableContextInfo:(id)arg17;
- (void)_findVoiceForLanguage:(id)arg1 gender:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_processProvisionalElements;
- (void)_handleAudioData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleText:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_filterVoices:(id)arg1 gender:(id)arg2;
- (long long)_genderForString:(id)arg1;
- (void)isSynthesisQueueEmpty:(CDUnknownBlockType)arg1;
- (void)_setSynthesizer:(id)arg1;
- (void)_setSiriClientStateManager:(id)arg1;

@end

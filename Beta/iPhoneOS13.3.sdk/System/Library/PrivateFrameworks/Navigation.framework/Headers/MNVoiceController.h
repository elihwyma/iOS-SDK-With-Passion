/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class AVAudioPlayer, CARSessionStatus, MNNavigationAudioSession, MNVoiceEvent, MNVoiceEventQueue, NSBundle, NSCache, NSHashTable, NSLocale, NSMutableArray, NSMutableDictionary, NSString, NSTimer, VSSpeechRequest, VSSpeechSynthesizer;

@protocol OS_dispatch_queue, VSSpeechSynthesizerDelegate;

@interface MNVoiceController : NSObject

{
    MNNavigationAudioSession *_activeNavigationSession;
    MNVoiceEvent *_currentVoiceEvent;
    NSMutableArray *_postAudioSessionActivationBlocks;
    float _currentVolume;
    VSSpeechRequest *_speechRequest;
    long long _previousGender;
    AVAudioPlayer *_leftTurnAudioPlayer;
    AVAudioPlayer *_rightTurnAudioPlayer;
    _Bool _shouldBePlayingPrompt;
    NSObject<OS_dispatch_queue> *_audioQueue;
    _Bool _muteOverride;
    NSTimer *_eventProcessingTimer;
    NSTimer *_activationDebugTimer;
    long long _currentLanguageSource;
    NSString *_currentLanguage;
    NSLocale *_currentLocale;
    NSBundle *_spokenBundle;
    _Bool _isPersistentConnectionOpen;
    long long _audioSessionState;
    NSHashTable *_observers;
    double _lastSpeechStartTime;
    NSString *_lastSpeech;
    unsigned long long _charactersSpokenCount;
    double _charactersSpokenDuration;
    id <VSSpeechSynthesizerDelegate> _delegate;
    VSSpeechSynthesizer *_synthesizer;
    MNVoiceEventQueue *_eventQueue;
    NSMutableDictionary *_durationRequests;
    NSCache *_speechDuration;
    CARSessionStatus *_carSessionStatus;
}

@property (nonatomic, readonly) CARSessionStatus *carSessionStatus;
@property (weak, nonatomic) id <VSSpeechSynthesizerDelegate> delegate;
@property (nonatomic, readonly) VSSpeechSynthesizer *synthesizer;
@property (retain, nonatomic) VSSpeechRequest *speechRequest;
@property (retain, nonatomic) MNVoiceEvent *currentVoiceEvent;
@property (nonatomic, readonly) AVAudioPlayer *leftTurnAudioPlayer;
@property (nonatomic, readonly) AVAudioPlayer *rightTurnAudioPlayer;
@property (nonatomic, readonly) MNVoiceEventQueue *eventQueue;
@property (readonly) NSMutableDictionary *durationRequests;
@property (readonly) NSCache *speechDuration;
@property (nonatomic, readonly) NSString *currentVoiceLanguage;
@property (nonatomic, readonly) NSLocale *currentVoiceLocale;
@property (nonatomic, readonly) _Bool speechMuted;
@property (nonatomic, readonly) _Bool deviceMuted;
@property (retain) MNNavigationAudioSession *activeNavigationSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)localizedStringForKey:(id)arg1;
+ (id)defaultVoiceLanguageWithSource:(long long *)arg1;

- (id)init;
- (void)dealloc;
- (void)stop;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)_defaultsDidChange;
- (void)_processNextEvent;
- (void)setVolume:(double)arg1;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (void)speechSynthesizer:(id)arg1 didFinishSynthesisRequest:(id)arg2 withInstrumentMetrics:(id)arg3 error:(id)arg4;
- (void)speechSynthesizer:(id)arg1 didFinishSpeaking:(_Bool)arg2 withError:(id)arg3;
- (_Bool)isSpeaking;
- (void)_mediaServicesWereReset:(id)arg1;
- (double)durationToSpeak:(id)arg1;
- (void)prepareToAnnounce;
- (void)setAudioSessionProperties;
- (void)speak:(id)arg1 fallbackPrompt:(unsigned long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)beepIfNecessaryForShortPromptType:(unsigned long long)arg1 textToSpeak:(id)arg2;
- (void)clearAllEvents;
- (void)voiceEventQueue:(id)arg1 wantsToImmediatelyPlayEvent:(id)arg2;
- (void)_updateCurrentVoiceLanguage;
- (id)_localizedStringForKey:(id)arg1;
- (void)submitVoiceAssetWithLanguage:(id)arg1 andGender:(long long)arg2;
- (double)_estimateDurationToSpeak:(id)arg1;
- (id)requestForSpeech:(id)arg1;
- (_Bool)_stopCurrentEvent;
- (void)_deactivateAudioSession;
- (void)_handleFinishedSpeakingWithStatusCode:(int)arg1;
- (void)cacheAnnouncement:(id)arg1;
- (_Bool)isPlayingAudio;
- (void)_handleFinishedPlayingBeepWithStatusCode:(int)arg1;
- (void)_playEvent:(id)arg1;
- (void)_performWithActiveAudioSession:(CDUnknownBlockType)arg1;
- (_Bool)_playTextEvent:(id)arg1;
- (_Bool)_playBeepEvent:(id)arg1;
- (void)_setGender;
- (void)_eventProcessingTimerFired:(id)arg1;
- (void)_failCurrentEventAndProcessNext;
- (void)_setMaintainInactivePersistentConnection:(_Bool)arg1;
- (void)_activateAudioSession:(CDUnknownBlockType)arg1;
- (void)_setAudioSessionActive:(_Bool)arg1;
- (void)_activationDebugTimerFired:(id)arg1;
- (void)_audioInterruption:(id)arg1;
- (void)_setVolumeControlEnabled:(_Bool)arg1;
- (void)_resetAudioPlayers;
- (void)warmUpTTS;
- (void)endAnnounce;

@end

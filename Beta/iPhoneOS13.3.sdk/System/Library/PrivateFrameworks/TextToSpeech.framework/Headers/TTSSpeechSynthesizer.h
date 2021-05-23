/*
 Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue, TTSSpeechSynthesizerDelegate;

@interface TTSSpeechSynthesizer : NSObject

{
    long long _footprint;
    id <TTSSpeechSynthesizerDelegate> _delegate;
    _Bool _useSharedSession;
    _Bool _audioSessionIDIsValid;
    unsigned int _audioSessionID;
    unsigned int _audioQueueFlags;
    _Bool _useMonarchStyleRate;
    NSMutableDictionary *_channels;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_currentRequestOwners;
    NSMutableArray *_speechRequests;
    struct {
        unsigned int delegateStartWithRequest:1;
        unsigned int delegateFinishWithRequest:1;
        unsigned int delegateFinishWithPhonemesSpokenWithRequest:1;
        unsigned int delegatePauseWithRequest:1;
        unsigned int delegateContinueWithRequest:1;
        unsigned int delegateWillSpeakWithRequest:1;
        unsigned int delegateSynthesizedSilentlyURL:1;
        unsigned int willUseInput:1;
    } _synthesizerFlags;
    unsigned long long _synthesizerInstanceID;
    NSArray *_outputChannels;
    NSMutableDictionary *_testingLastRuleConversion;
    _Bool _supportsAccurateWordCallbacks;
    _Bool _ignoreSubstitutions;
    _Bool _synthesizeSilently;
    float _rate;
    float _pitch;
    float _volume;
    NSString *_voiceIdentifier;
    NSString *_bundleIdentifier;
    unsigned long long _requestClientIdentifier;
    void *_speakingRequestClientContext;
    NSArray *_userSubstitutions;
    NSArray *_phonemeSubstitutions;
    CDUnknownBlockType _audioBufferCallback;
}

@property (weak, nonatomic) id <TTSSpeechSynthesizerDelegate> delegate;
@property (nonatomic) float rate;
@property (nonatomic) float pitch;
@property (nonatomic) float volume;
@property (retain, nonatomic) NSString *voiceIdentifier;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *resolvedVoiceIdentifier;
@property (nonatomic) unsigned long long requestClientIdentifier;
@property (nonatomic) void *speakingRequestClientContext;
@property (nonatomic) _Bool supportsAccurateWordCallbacks;
@property (nonatomic) unsigned int audioQueueFlags;
@property (nonatomic, readonly) unsigned int audioSessionID;
@property (copy, nonatomic) NSArray *userSubstitutions;
@property (copy, nonatomic) NSArray *phonemeSubstitutions;
@property (copy, nonatomic) CDUnknownBlockType audioBufferCallback;
@property (retain, nonatomic) NSArray *outputChannels;
@property (nonatomic) _Bool ignoreSubstitutions;
@property (nonatomic) _Bool synthesizeSilently;

+ (void)initialize;
+ (id)availableVoices;
+ (id)availableLanguageCodes;
+ (id)speechMarkupStringForType:(long long)arg1 forIdentifier:(id)arg2 string:(id)arg3;
+ (id)allAvailableVoices;
+ (id)refreshAllAvailableVoices:(_Bool)arg1;
+ (id)audioFileSettingsForVoice:(id)arg1;
+ (id)_speechVoiceForIdentifier:(id)arg1 language:(id)arg2 footprint:(long long)arg3 useFallbackDefault:(_Bool)arg4;
+ (id)supportedIPAPhonemeLanguages;
+ (void)_initializeServers;
+ (id)availableVoicesForLanguageCode:(id)arg1 queryingMobileAssets:(_Bool)arg2;
+ (id)_speechVoiceForIdentifier:(id)arg1 language:(id)arg2 footprint:(long long)arg3;
+ (id)voiceForIdentifier:(id)arg1;
+ (_Bool)employSpeechMarkupForType:(long long)arg1 identifier:(id)arg2 withLanguage:(id)arg3;
+ (void)testingSetAllVoices:(id)arg1;
+ (void)setVoiceAssetsForTesting:(id)arg1;
+ (id)voiceAssetsForTesting;
+ (id)synthesizerForSynthesizerID:(unsigned long long)arg1;
+ (id)refreshAllAvailableVoices;
+ (id)voiceAccessQueue;
+ (void)setTestingAvailableVoicesForLanguageCode:(id)arg1;
+ (void)setSpeechJobFinishedUnitTestBlock:(CDUnknownBlockType)arg1;
+ (void)setSpeechJobStartedUnitTestBlock:(CDUnknownBlockType)arg1;

- (id)init;
- (void)dealloc;
- (void)_setDelegate:(id)arg1;
- (_Bool)stopSpeakingAtNextBoundary:(long long)arg1 synchronously:(_Bool)arg2 error:(id *)arg3;
- (_Bool)isSpeaking;
- (id)speechString;
- (long long)footprint;
- (void)setFootprint:(long long)arg1;
- (_Bool)stopSpeakingAtNextBoundary:(long long)arg1 error:(id *)arg2;
- (_Bool)startSpeakingString:(id)arg1 withLanguageCode:(id)arg2 error:(id *)arg3;
- (_Bool)_stopSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 synchronously:(_Bool)arg3 error:(id *)arg4;
- (_Bool)_pauseSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 synchronously:(_Bool)arg3 error:(id *)arg4;
- (_Bool)_startSpeakingString:(id)arg1 orAttributedString:(id)arg2 toURL:(id)arg3 withLanguageCode:(id)arg4 request:(id *)arg5 error:(id *)arg6;
- (_Bool)pauseSpeakingAtNextBoundary:(long long)arg1 synchronously:(_Bool)arg2 error:(id *)arg3;
- (_Bool)_continueSpeakingRequest:(id)arg1 withError:(id *)arg2;
- (_Bool)startSpeakingString:(id)arg1 toURL:(id)arg2 withLanguageCode:(id)arg3 error:(id *)arg4;
- (void)connection:(id)arg1 speechRequestDidStart:(id)arg2;
- (void)connection:(id)arg1 speechRequestDidPause:(id)arg2;
- (void)connection:(id)arg1 speechRequestDidContinue:(id)arg2;
- (void)connection:(id)arg1 speechRequest:(id)arg2 didStopAtEnd:(_Bool)arg3 phonemesSpoken:(id)arg4 error:(id)arg5;
- (void)connection:(id)arg1 speechRequest:(id)arg2 willSpeakMark:(long long)arg3 inRange:(struct _NSRange)arg4;
- (float)minimumRate;
- (float)maximumRate;
- (_Bool)stopSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 synchronously:(_Bool)arg3 error:(id *)arg4;
- (_Bool)startSpeakingString:(id)arg1 request:(id *)arg2 error:(id *)arg3;
- (_Bool)startSpeakingString:(id)arg1 withLanguageCode:(id)arg2 request:(id *)arg3 error:(id *)arg4;
- (_Bool)stopSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 error:(id *)arg3;
- (_Bool)pauseSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 error:(id *)arg3;
- (_Bool)pauseSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 synchronously:(_Bool)arg3 error:(id *)arg4;
- (_Bool)pauseSpeakingAtNextBoundary:(long long)arg1 error:(id *)arg2;
- (_Bool)continueSpeakingRequest:(id)arg1 withError:(id *)arg2;
- (void)useSpecificAudioSession:(unsigned int)arg1;
- (void)useAudioQueueFlags:(unsigned int)arg1;
- (_Bool)startSpeakingString:(id)arg1 error:(id *)arg2;
- (_Bool)startSpeakingString:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (_Bool)continueSpeakingWithError:(id *)arg1;
- (void)setUseMonarchStyleRate:(_Bool)arg1;
- (_Bool)useMonarchStyleRate;
- (unsigned long long)synthesizerInstanceID;
- (void)_mediaServicesDied;
- (_Bool)_skipSubstition:(id)arg1 language:(id)arg2 bundleIdentifier:(id)arg3 voice:(id)arg4;
- (id)_applySubstitution:(id)arg1 toText:(id)arg2 wordRange:(struct _NSRange)arg3 request:(id)arg4 phonemes:(id *)arg5;
- (id)_preprocessText:(id)arg1 languageCode:(id)arg2;
- (void)_processUserSubstitutions:(id)arg1 toText:(id)arg2 request:(id)arg3 bundleIdentifier:(id)arg4 voice:(id)arg5;
- (void)connection:(id)arg1 speechRequest:(id)arg2 didSynthesizeSilentlyToURL:(id)arg3;
- (id)testingLastRuleConversion;
- (void)testingSetLastRuleConversion:(id)arg1 replacement:(id)arg2;
- (id)resolvedVoiceIdentifierForLanguageCode:(id)arg1;
- (_Bool)startSpeakingString:(id)arg1 toURL:(id)arg2 withLanguageCode:(id)arg3 request:(id *)arg4 error:(id *)arg5;

@end

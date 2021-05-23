/*
 Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/Frameworks/TextToSpeechBundleSupport.framework/TextToSpeechBundleSupport
 */

#import <NSObject.h>

@class NSLock, NSMutableArray, TTSSpeechServer, TTSTimer, TTSVocalizer;

@interface TTSSpeechServerInstance : NSObject

{
    NSLock *_speechLock;
    NSMutableArray *_speechRequestQueue;
    unsigned char _speechActive;
    unsigned char _speechThreadActive;
    struct __CFRunLoop *_speechThreadRunLoop;
    struct __CFRunLoopSource *_speechActivitySignal;
    CDStruct_e7d21709 *_speechActiveContext;
    unsigned char _newVoiceInstalled;
    unsigned char _speechThreadPriorityIsHigh;
    unsigned char _shouldTerminateThread;
    unsigned long long _synthesizerId;
    TTSTimer *_wordCallbackTimer;
    TTSSpeechServer *_speechService;
    TTSVocalizer *_vocalizer;
}

@property (retain, nonatomic) TTSTimer *wordCallbackTimer;
@property (nonatomic) unsigned long long synthesizerId;
@property (nonatomic) TTSSpeechServer *speechService;
@property (retain, nonatomic) TTSVocalizer *vocalizer;

- (id)init;
- (void)dealloc;
- (oneway void)startSpeechRequest:(id)arg1;
- (oneway void)pauseSpeechRequest:(id)arg1 atMark:(long long)arg2;
- (oneway void)continueSpeechRequest:(id)arg1;
- (oneway void)stopSpeechRequest:(id)arg1 atMark:(long long)arg2;
- (oneway void)getSpeechIsActiveForRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)_getAvailableVoiceForVoice:(id)arg1;
- (void)_appendSpeechRequestAndStart:(id)arg1;
- (void)_startSpeechThread;
- (void)_initializeSpeech:(CDStruct_e7d21709 *)arg1;
- (unsigned char)_activeRequestShouldStopAtAnyMark:(CDStruct_e7d21709 *)arg1;
- (unsigned char)_setActiveRequestActionForMark:(long long)arg1 clientRequest:(id)arg2 markType:(long long)arg3;
- (void)_initializeSpeechEngine:(CDStruct_e7d21709 *)arg1;
- (void)_processCurrentRequest:(CDStruct_e7d21709 *)arg1;
- (void)_cleanupAfterRequest:(CDStruct_e7d21709 *)arg1;
- (void)_ttsLogSpeechForServerRequest:(id)arg1;
- (unsigned char)_activeRequestShouldStopImmediately:(CDStruct_e7d21709 *)arg1;
- (unsigned char)_activeRequestShouldPauseImmediately:(CDStruct_e7d21709 *)arg1;
- (unsigned char)_activeRequestShouldContinue:(CDStruct_e7d21709 *)arg1;
- (void)_uninitializeSpeech:(CDStruct_e7d21709 *)arg1;
- (unsigned char)_needsParameterChange:(CDStruct_e7d21709 *)arg1 lock:(unsigned char)arg2 rate:(float *)arg3 pitch:(float *)arg4 volume:(float *)arg5 footprint:(long long *)arg6 voiceType:(long long *)arg7;
- (void)_setParameters:(CDStruct_e7d21709 *)arg1 rate:(float)arg2 pitch:(float)arg3 volume:(float)arg4 footprint:(long long)arg5;
- (_Bool)_footprintOrVoiceNameHasChanged:(CDStruct_e7d21709 *)arg1;
- (void)_loadVoiceResource:(CDStruct_e7d21709 *)arg1 voiceResource:(id)arg2;
- (void)_speechThreadSignal;
- (void)_terminateThread;
- (unsigned int)_vocalizerMessageBufferDone:(struct _VE_HSAFE)arg1 context:(CDStruct_b823fdf7 *)arg2 outData:(CDStruct_ef07e5a0 *)arg3;
- (void)_handleSpeechThread;
- (unsigned char)_shouldContinueSpeechGivenMark:(CDStruct_e7d21709 *)arg1 markType:(long long)arg2 blockIfPaused:(unsigned char)arg3;
- (void)processMarker:(long long)arg1 withByteOffset:(unsigned int)arg2 markerPosition:(unsigned int)arg3 markerLength:(unsigned int)arg4 context:(CDStruct_e7d21709 *)arg5 currentTime:(unsigned long long)arg6;
- (void)_newVoiceInstalled;
- (id)_ttSSpeechServerCopyVoiceNamesForLanguage:(id)arg1 voiceType:(long long)arg2 queryingMobileAssets:(_Bool)arg3;
- (_Bool)_defaultVoiceIsFallback;
- (struct __CFArray *)loadedVoiceResources;
- (id)_speechVocalizerPlaybackDataProviderWithVocalizer:(id)arg1 playback:(struct __TTSPlayback *)arg2 inContext:(void *)arg3;

@end

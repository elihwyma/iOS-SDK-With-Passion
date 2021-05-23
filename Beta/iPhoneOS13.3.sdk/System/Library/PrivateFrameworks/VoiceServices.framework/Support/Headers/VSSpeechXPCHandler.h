/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
 */

#import <Foundation/NSObject.h>

@class AFAudioPowerUpdater, NSString, NSXPCConnection;

@protocol OS_dispatch_queue;

@interface VSSpeechXPCHandler : NSObject

{
    NSXPCConnection *_connection;
    NSString *_connectionIdentifier;
    NSObject<OS_dispatch_queue> *_audioPowerUpdateQueue;
    AFAudioPowerUpdater *_audioPowerUpdater;
}

@property (retain, nonatomic) NSString *connectionIdentifier;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *audioPowerUpdateQueue;
@property (retain, nonatomic) AFAudioPowerUpdater *audioPowerUpdater;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInlineStreamKeys;

- (void)dealloc;
- (id)_delegate;
- (id)initWithConnection:(id)arg1;
- (_Bool)isSpeaking;
- (oneway void)killDaemon;
- (oneway void)getVoiceResourceForLanguage:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)prewarmIfNeededWithRequest:(id)arg1;
- (oneway void)stopPresynthesizedAudioRequest;
- (oneway void)startSynthesisRequest:(id)arg1;
- (oneway void)startPresynthesizedAudioRequest:(id)arg1;
- (oneway void)cachePresynthesizedAudioRequest:(id)arg1;
- (oneway void)estimateDurationWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)setLogToFile:(_Bool)arg1;
- (oneway void)getLogToFile:(CDUnknownBlockType)arg1;
- (oneway void)getTTSServerVoicesWithFilter:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)forwardStreamObject:(id)arg1;
- (oneway void)beginAudioPowerUpdateWithReply:(CDUnknownBlockType)arg1;
- (oneway void)endAudioPowerUpdate;
- (oneway void)cleanUnusedAssets:(CDUnknownBlockType)arg1;
- (oneway void)setAutoDownloadedVoiceAssets:(id)arg1 withClientID:(id)arg2;
- (oneway void)getAutoDownloadedVoiceAssetsWithClientID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)getVoiceInfoForLanguageCode:(id)arg1 footprint:(long long)arg2 gender:(long long)arg3 type:(long long)arg4 reply:(CDUnknownBlockType)arg5;
- (oneway void)updateWithConnectionIdentifier:(id)arg1;
- (oneway void)queryPhaticCapabilityWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)startSpeechRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)pauseSpeechRequestAtMark:(long long)arg1;
- (oneway void)continueSpeechRequest;
- (oneway void)stopSpeechRequestAtMark:(long long)arg1;
- (oneway void)getVoiceNamesForLanguage:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)getFootprintsForVoiceName:(id)arg1 languageCode:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (oneway void)getSpeechIsActiveReply:(CDUnknownBlockType)arg1;
- (oneway void)getSpeechIsActiveForConnectionReply:(CDUnknownBlockType)arg1;
- (oneway void)getLocalVoicesReply:(CDUnknownBlockType)arg1;
- (oneway void)getLocalVoiceResourcesReply:(CDUnknownBlockType)arg1;
- (oneway void)speechRequestDidStart;
- (oneway void)speechRequestDidPause;
- (oneway void)speechRequestDidContinue;
- (oneway void)speechRequestMark:(long long)arg1 didStartForRange:(struct _NSRange)arg2;
- (oneway void)speechRequestDidStopWithSuccess:(_Bool)arg1 phonemesSpoken:(id)arg2 error:(id)arg3;
- (oneway void)speechRequestSuccessWithInstrumentMetrics:(id)arg1;
- (oneway void)speechRequestDidReceiveTimingInfo:(id)arg1;
- (oneway void)synthesisRequest:(id)arg1 didReceiveTimingInfo:(id)arg2;
- (oneway void)synthesisRequest:(id)arg1 didFinishWithInstrumentMetrics:(id)arg2 error:(id)arg3;
- (oneway void)presynthesizedAudioRequestDidStart;
- (oneway void)presynthesizedAudioRequestDidStopAtEnd:(_Bool)arg1 error:(id)arg2;
- (oneway void)presynthesizedAudioRequestSuccessWithInstrumentMetrics:(id)arg1 error:(id)arg2;
- (void)performLanguageFallBackIfNeededWithRequest:(id)arg1;
- (void)preprocessRequestBeforeSynthesis:(id)arg1;

@end

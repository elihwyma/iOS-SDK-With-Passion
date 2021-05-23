/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection, VSPresynthesizedAudioRequest, VSSpeechConnectionDelegateWrapper, VSSpeechRequest;

@protocol OS_dispatch_queue, VSSpeechConnectionDelegate;

__attribute__((visibility("hidden")))
@interface VSSpeechConnection : NSObject

{
    NSXPCConnection *_xpcConnection;
    NSString *_identifier;
    id <VSSpeechConnectionDelegate> _delegate;
    VSSpeechConnectionDelegateWrapper *_delegateWrapper;
    NSObject<OS_dispatch_queue> *_threadSafeQueue;
}

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (retain, nonatomic) VSSpeechConnectionDelegateWrapper *delegateWrapper;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *threadSafeQueue;
@property (retain, nonatomic) NSString *identifier;
@property (weak, nonatomic) id <VSSpeechConnectionDelegate> delegate;
@property (nonatomic, readonly) VSSpeechRequest *request;
@property (nonatomic, readonly) VSPresynthesizedAudioRequest *presynthesizedAudioRequest;

- (id)init;
- (void)dealloc;
- (void)setRequest:(id)arg1;
- (void)_connectionInvalidated;
- (id)_remoteObject;
- (void)killDaemon;
- (void)getVoiceResourceForLanguage:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)prewarmIfNeededWithRequest:(id)arg1;
- (_Bool)queryPhaticCapabilityWithRequest:(id)arg1;
- (_Bool)isSystemSpeaking;
- (void)stopPresynthesizedAudioRequest;
- (void)stopCurrentSpeechRequestAtMark:(long long)arg1;
- (void)pauseCurrentSpeechRequestAtMark:(long long)arg1;
- (void)startSynthesisRequest:(id)arg1;
- (void)startSpeechRequest:(id)arg1;
- (void)startPresynthesizedAudioRequest:(id)arg1;
- (void)cachePresynthesizedAudioRequest:(id)arg1;
- (_Bool)isSystemSpeakingOnBehalfOfCurrentConnection;
- (void)continueCurrentSpeechRequest;
- (void)estimateDurationWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setLogToFile:(_Bool)arg1;
- (void)getLogToFile:(CDUnknownBlockType)arg1;
- (id)availableVoicesForLanguageCode:(id)arg1;
- (id)availableFootprintsForVoice:(id)arg1 languageCode:(id)arg2;
- (void)getTTSServerVoicesWithFilter:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)forwardStreamObject:(id)arg1;
- (void)beginAudioPowerUpdateWithReply:(CDUnknownBlockType)arg1;
- (void)endAudioPowerUpdate;
- (oneway void)cleanUnusedAssets:(CDUnknownBlockType)arg1;
- (void)getLocalVoiceAssets:(CDUnknownBlockType)arg1;
- (void)getLocalVoiceResources:(CDUnknownBlockType)arg1;
- (void)setAutoDownloadedVoiceAssets:(id)arg1 withClientID:(id)arg2;
- (void)getAutoDownloadedVoiceAssetsWithClientID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getVoiceInfoForLanguageCode:(id)arg1 footprint:(long long)arg2 gender:(long long)arg3 type:(long long)arg4 reply:(CDUnknownBlockType)arg5;
- (void)updateWithConnectionIdentifier:(id)arg1;
- (id)concurrentSynthesisRequests;
- (void)setPresynthesizedAudioRequest:(id)arg1;
- (id)_remoteObjectWithErrorHandler:(CDUnknownBlockType)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
 */

#import <voiced_tts/Swift-Protocol.h>

@protocol VSSpeechXPCServiceProtocol <Swift>

- (unsigned short)killDaemon;
- (unsigned short)getVoiceResourceForLanguage:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)prewarmIfNeededWithRequest: /* Error: Ran out of types for this method. */;
- (unsigned short)stopPresynthesizedAudioRequest;
- (unsigned short)startSynthesisRequest: /* Error: Ran out of types for this method. */;
- (unsigned short)startPresynthesizedAudioRequest: /* Error: Ran out of types for this method. */;
- (unsigned short)cachePresynthesizedAudioRequest: /* Error: Ran out of types for this method. */;
- (unsigned short)estimateDurationWithRequest:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)setLogToFile: /* Error: Ran out of types for this method. */;
- (unsigned short)getLogToFile: /* Error: Ran out of types for this method. */;
- (unsigned short)getTTSServerVoicesWithFilter:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)forwardStreamObject: /* Error: Ran out of types for this method. */;
- (unsigned short)beginAudioPowerUpdateWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)endAudioPowerUpdate;
- (unsigned short)cleanUnusedAssets: /* Error: Ran out of types for this method. */;
- (unsigned short)setAutoDownloadedVoiceAssets:withClientID: /* Error: Ran out of types for this method. */;
- (unsigned short)getAutoDownloadedVoiceAssetsWithClientID:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)getVoiceInfoForLanguageCode:footprint:gender:type:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)updateWithConnectionIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)queryPhaticCapabilityWithRequest:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)startSpeechRequest:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)pauseSpeechRequestAtMark: /* Error: Ran out of types for this method. */;
- (unsigned short)continueSpeechRequest;
- (unsigned short)stopSpeechRequestAtMark: /* Error: Ran out of types for this method. */;
- (unsigned short)getVoiceNamesForLanguage:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)getFootprintsForVoiceName:languageCode:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)getSpeechIsActiveReply: /* Error: Ran out of types for this method. */;
- (unsigned short)getSpeechIsActiveForConnectionReply: /* Error: Ran out of types for this method. */;
- (unsigned short)getLocalVoicesReply: /* Error: Ran out of types for this method. */;
- (unsigned short)getLocalVoiceResourcesReply: /* Error: Ran out of types for this method. */;

@end

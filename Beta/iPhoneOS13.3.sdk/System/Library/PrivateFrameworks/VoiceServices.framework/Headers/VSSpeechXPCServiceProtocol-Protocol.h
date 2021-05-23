/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <VoiceServices/Swift-Protocol.h>

@class MISSING_TYPE;

@protocol VSSpeechXPCServiceProtocol <Swift>

- (MISSING_TYPE *)killDaemon;
- (MISSING_TYPE *)getVoiceResourceForLanguage:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)prewarmIfNeededWithRequest: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)stopPresynthesizedAudioRequest;
- (MISSING_TYPE *)startSynthesisRequest: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)startPresynthesizedAudioRequest: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)cachePresynthesizedAudioRequest: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)estimateDurationWithRequest:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setLogToFile: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)getLogToFile: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)getTTSServerVoicesWithFilter:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)forwardStreamObject: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)beginAudioPowerUpdateWithReply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)endAudioPowerUpdate;
- (MISSING_TYPE *)cleanUnusedAssets: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setAutoDownloadedVoiceAssets:withClientID: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)getAutoDownloadedVoiceAssetsWithClientID:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)getVoiceInfoForLanguageCode:footprint:gender:type:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)updateWithConnectionIdentifier: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)queryPhaticCapabilityWithRequest:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)startSpeechRequest:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)pauseSpeechRequestAtMark: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)continueSpeechRequest;
- (MISSING_TYPE *)stopSpeechRequestAtMark: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)getVoiceNamesForLanguage:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)getFootprintsForVoiceName:languageCode:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)getSpeechIsActiveReply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)getSpeechIsActiveForConnectionReply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)getLocalVoicesReply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)getLocalVoiceResourcesReply: /* Error: Ran out of types for this method. */;

@end

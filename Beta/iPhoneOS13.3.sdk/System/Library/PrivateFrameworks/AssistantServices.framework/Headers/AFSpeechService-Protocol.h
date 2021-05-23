/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <AssistantServices/Swift-Protocol.h>

@protocol AFSpeechService <Swift>

- (unsigned short)startRequestActivityWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)preheatSpeechRecognitionWithLanguage: /* Error: Ran out of types for this method. */;
- (unsigned short)startSpeechRecognitionWithLanguage:task:context:profile:narrowband:detectUtterances:censorSpeech:maximumRecognitionDuration:farField:overrides:modelOverrideURL:secureOfflineOnly:originalAudioFileURL:didStartHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)addAudioPacket: /* Error: Ran out of types for this method. */;
- (unsigned short)finishAudio;
- (unsigned short)createSpeechProfileWithLanguage:JSONData:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)updateSpeechProfileWithLanguage:existingProfile:existingAssetPath:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getOfflineDictationStatusIgnoringCache:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchAssetsForLanguage:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchUserDataForLanguage:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)runAdaptationRecipeEvaluation:recordData:attachments:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)readProfileAndUserDataWithLanguage:allowOverride:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getInstalledAssetSizeWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)purgeInstalledAssetsWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)writeDESRecord;

@end

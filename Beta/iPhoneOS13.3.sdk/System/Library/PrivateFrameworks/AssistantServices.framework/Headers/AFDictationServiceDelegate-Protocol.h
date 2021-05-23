/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <AssistantServices/Swift-Protocol.h>

@protocol AFDictationServiceDelegate <Swift>

- (unsigned short)speechRecordingWillBeginWithInputAudioPowerXPCWrapper: /* Error: Ran out of types for this method. */;
- (unsigned short)speechRecordingDidBegin;
- (unsigned short)speechRecordingDidEnd;
- (unsigned short)speechRecordingDidCancel;
- (unsigned short)speechRecordingDidFail: /* Error: Ran out of types for this method. */;
- (unsigned short)speechDidRecognizePhrases:utterances:usingSpeechModel:correctionContext:audioAnalytics: /* Error: Ran out of types for this method. */;
- (unsigned short)speechDidRecognizePartialResult: /* Error: Ran out of types for this method. */;
- (unsigned short)speechDidRecognizeTokens:usingSpeechModel: /* Error: Ran out of types for this method. */;
- (unsigned short)speechDidProcessAudioDuration: /* Error: Ran out of types for this method. */;
- (unsigned short)speechDidRecognizeTranscriptionObjects:usingSpeechModel: /* Error: Ran out of types for this method. */;
- (unsigned short)speechRecognitionDidFinishWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)speechDidFinishWritingAudioFile:error: /* Error: Ran out of types for this method. */;
- (unsigned short)speechDidReceiveSearchResults:recognitionText:stable:final: /* Error: Ran out of types for this method. */;
- (unsigned short)speechDidRecognizePackage: /* Error: Ran out of types for this method. */;
- (unsigned short)speechDidDetectLanguage:confidenceScores:isConfident: /* Error: Ran out of types for this method. */;
- (unsigned short)speechDidRecognizeMultilingualSpeech: /* Error: Ran out of types for this method. */;
- (unsigned short)languageDetectorFailedWithError: /* Error: Ran out of types for this method. */;

@end

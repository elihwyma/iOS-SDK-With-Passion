/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@protocol UIDictationConnectionDelegate <Swift>

- (unsigned short)dictationConnection:didReceiveSearchResults:recognizedText:stable:final: /* Error: Ran out of types for this method. */;
- (unsigned short)dictationConnection:updateOptions: /* Error: Ran out of types for this method. */;
- (unsigned short)dictationConnection:didFailRecordingWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)dictationConnection:didDetectLanguage: /* Error: Ran out of types for this method. */;
- (unsigned short)dictationConnectionWillStartRecording: /* Error: Ran out of types for this method. */;
- (unsigned short)dictationConnectionDidStartRecording: /* Error: Ran out of types for this method. */;
- (unsigned short)dictationConnection:didFailRecognitionWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)dictationConnectionDidEndRecording: /* Error: Ran out of types for this method. */;
- (unsigned short)dictationConnectionDidCancel: /* Error: Ran out of types for this method. */;
- (unsigned short)dictationConnection:receivedInterpretation:languageModel:secureInput: /* Error: Ran out of types for this method. */;
- (unsigned short)dictationConnectionDidCancelIncompatibleLocalRecognizer: /* Error: Ran out of types for this method. */;
- (unsigned short)dictationConnection:finalizePhrases:languageModel:correctionIdentifier:secureInput: /* Error: Ran out of types for this method. */;
- (unsigned short)dictationConnectionDidFinish: /* Error: Ran out of types for this method. */;
- (unsigned short)dictationConnnectionDidChangeAvailability: /* Error: Ran out of types for this method. */;
- (unsigned short)dictationConnectionDidCancelRecording: /* Error: Ran out of types for this method. */;

@end

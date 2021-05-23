/*
 Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
 */

@protocol TTSSpeechConnectionDelegate

- (unsigned short)connection:speechRequestDidStart: /* Error: Ran out of types for this method. */;
- (unsigned short)connection:speechRequestDidPause: /* Error: Ran out of types for this method. */;
- (unsigned short)connection:speechRequestDidContinue: /* Error: Ran out of types for this method. */;
- (unsigned short)connection:speechRequest:didStopAtEnd:phonemesSpoken:error: /* Error: Ran out of types for this method. */;
- (unsigned short)connection:speechRequest:willSpeakMark:inRange: /* Error: Ran out of types for this method. */;
- (unsigned short)connection:speechRequest:didSynthesizeSilentlyToURL: /* Error: Ran out of types for this method. */;

@end

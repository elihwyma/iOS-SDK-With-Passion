/*
 Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
 */

#import <TextToSpeech/Swift-Protocol.h>

@protocol TTSSpeechRequestDelegate <Swift>

- (unsigned short)speechRequestDidStart:forService: /* Error: Ran out of types for this method. */;
- (unsigned short)speechRequestDidPause:forService: /* Error: Ran out of types for this method. */;
- (unsigned short)speechRequestDidContinue:forService: /* Error: Ran out of types for this method. */;
- (unsigned short)speechRequest:withMark:didStartForRange:forService: /* Error: Ran out of types for this method. */;
- (unsigned short)speechRequest:didStopWithSuccess:phonemesSpoken:forService:error: /* Error: Ran out of types for this method. */;
- (unsigned short)speechRequest:didSynthesizeSilentlyToURL: /* Error: Ran out of types for this method. */;

@end

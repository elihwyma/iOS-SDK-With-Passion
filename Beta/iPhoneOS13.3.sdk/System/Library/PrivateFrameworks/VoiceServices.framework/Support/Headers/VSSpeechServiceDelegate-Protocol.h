/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
 */

#import <voiced_tts/Swift-Protocol.h>

@protocol VSSpeechServiceDelegate <Swift>

- (unsigned short)speechRequestDidStart;
- (unsigned short)speechRequestDidPause;
- (unsigned short)speechRequestDidContinue;
- (unsigned short)speechRequestMark:didStartForRange: /* Error: Ran out of types for this method. */;
- (unsigned short)speechRequestDidStopWithSuccess:phonemesSpoken:error: /* Error: Ran out of types for this method. */;
- (unsigned short)speechRequestSuccessWithInstrumentMetrics: /* Error: Ran out of types for this method. */;
- (unsigned short)speechRequestDidReceiveTimingInfo: /* Error: Ran out of types for this method. */;
- (unsigned short)synthesisRequest:didReceiveTimingInfo: /* Error: Ran out of types for this method. */;
- (unsigned short)synthesisRequest:didFinishWithInstrumentMetrics:error: /* Error: Ran out of types for this method. */;
- (unsigned short)presynthesizedAudioRequestDidStart;
- (unsigned short)presynthesizedAudioRequestDidStopAtEnd:error: /* Error: Ran out of types for this method. */;
- (unsigned short)presynthesizedAudioRequestSuccessWithInstrumentMetrics:error: /* Error: Ran out of types for this method. */;

@end

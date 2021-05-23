/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <VoiceServices/Swift-Protocol.h>

@class MISSING_TYPE;

@protocol VSSpeechServiceDelegate <Swift>

- (MISSING_TYPE *)speechRequestDidStart;
- (MISSING_TYPE *)speechRequestDidPause;
- (MISSING_TYPE *)speechRequestDidContinue;
- (MISSING_TYPE *)speechRequestMark:didStartForRange: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)speechRequestDidStopWithSuccess:phonemesSpoken:error: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)speechRequestSuccessWithInstrumentMetrics: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)speechRequestDidReceiveTimingInfo: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)synthesisRequest:didReceiveTimingInfo: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)synthesisRequest:didFinishWithInstrumentMetrics:error: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)presynthesizedAudioRequestDidStart;
- (MISSING_TYPE *)presynthesizedAudioRequestDidStopAtEnd:error: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)presynthesizedAudioRequestSuccessWithInstrumentMetrics:error: /* Error: Ran out of types for this method. */;

@end

/*
 Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
 */

#import <TextToSpeech/Swift-Protocol.h>

@class NSObject;

@protocol OS_dispatch_queue;

@protocol TTSSpeechService <Swift>

@property (nonatomic) NSObject<OS_dispatch_queue> *serviceQueue;

- (unsigned short)startSpeechRequest: /* Error: Ran out of types for this method. */;
- (unsigned short)initializeSpeechServerInstance: /* Error: Ran out of types for this method. */;
- (unsigned short)synthesizerInstanceDestroyed: /* Error: Ran out of types for this method. */;
- (unsigned short)pauseSpeechRequest:atMark: /* Error: Ran out of types for this method. */;
- (unsigned short)continueSpeechRequest: /* Error: Ran out of types for this method. */;
- (unsigned short)stopSpeechRequest:atMark: /* Error: Ran out of types for this method. */;
- (unsigned short)getVoicesForLanguage:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)getSpeechIsActiveForRequest:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)supportedIPAPhonemeLanguages;
- (unsigned short)speechMarkupStringForType:voice:string: /* Error: Ran out of types for this method. */;
- (unsigned short)isVoiceValid: /* Error: Ran out of types for this method. */;

@end

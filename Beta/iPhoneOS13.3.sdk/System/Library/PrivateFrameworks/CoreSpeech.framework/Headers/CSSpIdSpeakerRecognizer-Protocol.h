/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <CoreSpeech/Swift-Protocol.h>

@class NSDictionary;

@protocol CSSpIdSpeakerRecognizer <Swift>

@property (nonatomic, readonly) NSDictionary *lastSpeakerIdInfo;

- (unsigned short)initWithContext:delegate: /* Error: Ran out of types for this method. */;
- (unsigned short)processAudioChunk: /* Error: Ran out of types for this method. */;
- (unsigned short)setCVTTriggerPhraseDetected;
- (unsigned short)recordingStoppedForReason: /* Error: Ran out of types for this method. */;
- (unsigned short)processMyriadDecision: /* Error: Ran out of types for this method. */;

@end

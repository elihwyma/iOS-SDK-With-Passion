/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
 */

#import <voiced_tts/Swift-Protocol.h>

@protocol AFAudioPowerProviding <Swift>

- (unsigned short)willBeginAccessPower;
- (unsigned short)getAveragePower:andPeakPower: /* Error: Ran out of types for this method. */;
- (unsigned short)didEndAccessPower;

@end

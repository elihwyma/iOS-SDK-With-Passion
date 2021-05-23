/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <AVFoundation/AVSpeechSynthesisVoice.h>

@interface AVAlexSpeechSynthesisVoice : AVSpeechSynthesisVoice

- (id)name;
- (id)identifier;
- (id)language;
- (long long)quality;
- (id)nameWithoutQuality;

@end

/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

#import <Foundation/NSObject.h>

@class AVSpeechSynthesisVoice, NSAttributedString, NSString;

@interface AVSpeechUtterance : NSObject

{
    AVSpeechSynthesisVoice *_voice;
    float _rate;
    float _pitchMultiplier;
    float _volume;
    NSString *_speechString;
    NSAttributedString *_attributedSpeechString;
    double _preUtteranceDelay;
    double _postUtteranceDelay;
}

@property (retain, nonatomic) NSString *speechString;
@property (retain, nonatomic) NSAttributedString *attributedSpeechString;
@property (retain, nonatomic) AVSpeechSynthesisVoice *voice;
@property (nonatomic) float rate;
@property (nonatomic) float pitchMultiplier;
@property (nonatomic) float volume;
@property (nonatomic) double preUtteranceDelay;
@property (nonatomic) double postUtteranceDelay;

+ (void)initialize;
+ (_Bool)supportsSecureCoding;
+ (id)speechUtteranceWithString:(id)arg1;
+ (id)speechUtteranceWithAttributedString:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)initWithAttributedString:(id)arg1;

@end

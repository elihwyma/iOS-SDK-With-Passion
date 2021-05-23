/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

#import <Foundation/NSObject.h>

@class AVAudioDeviceTestProcessingChain, NSString, NSURL;

@interface AVAudioDeviceTestSequence : NSObject

{
    _Bool _calculateCrossCorrelationPeak;
    float _volume;
    long long _outputID;
    NSURL *_stimulusURL;
    AVAudioDeviceTestProcessingChain *_inputProcessingChain;
    AVAudioDeviceTestProcessingChain *_outputProcessingChain;
    long long _outputMode;
    NSString *_mode;
}

@property (nonatomic) long long outputID;
@property (nonatomic) float volume;
@property (retain, nonatomic) NSURL *stimulusURL;
@property (retain, nonatomic) AVAudioDeviceTestProcessingChain *inputProcessingChain;
@property (retain, nonatomic) AVAudioDeviceTestProcessingChain *outputProcessingChain;
@property (nonatomic) long long outputMode;
@property (retain) NSString *mode;
@property _Bool calculateCrossCorrelationPeak;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

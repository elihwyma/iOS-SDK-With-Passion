/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVAudioMix.h>

@class AVMutableAudioMixInternal, NSArray;

@interface AVMutableAudioMix : AVAudioMix

{
    AVMutableAudioMixInternal *_mutableAudioMix;
}

@property (copy, nonatomic) NSArray *inputParameters;

+ (id)audioMix;

@end

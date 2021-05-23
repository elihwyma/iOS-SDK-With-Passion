/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

#import <Foundation/NSObject.h>

@class AVAudioUnitEQFilterParameters;

@interface AVAudioEnvironmentReverbParameters : NSObject

{
    void *_impl;
}

@property (nonatomic) _Bool enable;
@property (nonatomic) float level;
@property (nonatomic, readonly) AVAudioUnitEQFilterParameters *filterParameters;

- (id)init;
- (void)dealloc;
- (id)initWithEnvironment:(struct AVAudioEnvironmentNodeImpl *)arg1;
- (void)loadFactoryReverbPreset:(long long)arg1;

@end

/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

#import <Foundation/NSObject.h>

@interface AVAudioUnitEQFilterParameters : NSObject

{
    void *_impl;
}

@property (nonatomic) long long filterType;
@property (nonatomic) float frequency;
@property (nonatomic) float bandwidth;
@property (nonatomic) float gain;
@property (nonatomic) _Bool bypass;

- (id)init;
- (void)dealloc;
- (id)initWithImpl:(struct AVAudioUnitEQFilterParametersImpl *)arg1;

@end

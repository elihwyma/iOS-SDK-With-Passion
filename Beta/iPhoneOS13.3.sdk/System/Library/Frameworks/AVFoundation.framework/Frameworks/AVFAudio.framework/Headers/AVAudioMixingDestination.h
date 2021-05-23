/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

#import <Foundation/NSObject.h>

@class AVAudioConnectionPoint, NSString;

@interface AVAudioMixingDestination : NSObject

{
    void *_impl;
}

@property (nonatomic, readonly) AVAudioConnectionPoint *connectionPoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) float volume;

- (id)init;
- (void)dealloc;
- (struct AVAudio3DPoint)position;
- (void)setPosition:(struct AVAudio3DPoint)arg1;
- (void)setPan:(float)arg1;
- (float)pan;
- (void)setRate:(float)arg1;
- (float)rate;
- (struct AVAudioMixingImpl *)implementation;
- (id)initWithImpl:(struct AVAudioMixingImpl *)arg1;
- (long long)renderingAlgorithm;
- (void)setRenderingAlgorithm:(long long)arg1;
- (long long)sourceMode;
- (void)setSourceMode:(long long)arg1;
- (long long)pointSourceInHeadMode;
- (void)setPointSourceInHeadMode:(long long)arg1;
- (float)reverbBlend;
- (void)setReverbBlend:(float)arg1;
- (float)obstruction;
- (void)setObstruction:(float)arg1;
- (float)occlusion;
- (void)setOcclusion:(float)arg1;
- (id)destinationForMixer:(id)arg1 bus:(unsigned long long)arg2;

@end

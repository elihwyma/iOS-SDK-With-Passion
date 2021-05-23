/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

#import <Foundation/NSObject.h>

@class AVAudioUnit;

@interface AVMusicTrack : NSObject

{
    void *_impl;
}

@property (retain, nonatomic) AVAudioUnit *destinationAudioUnit;
@property (nonatomic) unsigned int destinationMIDIEndpoint;
@property (nonatomic) struct _AVBeatRange loopRange;
@property (nonatomic, getter=isLoopingEnabled) _Bool loopingEnabled;
@property (nonatomic) long long numberOfLoops;
@property (nonatomic) double offsetTime;
@property (nonatomic, getter=isMuted) _Bool muted;
@property (nonatomic, getter=isSoloed) _Bool soloed;
@property (nonatomic) double lengthInBeats;
@property (nonatomic) double lengthInSeconds;
@property (nonatomic, readonly) unsigned long long timeResolution;

- (void)dealloc;
- (unsigned long long)index;
- (id)initWithImpl:(struct MusicTrackImpl *)arg1;
- (struct OpaqueMusicTrack *)track;
- (_Bool)usesAutomatedParameters;
- (void)setUsesAutomatedParameters:(_Bool)arg1;

@end

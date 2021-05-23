/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

#import <Foundation/NSObject.h>

@class AVMusicTrack, NSArray, NSDictionary;

@interface AVAudioSequencer : NSObject

{
    void *_impl;
}

@property (nonatomic) double currentPositionInSeconds;
@property (nonatomic) double currentPositionInBeats;
@property (nonatomic, readonly, getter=isPlaying) _Bool playing;
@property (nonatomic) float rate;
@property (nonatomic, readonly) NSArray *tracks;
@property (nonatomic, readonly) AVMusicTrack *tempoTrack;
@property (nonatomic, readonly) NSDictionary *userInfo;

- (id)init;
- (void)dealloc;
- (void)stop;
- (void)prepareToPlay;
- (id)initWithImpl:(struct AVAudioSequencerImpl *)arg1;
- (_Bool)startAndReturnError:(id *)arg1;
- (id)initWithAudioEngine:(id)arg1;
- (unsigned long long)numberOfTracks;
- (void)cleanTracks;
- (void)setupTrackArray;
- (void)setupTracks;
- (_Bool)loadFromURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)loadFromData:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)writeToURL:(id)arg1 SMPTEResolution:(long long)arg2 replaceExisting:(_Bool)arg3 error:(id *)arg4;
- (id)dataWithSMPTEResolution:(long long)arg1 error:(id *)arg2;
- (id)getTempoTrack;
- (double)secondsForBeats:(double)arg1;
- (double)beatsForSeconds:(double)arg1;
- (void)setTrackArray:(id)arg1;
- (id)trackArray;
- (void)setTempoTrack:(id)arg1;
- (unsigned long long)hostTimeForBeats:(double)arg1 error:(id *)arg2;
- (double)beatsForHostTime:(unsigned long long)arg1 error:(id *)arg2;

@end

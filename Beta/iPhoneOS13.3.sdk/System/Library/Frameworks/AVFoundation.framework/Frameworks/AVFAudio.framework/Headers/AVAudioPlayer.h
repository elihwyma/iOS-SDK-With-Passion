/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

#import <Foundation/NSObject.h>

@class AVAudioFormat, NSArray, NSData, NSDictionary, NSString, NSURL;

@protocol AVAudioPlayerDelegate;

@interface AVAudioPlayer : NSObject

{
    id _impl;
    NSString *_currentDevice;
}

@property (readonly, getter=isPlaying) _Bool playing;
@property (readonly) unsigned long long numberOfChannels;
@property (readonly) double duration;
@property (copy) NSString *currentDevice;
@property (weak) id <AVAudioPlayerDelegate> delegate;
@property (readonly) NSURL *url;
@property (readonly) NSData *data;
@property float pan;
@property float volume;
@property _Bool enableRate;
@property float rate;
@property double currentTime;
@property (readonly) double deviceCurrentTime;
@property long long numberOfLoops;
@property (readonly) NSDictionary *settings;
@property (readonly) AVAudioFormat *format;
@property (getter=isMeteringEnabled) _Bool meteringEnabled;
@property (copy, nonatomic) NSArray *channelAssignments;

- (id)init;
- (void)dealloc;
- (void)finalize;
- (void)pause;
- (void)stop;
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (_Bool)play;
- (id)impl;
- (_Bool)prepareToPlay;
- (void)handleInterruption:(id)arg1;
- (id)audioSession;
- (void)setAudioSession:(id)arg1;
- (void)beginInterruption;
- (void)endInterruptionWithFlags:(id)arg1;
- (void)endInterruption;
- (id)initBase;
- (void)updateMeters;
- (float)peakPowerForChannel:(unsigned long long)arg1;
- (float)averagePowerForChannel:(unsigned long long)arg1;
- (id)initWithContentsOfURL:(id)arg1 fileTypeHint:(id)arg2 error:(id *)arg3;
- (id)initWithData:(id)arg1 fileTypeHint:(id)arg2 error:(id *)arg3;
- (_Bool)playAtTime:(double)arg1;
- (void)setVolume:(float)arg1 fadeDuration:(double)arg2;
- (_Bool)mixToUplink;
- (void)setMixToUplink:(_Bool)arg1;
- (void)privRemoveSessionListener;
- (void)finishedPlaying:(id)arg1;
- (void)decodeError:(id)arg1;

@end

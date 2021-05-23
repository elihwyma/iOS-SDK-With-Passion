/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class FMTrack, NSDictionary;

@protocol FlexSongProtocol;

@interface FMSongRendition : NSObject

{
    FMTrack *_trackA;
    FMTrack *_trackB;
    NSDictionary *_options;
    long long _duration;
    long long _durationOfSilence;
    long long _durationOfMusic;
    NSObject<FlexSongProtocol> *_song;
}

@property (retain, nonatomic) NSObject<FlexSongProtocol> *song;
@property (retain, nonatomic) FMTrack *trackA;
@property (retain, nonatomic) FMTrack *trackB;
@property (nonatomic) long long duration;
@property (nonatomic) long long durationOfSilence;
@property (nonatomic) long long durationOfMusic;
@property (nonatomic, readonly) NSDictionary *options;

+ (id)coalesceMixParamsA:(id)arg1 withMixParamsB:(id)arg2;

- (id)description;
- (id)timedMetadataItemsWithIdentifier:(id)arg1;
- (id)avCompositionWithAudioMix:(id *)arg1 includeShortenedOutroFadeOut:(_Bool)arg2;
- (double)_maxPeakAndLoudness:(double *)arg1 missingPeakValueCount:(int *)arg2 missingLoudnessCount:(int *)arg3;
- (id)initWithSong:(id)arg1 andOptions:(id)arg2;
- (id)_buildOutroFadeoutMixParams;

@end

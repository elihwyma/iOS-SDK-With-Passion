/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/FMSongRendition.h>

@class NSArray;

@interface FlexLegacySongRendition : FMSongRendition

{
    NSArray *_segments;
    long long _durationOfUsedOutro;
    long long _durationOfFullOutro;
}

@property (retain, nonatomic) NSArray *segments;
@property (nonatomic) long long durationOfUsedOutro;
@property (nonatomic) long long durationOfFullOutro;

+ (long long)_durationOfOutroForPlaylist:(id)arg1 onlyUsedDuration:(_Bool)arg2;

- (void)_buildTracksFromSegments:(id)arg1;
- (id)_buildOutroFadeoutMixParams;
- (id)initWithSong:(id)arg1 segments:(id)arg2 withOptions:(id)arg3;

@end

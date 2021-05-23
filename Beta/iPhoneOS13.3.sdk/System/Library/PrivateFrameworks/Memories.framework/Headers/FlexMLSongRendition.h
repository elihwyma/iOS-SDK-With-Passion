/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/FMSongRendition.h>

@class FlexMLSummary;

@interface FlexMLSongRendition : FMSongRendition

{
    FlexMLSummary *_summary;
}

@property (retain, nonatomic) FlexMLSummary *summary;

- (void)_calculateDuration:(CDStruct_1b6d18a9)arg1;
- (void)_buildTracks;
- (id)initWithSong:(id)arg1 options:(id)arg2 andSummary:(id)arg3 forDuration:(CDStruct_1b6d18a9)arg4;
- (id)_buildOutroFadeoutMixParams;

@end

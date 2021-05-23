/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/AudioClip.h>

@class FMSong, FMSongRendition;

__attribute__((visibility("hidden")))
@interface FlexAudioClip : AudioClip

{
    _Bool _lockedRendition;
    FMSongRendition *_songRendition;
    FMSong *_song;
}

@property (retain, nonatomic) FMSong *song;
@property (retain, nonatomic) FMSongRendition *songRendition;
@property (nonatomic, readonly) int sampleRate;
@property (nonatomic) _Bool lockedRendition;

+ (id)backgroundClipWithSong:(id)arg1;
+ (id)optionsForSong:(id)arg1 withDuration:(double)arg2;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (int)duration;
- (void)setDuration:(int)arg1;
- (int)clipType;
- (void)setSongUID:(id)arg1;
- (id)songUID;
- (int)rawSourceDuration;
- (id)plistRepresentationFromProject:(id)arg1;
- (void)setContentsFromPlist:(id)arg1 inProject:(id)arg2;
- (void)refreshSong;
- (void)generateEdits;
- (void)outroStingerTime:(CDStruct_1b6d18a9 *)arg1 earlyFadeStartTime:(CDStruct_1b6d18a9 *)arg2 endTime:(CDStruct_1b6d18a9 *)arg3;

@end

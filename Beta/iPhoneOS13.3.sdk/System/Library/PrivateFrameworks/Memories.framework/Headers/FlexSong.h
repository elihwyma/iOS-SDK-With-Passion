/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/FlexSongBackend.h>

@interface FlexSong : FlexSongBackend

+ (id)loadSongInFolderWithPath:(id)arg1;
+ (id)numberToString:(long long)arg1;
+ (long long)_findMaxLengthInSamplesToReserveForOutroSegment:(id)arg1 withOptions:(id)arg2;
+ (long long)_findEarlyFadeStartOffsetInSamplesForOutroSegment:(id)arg1 withOptions:(id)arg2;
+ (long long)_findMinLengthInSamplesForEarlyFadeOutForOutroSegment:(id)arg1 withOptions:(id)arg2;
+ (long long)_durationInSamplesToReserveForOutroSegment:(id)arg1 withOptions:(id)arg2;
+ (id)outroInfoForClipPlaylist:(id)arg1;
+ (_Bool)_transitionIsPossibleFromSegment:(id)arg1 toSegment:(id)arg2 forBodyClipPlaylist:(id)arg3;

@end

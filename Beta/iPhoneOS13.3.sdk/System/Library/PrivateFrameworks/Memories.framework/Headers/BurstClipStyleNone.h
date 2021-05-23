/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/BurstClipStyle.h>

__attribute__((visibility("hidden")))
@interface BurstClipStyleNone : BurstClipStyle

- (double)maximumDuration;
- (_Bool)isSupported;
- (double)minimumDuration;
- (double)idealDuration;
- (id)containedClipsWithoutTransitions;
- (id)containedClipsWithInTransition:(id)arg1 outTransition:(id)arg2;
- (void)adjustDurationsOfClips:(id)arg1 withInTransition:(id)arg2 outTransition:(id)arg3;

@end

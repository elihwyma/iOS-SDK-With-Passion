/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/BurstClipStylePhoto.h>

__attribute__((visibility("hidden")))
@interface BurstClipStylePhotoDissolvePop : BurstClipStylePhoto

- (double)maximumDuration;
- (double)minimumDuration;
- (double)idealDuration;
- (unsigned long long)_minimumNumberOfContainedClips;
- (unsigned long long)_idealNumberOfContainedClips;
- (id)containedClipsWithoutTransitions;
- (unsigned long long)_maximumNumberOfContainedClips;
- (id)containedClipsWithInTransition:(id)arg1 outTransition:(id)arg2;
- (void)adjustDurationsOfClips:(id)arg1 withInTransition:(id)arg2 outTransition:(id)arg3;
- (double)minimumRegularClipDuration;
- (double)minimumLastClipDuration;
- (double)idealRegularClipDuration;
- (double)idealLastClipDuration;
- (double)maximumRegularClipDuration;
- (double)maximumLastClipDuration;
- (double)clipLastClipRatio;

@end

/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/BurstClipStyle.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BurstClipStylePhoto : BurstClipStyle

{
    int _transitionFrameDuration;
    NSString *_transitionName;
}

@property (copy, nonatomic) NSString *transitionName;
@property (nonatomic) int transitionFrameDuration;

- (double)maximumDuration;
- (_Bool)isSupported;
- (double)minimumDuration;
- (double)idealDuration;
- (unsigned long long)numberOfAvailableClips;
- (unsigned long long)_minimumNumberOfContainedClips;
- (unsigned long long)_idealNumberOfContainedClips;
- (double)idealContainedClipDuration;
- (double)maximumContainedClipDuration;
- (id)containedClipsWithoutTransitions;
- (unsigned long long)_maximumNumberOfContainedClips;
- (double)minimumContainedClipDuration;
- (id)containedClipsWithInTransition:(id)arg1 outTransition:(id)arg2;
- (void)adjustDurationsOfClips:(id)arg1 withInTransition:(id)arg2 outTransition:(id)arg3;

@end

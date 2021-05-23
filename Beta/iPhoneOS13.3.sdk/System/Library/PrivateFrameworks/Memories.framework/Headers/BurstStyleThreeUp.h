/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/BurstClipStylePhoto.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface BurstStyleThreeUp : BurstClipStylePhoto

{
    UIColor *_gapColor;
    UIColor *_popBackgroundColor;
}

@property (retain, nonatomic) UIColor *gapColor;
@property (retain, nonatomic) UIColor *popBackgroundColor;
@property (nonatomic) int transitionFrameDuration;

- (double)maximumDuration;
- (_Bool)isSupported;
- (id)transitionName;
- (double)idealDuration;
- (unsigned long long)numberOfAvailableClips;
- (unsigned long long)_minimumNumberOfContainedClips;
- (unsigned long long)_idealNumberOfContainedClips;
- (double)idealContainedClipDuration;
- (double)maximumContainedClipDuration;
- (unsigned long long)numberOfPossibleClips;
- (id)containedClipsWithoutTransitions;
- (unsigned long long)_maximumNumberOfContainedClips;
- (double)minimumContainedClipDuration;
- (id)containedClipsWithInTransition:(id)arg1 outTransition:(id)arg2;

@end

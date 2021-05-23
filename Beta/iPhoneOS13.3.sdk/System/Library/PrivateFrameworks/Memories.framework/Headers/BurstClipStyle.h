/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class BurstClip;

__attribute__((visibility("hidden")))
@interface BurstClipStyle : NSObject

{
    BurstClip *_burstClip;
}

@property (weak, nonatomic) BurstClip *burstClip;
@property (nonatomic, readonly) double minimumPhotoDuration;
@property (nonatomic, readonly) double idealPhotoDuration;
@property (nonatomic, readonly) double maximumPhotoDuration;
@property (nonatomic, readonly) double minimumVideoDuration;
@property (nonatomic, readonly) double idealVideoDuration;

- (int)duration;
- (double)maximumDuration;
- (_Bool)isSupported;
- (double)minimumDuration;
- (int)projectFrameRate;
- (id)sourceClips;
- (double)idealDuration;
- (void)turnOffKenBurnsForClips:(id)arg1;
- (id)containedClipsWithoutTransitions;
- (id)containedClipsWithInTransition:(id)arg1 outTransition:(id)arg2;
- (void)adjustDurationsOfClips:(id)arg1 withInTransition:(id)arg2 outTransition:(id)arg3;
- (double)projectAspectRatio;

@end

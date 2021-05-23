/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/IrisClipStyle.h>

__attribute__((visibility("hidden")))
@interface IrisClipStyleTransition : IrisClipStyle

{
    _Bool _buildIntro;
    _Bool _buildOutro;
    _Bool _videoContainedWithinTransitions;
    int _containedTransitionOverlapOffset;
}

@property (nonatomic, readonly) int containedTransitionOverlapOffset;
@property (nonatomic) _Bool buildIntro;
@property (nonatomic) _Bool buildOutro;
@property (nonatomic) _Bool videoContainedWithinTransitions;

- (double)maximumDuration;
- (double)minimumDuration;
- (double)idealDuration;
- (id)containedClipsWithInTransition:(id)arg1 outTransition:(id)arg2;
- (int)minimumPhotoFrameDuration;
- (struct _NSRange)preferredInTransitionDurationRange;
- (struct _NSRange)preferredOutTransitionDurationRange;

@end

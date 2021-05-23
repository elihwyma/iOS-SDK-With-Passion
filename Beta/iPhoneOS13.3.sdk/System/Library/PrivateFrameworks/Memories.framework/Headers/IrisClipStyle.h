/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class IrisClip;

__attribute__((visibility("hidden")))
@interface IrisClipStyle : NSObject

{
    IrisClip *_irisClip;
}

@property (weak, nonatomic) IrisClip *irisClip;

- (int)duration;
- (double)maximumDuration;
- (double)minimumDuration;
- (int)projectFrameRate;
- (double)idealDuration;
- (id)containedClipsWithInTransition:(id)arg1 outTransition:(id)arg2;
- (double)minimumPhotoDuration;
- (double)idealPhotoDuration;
- (double)maximumPhotoDuration;
- (double)projectAspectRatio;
- (void)adjustGeometryOfIntroClip:(id)arg1 outroClip:(id)arg2;
- (struct _NSRange)preferredInTransitionDurationRange;
- (struct _NSRange)preferredOutTransitionDurationRange;
- (_Bool)buildIntro;
- (_Bool)buildOutro;

@end

/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <NSObject.h>

@class AVPlayerController;

__attribute__((visibility("hidden")))
@interface AVPlayerControllerVolumeAnimator : NSObject

{
    _Bool _animatingTowardsZero;
    _Bool _animatingAwayFromZero;
    AVPlayerController *_playerController;
    double _volumeToRestore;
}

@property (nonatomic) double volumeToRestore;
@property (nonatomic, getter=isAnimatingTowardsZero) _Bool animatingTowardsZero;
@property (nonatomic, getter=isAnimatingAwayFromZero) _Bool animatingAwayFromZero;
@property (nonatomic, readonly) AVPlayerController *playerController;

- (_Bool)currentRouteHasVolumeControl;
- (id)initWithPlayerController:(id)arg1;
- (_Bool)canAnimateVolumeTowardsZero;
- (_Bool)canAnimateVolumeAwayFromZero;
- (void)setProgressTowardsZero:(double)arg1;
- (void)setProgressAwayFromZero:(double)arg1;
- (void)restoreVolumeIfNeeded;

@end

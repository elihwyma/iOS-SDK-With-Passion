/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <AVKit/AVNewsWidgetPlayerBehavior.h>

@protocol AVPlayerViewControllerContentTransitioning_NewsOnly;

__attribute__((visibility("hidden")))
@interface AVNewsWidgetPlayerLegacyBehavior : AVNewsWidgetPlayerBehavior

{
    id <AVPlayerViewControllerContentTransitioning_NewsOnly> _legacyDelegate;
}

@property (weak, nonatomic) id <AVPlayerViewControllerContentTransitioning_NewsOnly> legacyDelegate;

- (id)playerForContentTransitionType:(long long)arg1;
- (void)willBeginContentTransition;
- (void)didUpdateContentTransitionProgress:(double)arg1;
- (void)willCompleteContentTransition;
- (void)didCompleteContentTransition;
- (void)willCancelContentTransition;
- (void)didCancelContentTransition;

@end

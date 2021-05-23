/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUNavigationTransition.h>

__attribute__((visibility("hidden")))
@interface PUCrossfadeNavigationTransition : PUNavigationTransition

- (id)init;
- (void)_animateTransition;
- (void)animatePushTransition;
- (void)animatePopTransition;

@end

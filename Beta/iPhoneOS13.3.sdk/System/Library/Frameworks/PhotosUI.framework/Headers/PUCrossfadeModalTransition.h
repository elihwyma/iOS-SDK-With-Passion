/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUModalTransition.h>

__attribute__((visibility("hidden")))
@interface PUCrossfadeModalTransition : PUModalTransition

- (id)init;
- (void)animatePresentTransition;
- (void)animateDismissTransition;

@end

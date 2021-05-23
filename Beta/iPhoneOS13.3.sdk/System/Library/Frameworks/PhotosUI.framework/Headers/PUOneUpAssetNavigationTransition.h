/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUNavigationTransition.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PUOneUpAssetNavigationTransition : PUNavigationTransition

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)animatePushTransition;
- (void)animatePopTransition;
- (void)_animateTransitionWithOperation:(long long)arg1;
- (void)_prepareViewForTransition;

@end

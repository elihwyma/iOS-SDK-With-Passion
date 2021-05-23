/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXZoomAnimationCoordinator.h>

@class UIViewController;

__attribute__((visibility("hidden")))
@interface _PHUIViewControllerDefaultZoomAnimationCoordinator : PXZoomAnimationCoordinator

{
    UIViewController *_viewController;
}

@property (retain, nonatomic) UIViewController *viewController;

- (id)init;
- (id)initWithViewController:(id)arg1;
- (void)animateContentForEndPointType:(long long)arg1 withZoomAnimationContext:(id)arg2;
- (void)animateContentForEndPointType:(long long)arg1 inView:(id)arg2 withLayerType:(long long)arg3 zoomAnimationContext:(id)arg4;

@end

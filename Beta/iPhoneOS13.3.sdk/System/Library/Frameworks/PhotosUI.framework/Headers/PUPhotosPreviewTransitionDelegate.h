/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/_UIPreviewTransitionDelegate.h>

@protocol PUPhotosPreviewPresentationControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUPhotosPreviewTransitionDelegate : _UIPreviewTransitionDelegate

{
    id <PUPhotosPreviewPresentationControllerDelegate> _photosPreviewingDelegate;
}

@property (weak, nonatomic) id <PUPhotosPreviewPresentationControllerDelegate> photosPreviewingDelegate;

- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;

@end

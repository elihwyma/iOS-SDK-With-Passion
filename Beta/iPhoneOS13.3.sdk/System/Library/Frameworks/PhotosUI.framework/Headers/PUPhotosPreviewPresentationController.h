/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/_UIPreviewPresentationController.h>

@protocol PUPhotosPreviewPresentationControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUPhotosPreviewPresentationController : _UIPreviewPresentationController

{
    id <PUPhotosPreviewPresentationControllerDelegate> _photosPreviewingDelegate;
}

@property (weak, nonatomic) id <PUPhotosPreviewPresentationControllerDelegate> photosPreviewingDelegate;

- (void)_revealTransitionDidComplete:(_Bool)arg1;

@end

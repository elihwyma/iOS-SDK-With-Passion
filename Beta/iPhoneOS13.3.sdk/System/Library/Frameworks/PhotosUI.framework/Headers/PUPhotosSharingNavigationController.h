/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUNavigationController.h>

@class PUPhotosSharingViewController;

@interface PUPhotosSharingNavigationController : PUNavigationController

{
    _Bool _didStartDelayingPresentation;
    PUPhotosSharingViewController *_sharingViewController;
}

- (void)_viewControllerPresentationDidInitiate;
- (void)shareSheetIsReadyForPresentation;
- (id)initWithSharingViewController:(id)arg1;

@end

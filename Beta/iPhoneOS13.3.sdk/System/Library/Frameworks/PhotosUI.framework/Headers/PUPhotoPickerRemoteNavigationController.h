/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UINavigationController.h>

@protocol PUPhotoPickerRemoteNavigationControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUPhotoPickerRemoteNavigationController : UINavigationController

{
    _Bool _initialized;
    id <PUPhotoPickerRemoteNavigationControllerDelegate> _remoteViewControllerdelegate;
}

@property (nonatomic, getter=isInitialized) _Bool initialized;
@property (weak, nonatomic) id <PUPhotoPickerRemoteNavigationControllerDelegate> remoteViewControllerdelegate;

- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (id)popToRootViewControllerAnimated:(_Bool)arg1;
- (id)popToViewController:(id)arg1 animated:(_Bool)arg2;
- (id)initWithRootViewController:(id)arg1;

@end

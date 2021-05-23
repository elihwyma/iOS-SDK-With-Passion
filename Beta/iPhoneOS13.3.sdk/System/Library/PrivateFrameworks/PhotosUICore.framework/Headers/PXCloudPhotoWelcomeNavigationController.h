/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UINavigationController.h>

@protocol PXCloudPhotoWelcomeNavigationControllerDismissDelegate;

@interface PXCloudPhotoWelcomeNavigationController : UINavigationController

{
    id <PXCloudPhotoWelcomeNavigationControllerDismissDelegate> _dismissDelegate;
}

@property (weak, nonatomic) id <PXCloudPhotoWelcomeNavigationControllerDismissDelegate> dismissDelegate;

+ (id)new;
+ (_Bool)shouldPresentWelcomeViewController:(_Bool *)arg1;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithRootViewController:(id)arg1;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;
- (id)initWithWelcomeController:(id)arg1;

@end

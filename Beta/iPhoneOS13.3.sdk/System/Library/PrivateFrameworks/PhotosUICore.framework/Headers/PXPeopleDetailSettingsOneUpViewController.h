/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIViewController.h>

@class UIImage;

@interface PXPeopleDetailSettingsOneUpViewController : UIViewController

{
    UIImage *_asset;
}

@property (retain, nonatomic) UIImage *asset;

- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)initWithAsset:(id)arg1;

@end

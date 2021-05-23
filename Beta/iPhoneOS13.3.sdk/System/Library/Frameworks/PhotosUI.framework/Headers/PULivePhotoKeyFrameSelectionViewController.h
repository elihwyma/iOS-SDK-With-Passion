/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIViewController.h>

@class NSString, UIButton;

@protocol PULivePhotoKeyFrameSelectionViewControllerDelegate;

@interface PULivePhotoKeyFrameSelectionViewController : UIViewController

{
    id <PULivePhotoKeyFrameSelectionViewControllerDelegate> _delegate;
    NSString *_selectionTitle;
    UIButton *_makeKeyPhotoBtn;
}

@property (retain, nonatomic) UIButton *makeKeyPhotoBtn;
@property (weak, nonatomic) id <PULivePhotoKeyFrameSelectionViewControllerDelegate> delegate;
@property (copy, nonatomic) NSString *selectionTitle;

- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (struct CGSize)preferredContentSize;
- (void)viewDidLoad;
- (void)_updateButtonTitle;
- (void)tapMakeKeyPhoto:(id)arg1;

@end

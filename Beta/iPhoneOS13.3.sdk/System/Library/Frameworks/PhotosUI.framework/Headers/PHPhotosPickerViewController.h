/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIViewController.h>

@class PHPhotosPickerOptions, PUPhotosPickerViewController, PUPhotosPickerViewControllerSpec;

@interface PHPhotosPickerViewController : UIViewController

{
    PUPhotosPickerViewController *_photosPickerViewController;
    PUPhotosPickerViewControllerSpec *_spec;
    PHPhotosPickerOptions *_options;
    CDUnknownBlockType _completionHandler;
}

@property (nonatomic, readonly) PHPhotosPickerOptions *options;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;

- (id)init;
- (id)initWithOptions:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)_commonPHPhotosPickerViewControllerInitializer;
- (void)_handlePickerViewControllerDidFinish:(id)arg1;
- (_Bool)_updateSpecIfNeeded;

@end

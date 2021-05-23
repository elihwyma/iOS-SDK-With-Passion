/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIViewController.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSString, SKUIClientContext, UIImagePickerController, UILabel, UIScrollView, UIView;

@protocol SKUIProfileImagePickerDelegate;

__attribute__((visibility("hidden")))
@interface SKUIProfileImagePicker : UIViewController <Swift>

{
    SKUIClientContext *_clientContext;
    UIView *_contentView;
    UILabel *_descriptionLabel;
    _Bool _firstApperance;
    UIImagePickerController *_imagePicker;
    UIScrollView *_scrollView;
    UILabel *_titleLabel;
    id <SKUIProfileImagePickerDelegate> _delegate;
}

@property (weak, nonatomic) id <SKUIProfileImagePickerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_fixCropRect:(id)arg1 forOriginalImage:(id)arg2;

- (void)loadView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)_didCancel;
- (id)initWithClientContext:(id)arg1;
- (void)_showImagePicker;
- (void)_showImageSourcePicker;
- (void)_presentImagePickerWithSourceType:(long long)arg1;

@end

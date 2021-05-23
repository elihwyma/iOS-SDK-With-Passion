/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

#import <ContactsUI/Swift-Protocol.h>

@class CNPhotoPickerProviderItem, CNPhotoPickerVariantsManager, NSString, UIImage, UIViewController;

@protocol AVTAvatarRecord, CNAvatarEditingManagerDelegate;

__attribute__((visibility("hidden")))
@interface CNAvatarEditingManager : NSObject <Swift>

{
    id <CNAvatarEditingManagerDelegate> _delegate;
    CNPhotoPickerProviderItem *_originalItem;
    id <AVTAvatarRecord> _avatarRecord;
    UIViewController *_viewController;
    CNPhotoPickerVariantsManager *_variantsManager;
    UIImage *_imageWithAlpha;
}

@property (nonatomic, readonly) id <AVTAvatarRecord> avatarRecord;
@property (retain, nonatomic) UIViewController *viewController;
@property (nonatomic, readonly) CNPhotoPickerVariantsManager *variantsManager;
@property (retain, nonatomic) UIImage *imageWithAlpha;
@property (weak, nonatomic) id <CNAvatarEditingManagerDelegate> delegate;
@property (retain, nonatomic) CNPhotoPickerProviderItem *originalItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)croppedAndCenteredAvatarImageFor:(id)arg1;

- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)photoPickerVariantListController:(id)arg1 didSelectProviderItem:(id)arg2;
- (void)photoPickerVariantListControllerDidCancel:(id)arg1;
- (void)avatarCaptureController:(id)arg1 didCaptureImage:(id)arg2;
- (id)initWithAvatarRecord:(id)arg1 variantsManager:(id)arg2;
- (id)initForEditingWithAvatarRecord:(id)arg1 variantsManager:(id)arg2 fromViewController:(id)arg3;
- (id)captureFlashViewWithSize:(struct CGSize)arg1 alpha:(double)arg2;
- (id)fullScreenImageFromImage:(id)arg1 inSize:(struct CGSize)arg2;
- (struct CGRect)computeFullscreenImageRectForScreenWithSize:(struct CGSize)arg1;
- (id)renderImage:(id)arg1 inRect:(struct CGRect)arg2;
- (id)compositeImageDataForImage:(id)arg1 backgroundColor:(id)arg2;
- (void)presentImagePickerForImage:(id)arg1 fadeIn:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)imagePickerForItem:(id)arg1;
- (id)createImagePickerForEditingImageData:(id)arg1 withCropRect:(struct CGRect)arg2 customBackgroundColor:(id)arg3;

@end

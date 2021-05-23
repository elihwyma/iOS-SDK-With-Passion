/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/_UIRemoteViewController.h>

#import <PhotosUI/Swift-Protocol.h>

@class NSExtensionContext, NSString;

@protocol PUPhotoPickerHostService, PUPhotoPickerHostViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUPhotoPickerHostViewController : _UIRemoteViewController <Swift>

{
    _Bool __invalidated;
    NSExtensionContext *_hostExtensionContext;
    id <PUPhotoPickerHostViewControllerDelegate> _delegate;
}

@property (nonatomic, readonly) id <PUPhotoPickerHostService> hostProxy;
@property (nonatomic, getter=_isInvalidated) _Bool _invalidated;
@property (weak, nonatomic) id <PUPhotoPickerHostViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSExtensionContext *hostExtensionContext;

- (void)invalidate;
- (void)willMoveToParentViewController:(id)arg1;
- (void)performTraitCollectionUpdateWithCompletion:(CDUnknownBlockType)arg1;
- (void)performPhotoPickerPreviewOfFirstAsset;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (id)_hostContext;

@end

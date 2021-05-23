/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUPhotoPickerAbstractExtensionContext.h>

@class NSNumber, NSString, NSUUID;

@protocol PUPhotoPickerHostService;

__attribute__((visibility("hidden")))
@interface PUPhotoPickerExtensionHostContext : PUPhotoPickerAbstractExtensionContext

{
    _Bool _cachedDidDisplayPhotoPickerPreview;
    NSString *_photoPickerViewControllerTitle;
    NSString *_photoPickerViewControllerPrompt;
    NSNumber *_photoPickerNavigationBarHidden;
    id <PUPhotoPickerHostService> _delegate;
    NSUUID *_requestIdentifier;
    NSNumber *_cachedDidDisplayPhotoPickerSourceType;
}

@property (retain, nonatomic) NSNumber *cachedDidDisplayPhotoPickerSourceType;
@property (nonatomic) _Bool cachedDidDisplayPhotoPickerPreview;
@property (copy, nonatomic) NSString *photoPickerViewControllerTitle;
@property (copy, nonatomic) NSString *photoPickerViewControllerPrompt;
@property (retain, nonatomic) NSNumber *photoPickerNavigationBarHidden;
@property (weak, nonatomic) id <PUPhotoPickerHostService> delegate;
@property (retain, nonatomic) NSUUID *requestIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)completeRequestReturningItems:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)performPhotoPickerPreviewOfFirstAsset;
- (void)cancelPhotoPicker;
- (void)dismissCurrentViewControllerFromPhotoPickerAnimated:(id)arg1;
- (void)didDisplayPhotoPickerSourceType:(id)arg1;
- (void)didDisplayPhotoPickerPreview;
- (void)didSelectMediaWithInfoDictionary:(id)arg1;
- (void)didSelectMultipleMediaItemsWithInfoDictionaries:(id)arg1;
- (id)_remote;
- (void)initiatePhotoPickerSelection;
- (void)performTraitCollectionUpdateUsingData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)invalidatePhotoPickerHostServices;
- (id)_UIImagePickerControllerInfoDictionaryFromPhotoPickerInfoDictionary:(id)arg1;
- (id)_createURLFromPath:(id)arg1 token:(id)arg2;
- (id)_resizeImage:(id)arg1 toMaximumDimension:(double)arg2;
- (_Bool)_isHEIFImageFormatFromData:(id)arg1 url:(id)arg2;
- (id)_JPEGDataFromImageData:(id)arg1;
- (id)_JPEGDataFromImage:(id)arg1;
- (id)_pathExtensionFromData:(id)arg1 url:(id)arg2;

@end

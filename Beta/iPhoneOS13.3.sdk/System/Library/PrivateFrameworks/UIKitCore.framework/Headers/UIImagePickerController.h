/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UINavigationController.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSExtension, NSMutableDictionary, NSString, UIView, UIViewController, _UIRemoteViewController;

@protocol UINavigationControllerDelegate><UIImagePickerControllerDelegate;

@interface UIImagePickerController : UINavigationController <Swift>

{
    long long _sourceType;
    id _image;
    struct CGRect _cropRect;
    NSArray *_mediaTypes;
    NSMutableDictionary *_properties;
    int _previousStatusBarStyle;
    _Bool _previousStatusBarHidden;
    Class _photoPickerRequestOptionsClass;
    CDUnknownBlockType _photoPickerDisplayCompletion;
    CDUnknownBlockType _photoPickerPreviewDisplayCompletion;
    _Bool _photoPickerDidStartDelayingPresentation;
    _Bool _photoPickerDidEndDelayingPresentation;
    _Bool _photoPickerIsPreheating;
    UIViewController *_photoPickerPreheatedViewController;
    CDStruct_d1897728 _imagePickerFlags;
    unsigned long long _savingOptions;
    NSExtension *_photosExtension;
}

@property (retain, nonatomic) NSExtension *photosExtension;
@property (nonatomic, readonly) Class photoPickerRequestOptionsClass;
@property (weak, nonatomic) id <UINavigationControllerDelegate><UIImagePickerControllerDelegate> delegate;
@property (nonatomic) long long sourceType;
@property (copy, nonatomic) NSArray *mediaTypes;
@property (nonatomic) _Bool allowsEditing;
@property (nonatomic) _Bool allowsImageEditing;
@property (nonatomic) long long imageExportPreset;
@property (nonatomic) double videoMaximumDuration;
@property (nonatomic) long long videoQuality;
@property (copy, nonatomic) NSString *videoExportPreset;
@property (nonatomic) _Bool showsCameraControls;
@property (retain, nonatomic) UIView *cameraOverlayView;
@property (nonatomic) struct CGAffineTransform cameraViewTransform;
@property (nonatomic) long long cameraCaptureMode;
@property (nonatomic) long long cameraDevice;
@property (nonatomic) long long cameraFlashMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _UIRemoteViewController *_containedRemoteViewController;

+ (_Bool)isSourceTypeAvailable:(long long)arg1;
+ (_Bool)_isMediaTypeAvailable:(id)arg1 forSource:(long long)arg2;
+ (_Bool)isCameraDeviceAvailable:(long long)arg1;
+ (_Bool)_reviewCapturedItems;
+ (id)availableMediaTypesForSourceType:(long long)arg1;
+ (id)availableCaptureModesForCameraDevice:(long long)arg1;
+ (_Bool)isFlashAvailableForCameraDevice:(long long)arg1;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_properties;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)_isSupportedInterfaceOrientation:(long long)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)_populateArchivedChildViewControllers:(id)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewWillUnload;
- (id)_valueForProperty:(id)arg1;
- (void)_setAllowsImageEditing:(_Bool)arg1;
- (_Bool)_allowsImageEditing;
- (void)_setupControllersForCurrentSourceTypeWithCompletion:(CDUnknownBlockType)arg1;
- (void)_updateCameraCaptureMode;
- (void)_setupControllersForCurrentMediaTypes;
- (void)_setValue:(id)arg1 forProperty:(id)arg2;
- (void)_initializeProperties;
- (_Bool)_sourceTypeIsCamera;
- (id)_cameraViewController;
- (_Bool)_isCameraCaptureModeValid:(long long)arg1;
- (_Bool)_shouldDelayPresentation;
- (void)_removeAllChildren;
- (void)_handleTopViewControllerReadyForDisplay:(id)arg1;
- (void)_invalidatePhotoPickerServices;
- (void)_setPhotoPickerDisplayCompletion:(CDUnknownBlockType)arg1;
- (void)_setPhotoPickerPreviewDisplayCompletion:(CDUnknownBlockType)arg1;
- (void)_handleMatchingExtension:(id)arg1 viewControllerClassName:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_propertiesForPhotoPickerExtension;
- (void)_handleInstantiatedRemoteViewController:(id)arg1 request:(id)arg2 error:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_handleEndingPhotoPickerPresentationDelay;
- (_Bool)_allowsMultipleSelection;
- (unsigned long long)_imagePickerSavingOptions;
- (void)_imagePickerDidCancel;
- (void)_handlePushViewController:(id)arg1;
- (CDUnknownBlockType)_photoPickerDisplayCompletion;
- (CDUnknownBlockType)_photoPickerPreviewDisplayCompletion;
- (void)_imagePickerDidCompleteWithInfo:(id)arg1;
- (void)_imagePickerDidCompleteWithInfoArray:(id)arg1;
- (void)_createInitialControllerWithCompletion:(CDUnknownBlockType)arg1;
- (long long)_preferredModalPresentationStyle;
- (void)_autoDismiss;
- (id)_initWithSourceImageData:(id)arg1 cropRect:(struct CGRect)arg2;
- (void)_setAllowsMultipleSelection:(_Bool)arg1;
- (unsigned long long)_multipleSelectionLimit;
- (void)_setMultipleSelectionLimit:(unsigned long long)arg1;
- (_Bool)_requiresPickingConfirmation;
- (void)_setRequiresPickingConfirmation:(_Bool)arg1;
- (_Bool)_showsFileSizePicker;
- (void)_setShowsFileSizePicker:(_Bool)arg1;
- (_Bool)_onlyShowAutoloops;
- (void)_setOnlyShowAutoloops:(_Bool)arg1;
- (_Bool)_convertAutoloopsToGIF;
- (void)_setConvertAutoloopsToGIF:(_Bool)arg1;
- (_Bool)_showsPrompt;
- (void)_setShowsPrompt:(_Bool)arg1;
- (id)_staticPrompt;
- (void)_setStaticPrompt:(id)arg1;
- (id)_targetForPrompt;
- (void)_setTargetForPrompt:(id)arg1;
- (_Bool)_allowsIris;
- (void)_setAllowsIris:(_Bool)arg1;
- (void)_setProperties:(id)arg1;
- (void)_setImagePickerSavingOptions:(unsigned long long)arg1;
- (void)takePicture;
- (_Bool)startVideoCapture;
- (void)stopVideoCapture;
- (void)_viewControllerPresentationDidInitiate;
- (_Bool)_didRevertStatusBar;
- (void)_testPerformPreviewOfFirstPhoto;
- (void)cancelPhotoPicker;
- (void)dismissCurrentViewControllerFromPhotoPickerAnimated:(id)arg1;
- (void)requestViewControllerFromPhotoPickerWithRequestIdentifier:(id)arg1;
- (void)setPhotoPickerViewControllerTitle:(id)arg1;
- (void)didDisplayPhotoPickerSourceType:(id)arg1;
- (void)didDisplayPhotoPickerPreview;
- (void)didSelectMediaWithInfoDictionary:(id)arg1;
- (void)didSelectMultipleMediaItemsWithInfoDictionaries:(id)arg1;
- (struct CGSize)_adjustedContentSizeForPopover:(struct CGSize)arg1;

@end

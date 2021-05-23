/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXActivity.h>

@class NSObject, NSString, PUPhotoStreamComposeServiceViewController, PUVideoTrimQueueController, UIViewController;

@protocol PLUserEditableAlbumProtocol, PUAlbumStreamActivityDelegate, PXActivityItemSourceController;

__attribute__((visibility("hidden")))
@interface PUAlbumStreamActivity : PXActivity

{
    PUPhotoStreamComposeServiceViewController *_streamComposeVc;
    double _startTime;
    double _endTime;
    UIViewController *_presenterViewController;
    UIViewController *_activityController;
    PUVideoTrimQueueController *_trimController;
    _Bool _isPresentedFromActivityViewController;
    _Bool _destinationAlbumWasCreated;
    id <PXActivityItemSourceController> _itemSourceController;
    NSObject<PLUserEditableAlbumProtocol> *_destinationStreamingAlbum;
    UIViewController *_referenceViewController;
    id <PUAlbumStreamActivityDelegate> _albumStreamDelegate;
}

@property (retain, nonatomic) NSObject<PLUserEditableAlbumProtocol> *destinationStreamingAlbum;
@property _Bool destinationAlbumWasCreated;
@property (nonatomic, setter=setPresentedFromActivityViewController:) _Bool isPresentedFromActivityViewController;
@property (weak, nonatomic) UIViewController *referenceViewController;
@property (weak, nonatomic) id <PUAlbumStreamActivityDelegate> albumStreamDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (long long)activityCategory;
+ (void)_recordRecentInvitationRecipient:(id)arg1 displayName:(id)arg2 date:(id)arg3;
+ (id)customExportsOutputDirectoryForAsset:(id)arg1;
+ (id)customExportsOutputDirectoryParent;

- (id)init;
- (id)activityType;
- (id)_systemImageName;
- (id)activityTitle;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (void)prepareWithActivityItems:(id)arg1;
- (id)activityViewController;
- (id)_activityBundleImageConfiguration;
- (_Bool)_presentActivityOnViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)itemSourceController;
- (void)setItemSourceController:(id)arg1;
- (void)photoStreamComposeService:(id)arg1 didPostComment:(id)arg2;
- (void)photoStreamComposeServiceDidCancel:(id)arg1;
- (void)controller:(id)arg1 didFinishTrimmingVideoSources:(id)arg2;
- (void)controller:(id)arg1 didCancelTrimmingVideoSources:(id)arg2;
- (id)_selectedVideo;
- (void)_createStreamsPickerContainerWithExisting:(_Bool)arg1;
- (void)_handleDismissWithSuccess:(_Bool)arg1;
- (_Bool)_sharedAlbumAllowsAdding:(struct NSObject *)arg1;
- (void)_performPresentationOnViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentActivityOnViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_prepareToPost:(id)arg1 albumName:(id)arg2 recipients:(id)arg3 comments:(id)arg4;
- (void)_publishAssets:(id)arg1 withSharingInfos:(id)arg2 customExportsInfo:(id)arg3 andTrimmedVideoPathInfo:(id)arg4 toAlbum:(id)arg5 orCreateWithName:(id)arg6 comment:(id)arg7 invitationRecipients:(id)arg8 wantsPublicWebsite:(_Bool)arg9 completion:(CDUnknownBlockType)arg10;

@end

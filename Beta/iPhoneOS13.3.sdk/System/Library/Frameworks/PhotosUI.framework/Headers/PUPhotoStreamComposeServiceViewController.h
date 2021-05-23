/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Social/SLComposeServiceViewController.h>

@class NSArray, NSString;

@protocol PUPhotoStreamComposeServiceDelegate;

__attribute__((visibility("hidden")))
@interface PUPhotoStreamComposeServiceViewController : SLComposeServiceViewController

{
    struct {
        unsigned int hasDidPost:1;
        unsigned int hasDidCancel:1;
    } _delegateFlags;
    struct NSObject *_selectedAlbum;
    NSArray *_actions;
    struct NSObject *_albumList;
    _Bool _inCreateNewAlbum;
    NSArray *_recipients;
    _Bool _shouldShowPost;
    NSString *_itemCountString;
    _Bool _shouldAllowAlbumPicking;
    _Bool _addToExistingWorkflow;
    id <PUPhotoStreamComposeServiceDelegate> _delegate;
    CDUnknownBlockType _completion;
    NSString *_albumTitle;
}

@property (weak, nonatomic) id <PUPhotoStreamComposeServiceDelegate> delegate;
@property (nonatomic) _Bool shouldAllowAlbumPicking;
@property (copy, nonatomic) CDUnknownBlockType completion;
@property (nonatomic) _Bool addToExistingWorkflow;
@property (retain, nonatomic) NSString *albumTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)failWithError:(id)arg1;
- (void)cancel;
- (id)title;
- (void)send;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (void)shouldShowNetworkActivityIndicator:(id)arg1;
- (void)userDidCancel;
- (void)userDidPost;
- (id)serviceIconImage;
- (id)sheetActions;
- (void)albumStreamingCreateViewController:(id)arg1 didSucceed:(_Bool)arg2;
- (void)titleController:(id)arg1 didSetTitle:(id)arg2;
- (void)titleControllerDidCancel:(id)arg1;
- (void)controller:(id)arg1 didSelectAlbum:(struct NSObject *)arg2;
- (void)controllerWillCreateNewAlbum:(id)arg1;
- (void)setAssetsToShare:(id)arg1;
- (id)_imageFromStreamShareSource:(id)arg1;
- (void)setSourcesToShare:(id)arg1;
- (id)albumListAction;
- (void)sheetFailedWithError:(id)arg1;
- (void)sheetDidSendWithSucess:(id)arg1 error:(id)arg2;
- (void)userDidCancelWithoutAnimation;
- (void)_pushTitleController;

@end

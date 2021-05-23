/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIViewController.h>

@class PLCloudSharedAlbum, PUPhotoStreamRecipientViewController, UIBarButtonItem;

__attribute__((visibility("hidden")))
@interface PUAddSubscribersViewController : UIViewController

{
    PUPhotoStreamRecipientViewController *_composeRecipientController;
    UIBarButtonItem *_addButton;
    PLCloudSharedAlbum *_album;
}

@property (nonatomic, readonly) PLCloudSharedAlbum *album;

- (void)dealloc;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_keyboardWillShow:(id)arg1;
- (void)_dismiss;
- (id)contentScrollView;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (id)initWithSharedStream:(id)arg1;
- (void)_addButtonHandler;
- (void)_cancelButtonHandler;
- (void)_saveAndDismiss;
- (_Bool)_validateRecipientsToAdd:(id)arg1;
- (void)recipientViewControllerDidAddRecipient:(id)arg1;
- (void)recipientViewControllerDidRemoveRecipient:(id)arg1;
- (void)recipientViewController:(id)arg1 didEnterText:(id)arg2;

@end

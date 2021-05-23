/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIViewController.h>

@class NSArray, NSString, PUPhotoStreamRecipientViewController, UINavigationItem;

@protocol PUCloudSharedCreateAlbumViewControllerDelegate;

@interface PUCloudSharedCreateAlbumViewController : UIViewController

{
    UINavigationItem *_navItem;
    PUPhotoStreamRecipientViewController *_composeRecipientController;
    id <PUCloudSharedCreateAlbumViewControllerDelegate> _delegate;
    NSString *_nextButtonTitle;
    NSArray *__albumRecipients;
}

@property (retain, nonatomic, setter=_setAlbumRecipients:) NSArray *_albumRecipients;
@property (weak, nonatomic) id <PUCloudSharedCreateAlbumViewControllerDelegate> delegate;
@property (retain, nonatomic) NSString *nextButtonTitle;
@property (nonatomic, readonly) NSArray *albumRecipients;

- (id)init;
- (void)dealloc;
- (void)loadView;
- (id)navigationItem;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (struct CGSize)contentSizeForViewInPopover;
- (void)_cancelAction:(id)arg1;
- (void)_doneAction:(id)arg1;
- (_Bool)_validateRecipientsToAdd:(id)arg1;
- (void)_handleCompletionWithSuccess:(_Bool)arg1;
- (void)_saveUserEnterredInfo;

@end

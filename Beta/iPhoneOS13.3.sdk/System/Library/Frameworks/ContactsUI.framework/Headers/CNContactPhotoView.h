/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UIControl.h>

#import <ContactsUI/Swift-Protocol.h>

@class CNAvatarView, CNMutableContact, CNPhotoPickerViewController, NSArray, NSString, PRLikeness, UIButton, UIDropInteraction, UILongPressGestureRecognizer, UITapGestureRecognizer;

@protocol CNContactPhotoViewDelegate, CNPresenterDelegate;

__attribute__((visibility("hidden")))
@interface CNContactPhotoView : UIControl <Swift>

{
    _Bool _editing;
    _Bool _showEditingLabel;
    _Bool _modified;
    _Bool _shouldAllowTakePhotoAction;
    _Bool _prohibitsPersonaFetch;
    _Bool _isAnimatingBounce;
    _Bool _acceptsImageDrop;
    NSArray *_contacts;
    double _labelAlpha;
    CNAvatarView *_avatarView;
    id <CNPresenterDelegate> _presenterDelegate;
    id <CNContactPhotoViewDelegate> _delegate;
    CNMutableContact *_pendingEditContact;
    PRLikeness *_originalLikeness;
    PRLikeness *_currentLikeness;
    UIButton *_editPhotoButton;
    NSArray *_variableConstraints;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UIDropInteraction *_dropInteraction;
    CNPhotoPickerViewController *_photoPicker;
}

@property (nonatomic, readonly) CNMutableContact *mutableContact;
@property (retain, nonatomic) CNMutableContact *pendingEditContact;
@property (retain, nonatomic) PRLikeness *originalLikeness;
@property (retain, nonatomic) PRLikeness *currentLikeness;
@property (nonatomic) _Bool prohibitsPersonaFetch;
@property (retain, nonatomic) CNAvatarView *avatarView;
@property (retain, nonatomic) UIButton *editPhotoButton;
@property (nonatomic) _Bool isAnimatingBounce;
@property (nonatomic) _Bool modified;
@property (retain, nonatomic) NSArray *variableConstraints;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (retain, nonatomic) UIDropInteraction *dropInteraction;
@property (nonatomic) _Bool acceptsImageDrop;
@property (retain, nonatomic) CNPhotoPickerViewController *photoPicker;
@property (retain, nonatomic) NSArray *contacts;
@property (nonatomic, getter=isEditing) _Bool editing;
@property (nonatomic) double labelAlpha;
@property (nonatomic) _Bool showEditingLabel;
@property (nonatomic, readonly) _Bool shouldAllowTakePhotoAction;
@property (weak, nonatomic) id <CNPresenterDelegate> presenterDelegate;
@property (weak, nonatomic) id <CNContactPhotoViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) _Bool isPresentingModalViewController;

+ (struct CGSize)defaultSize;
+ (_Bool)requiresConstraintBasedLayout;
+ (id)descriptorForRequiredKeys;
+ (id)descriptorForRequiredKeysWithThreeDTouchEnabled:(_Bool)arg1;
+ (id)supportedPasteboardTypes;

- (void)dealloc;
- (id)contact;
- (void)reloadData;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)copy:(id)arg1;
- (void)paste:(id)arg1;
- (_Bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (_Bool)hasPhoto;
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;
- (void)previewControllerDidDismiss:(id)arg1;
- (struct CGRect)previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id *)arg3;
- (id)previewController:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(struct CGRect *)arg3;
- (id)previewController:(id)arg1 transitionViewForPreviewItem:(id)arg2;
- (void)updateFontSizes;
- (void)menuWillHide:(id)arg1;
- (void)photoPickerDidCancel:(id)arg1;
- (void)photoPicker:(id)arg1 didUpdatePhotoForContact:(id)arg2 withContactImage:(id)arg3;
- (void)disablePhotoTapGesture;
- (void)sender:(id)arg1 presentViewController:(id)arg2;
- (void)sender:(id)arg1 dismissViewController:(id)arg2;
- (void)sender:(id)arg1 dismissViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)willBeginPreviewInteractionForAvatarView:(id)arg1;
- (void)didUpdateContentForAvatarView:(id)arg1;
- (id)presentingViewControllerForAvatarView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 monogrammerStyle:(long long)arg2 shouldAllowTakePhotoAction:(_Bool)arg3 threeDTouchEnabled:(_Bool)arg4 contactStore:(id)arg5 allowsImageDrops:(_Bool)arg6 imageRenderer:(id)arg7;
- (_Bool)isMeContact;
- (id)newPendingContactPreservingChangesFrom:(id)arg1;
- (id)currentImageData;
- (void)saveChangesFromPendingContact:(id)arg1 toContact:(id)arg2;
- (void)saveEdits;
- (void)setEditing:(_Bool)arg1 preservingChanges:(_Bool)arg2;
- (void)setHighlightedFrame:(_Bool)arg1;
- (void)avatarTapped:(id)arg1;
- (void)longPressGesture:(id)arg1;
- (void)resetPhoto;
- (void)updatePhoto;
- (void)updateViewsAndNotifyDelegate:(_Bool)arg1;
- (void)updateEditPhotoButton;
- (void)updatePendingContactWithEditedPropertyItem:(id)arg1;
- (_Bool)_isUsingCuratedPhoto;
- (_Bool)_isUsingSilhouette;
- (void)presentPhotoPicker;
- (void)_presentPhotoPicker;
- (void)saveImagePickerMediaFromInfo:(id)arg1 toContact:(id)arg2;
- (id)_createImagePickerForEditingImageData:(id)arg1 withCropRect:(struct CGRect)arg2;
- (id)previewPath;
- (void)_zoomContactPhoto;
- (void)_presentFullScreenPhoto:(id)arg1;
- (void)_bounceSmallPhoto;

@end

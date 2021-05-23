/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIViewController.h>

#import <ChatKit/Swift-Protocol.h>

@class CKQLDetailsPreviewController, NSArray, NSString, UIBarButtonItem, UICollectionView, UICollectionViewFlowLayout, UIView;

@protocol CKSharedAssetsControllerDelegate;

@interface CKSharedContentsViewController : UIViewController <Swift>

{
    _Bool _selectingAttachments;
    UICollectionView *_collectionView;
    id <CKSharedAssetsControllerDelegate> _delegate;
    UICollectionViewFlowLayout *_collectionviewLayout;
    CKQLDetailsPreviewController *_qlPreviewController;
    UIView *_topmostMarkerView;
    NSArray *_attachmentItems;
    UIBarButtonItem *_saveButton;
    UIBarButtonItem *_deleteButton;
    NSArray *_parentRightBarButtonItemsToRestore;
}

@property (retain, nonatomic) UICollectionViewFlowLayout *collectionviewLayout;
@property (retain, nonatomic) CKQLDetailsPreviewController *qlPreviewController;
@property (retain, nonatomic) UIView *topmostMarkerView;
@property (retain, nonatomic) NSArray *attachmentItems;
@property (nonatomic, getter=isSelectingAttachments) _Bool selectingAttachments;
@property (retain, nonatomic) UIBarButtonItem *saveButton;
@property (retain, nonatomic) UIBarButtonItem *deleteButton;
@property (retain, nonatomic) NSArray *parentRightBarButtonItemsToRestore;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) id <CKSharedAssetsControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)viewWillLayoutSubviews;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldShowMenuForItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 canPerformAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;
- (void)collectionView:(id)arg1 performAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;
- (id)_collectionView:(id)arg1 dragItemsForItemAtIndexPath:(id)arg2;
- (id)committedViewControllerForPreviewViewController:(id)arg1;
- (void)willPresentPreviewViewController:(id)arg1 forLocation:(struct CGPoint)arg2 inSourceView:(id)arg3;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (void)didDismissPreviewViewController:(id)arg1 committing:(_Bool)arg2;
- (unsigned long long)assetType;
- (void)previewControllerDidDismiss:(id)arg1;
- (_Bool)previewController:(id)arg1 shouldOpenURL:(id)arg2 forPreviewItem:(id)arg3;
- (struct CGRect)previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id *)arg3;
- (id)avatarView:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3;
- (id)presentingViewControllerForAvatarView:(id)arg1;
- (id)selectedAttachmentIndexes;
- (id)invisibleInkEffectControllerForPreviewController:(id)arg1;
- (void)previewControllerDidCancelDismiss:(id)arg1;
- (struct CGSize)contentSizeThatFits:(struct CGSize)arg1;
- (void)parentScrollViewDidScroll:(struct CGPoint)arg1;
- (void)updateAttachmentItems:(id)arg1;
- (_Bool)isDisplayingAttachmentContent;
- (id)initWithAttachmentItems:(id)arg1;
- (id)previewController:(id)arg1 transitionViewForPreviewItem:(id)arg2 uncroppedSourceFrame:(struct CGRect *)arg3 realSize:(struct CGSize *)arg4;
- (long long)numberOfItemsInRow;
- (double)paddingLeftRightForCell;
- (double)cellAspectRatio;
- (double)paddingTopBottomForCell;
- (void)setupToolbar;
- (void)teardownToolbar;
- (void)updateToolbar;
- (void)deleteSelectedContents:(id)arg1;
- (void)cancelSelectingContents:(id)arg1;
- (_Bool)isJ99LandscapeModeFullScreen;
- (void)deleteContents:(id)arg1;
- (void)sharedContentsCollectionViewCellDidTap:(id)arg1;
- (void)performAction:(SEL)arg1 forSharedContentsCollectionViewCell:(id)arg2;
- (void)saveSelectedContents:(id)arg1;

@end

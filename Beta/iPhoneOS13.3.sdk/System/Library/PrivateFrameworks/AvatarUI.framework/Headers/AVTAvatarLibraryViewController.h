/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <UIKit/UIViewController.h>

#import <AvatarUI/Swift-Protocol.h>

@class AVTAvatarLibraryModel, AVTUIEnvironment, NSString, UICollectionView, UILongPressGestureRecognizer, _AVTAvatarRecordImageProvider;

@protocol AVTAvatarLibraryViewControllerDelegate;

@interface AVTAvatarLibraryViewController : UIViewController <Swift>

{
    id <AVTAvatarLibraryViewControllerDelegate> _delegate;
    UICollectionView *_collectionView;
    UILongPressGestureRecognizer *_longPressGesture;
    AVTAvatarLibraryModel *_model;
    _AVTAvatarRecordImageProvider *_imageProvider;
    AVTUIEnvironment *_environment;
}

@property (nonatomic, readonly) UICollectionView *collectionView;
@property (nonatomic, readonly) UILongPressGestureRecognizer *longPressGesture;
@property (nonatomic, readonly) AVTAvatarLibraryModel *model;
@property (nonatomic, readonly) _AVTAvatarRecordImageProvider *imageProvider;
@property (nonatomic, readonly) AVTUIEnvironment *environment;
@property (weak, nonatomic) id <AVTAvatarLibraryViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (void)viewDidLoad;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewDidLayoutSubviews;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (void)didTapDoneButton:(id)arg1;
- (id)initWithAvatarStore:(id)arg1 environment:(id)arg2;
- (void)presetEditorViewController:(id)arg1;
- (void)didAddRecord:(id)arg1;
- (void)didDeleteRecord:(id)arg1;
- (void)presentUIViewController:(id)arg1 forItem:(id)arg2;
- (void)insertItemsAtIndexes:(id)arg1 deleteItemsAtIndexes:(id)arg2 reloadItemsAtIndexes:(id)arg3;
- (void)didUpdateLibraryItems:(id)arg1;
- (void)didEditRecord:(id)arg1;
- (void)dismissController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithModel:(id)arg1 imageProvider:(id)arg2 environment:(id)arg3;
- (void)didLongPress:(id)arg1;
- (void)updateVisibleHeaders;
- (id)initWithAvatarStore:(id)arg1;

@end

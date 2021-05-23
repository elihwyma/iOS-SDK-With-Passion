/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <UIKit/UIViewController.h>

#import <AvatarUI/Swift-Protocol.h>

@class AVTAvatarListImageItem, AVTCenteringCollectionViewDelegate, AVTFunCamAvatarPickerCollectionViewLayout, AVTFunCamAvatarPickerStyle, AVTRenderingScope, AVTUIEnvironment, NSArray, NSString, UICollectionView, UICollectionViewFlowLayout, UIView, _AVTAvatarRecordImageProvider;

@protocol AVTAvatarPickerDelegate, AVTAvatarRecord, AVTAvatarStoreInternal, AVTPresenterDelegate, AVTUILogger, NSObject;

@interface AVTFunCamAvatarPickerController : UIViewController <Swift>

{
    id <AVTPresenterDelegate> presenterDelegate;
    id <AVTAvatarPickerDelegate> avatarPickerDelegate;
    unsigned long long _mode;
    AVTFunCamAvatarPickerStyle *_style;
    UICollectionView *_collectionView;
    UIView *_titlesContainer;
    UICollectionView *_titlesCollectionView;
    UIView *_titlesClippingView;
    id <AVTAvatarRecord> _selectedAvatarRecord;
    AVTFunCamAvatarPickerCollectionViewLayout *_listLayout;
    UICollectionViewFlowLayout *_gridLayout;
    AVTCenteringCollectionViewDelegate *_centeringDelegate;
    NSArray *_puppetRecords;
    NSArray *_editableRecords;
    NSArray *_items;
    AVTAvatarListImageItem *_noneItem;
    id <AVTAvatarStoreInternal> _store;
    AVTUIEnvironment *_environment;
    id <AVTUILogger> _logger;
    _AVTAvatarRecordImageProvider *_imageProvider;
    AVTRenderingScope *_editableRecordsListRenderingScope;
    AVTRenderingScope *_gridRenderingScope;
    id <NSObject> _changeNotificationToken;
    struct CGRect _lastUpdateViewBounds;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *titlesContainer;
@property (retain, nonatomic) UICollectionView *titlesCollectionView;
@property (retain, nonatomic) UIView *titlesClippingView;
@property (nonatomic) struct CGRect lastUpdateViewBounds;
@property (retain, nonatomic) id <AVTAvatarRecord> selectedAvatarRecord;
@property (retain, nonatomic) AVTFunCamAvatarPickerCollectionViewLayout *listLayout;
@property (retain, nonatomic) UICollectionViewFlowLayout *gridLayout;
@property (retain, nonatomic) AVTCenteringCollectionViewDelegate *centeringDelegate;
@property (retain, nonatomic) NSArray *puppetRecords;
@property (retain, nonatomic) NSArray *editableRecords;
@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) AVTAvatarListImageItem *noneItem;
@property (retain, nonatomic) id <AVTAvatarStoreInternal> store;
@property (nonatomic, readonly) AVTUIEnvironment *environment;
@property (nonatomic, readonly) id <AVTUILogger> logger;
@property (nonatomic, readonly) _AVTAvatarRecordImageProvider *imageProvider;
@property (nonatomic, readonly) AVTRenderingScope *editableRecordsListRenderingScope;
@property (nonatomic, readonly) AVTRenderingScope *gridRenderingScope;
@property (retain, nonatomic) id <NSObject> changeNotificationToken;
@property (nonatomic) unsigned long long mode;
@property (copy, nonatomic) AVTFunCamAvatarPickerStyle *style;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIView *view;
@property (weak, nonatomic) id <AVTPresenterDelegate> presenterDelegate;
@property (weak, nonatomic) id <AVTAvatarPickerDelegate> avatarPickerDelegate;

+ (id)newGridLayout;
+ (id)createClippingViewForSize:(struct CGSize)arg1;
+ (id)itemsFromRecords:(id)arg1;
+ (id)sessionProviderWithEnvironment:(id)arg1 delegate:(id)arg2;
+ (id)funCamAvatarPickerControllerForStore:(id)arg1 style:(id)arg2;

- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)reloadData;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (id)selectedIndexPath;
- (_Bool)canCreateAvatar;
- (void)buildCollectionView;
- (struct CGSize)gridItemSize;
- (void)startObservingChangesIfNeeded;
- (void)selectAvatarRecordWithIdentifier:(id)arg1 animated:(_Bool)arg2;
- (void)preloadAll;
- (long long)indexForRecord:(id)arg1;
- (void)reloadModel;
- (id)initWithStore:(id)arg1 environment:(id)arg2 style:(id)arg3;
- (id)indexPathForNoneItem;
- (void)updateViewForCurrentMode;
- (id)buildCollectionViewLayout;
- (id)buildTitlesCollectionViewLayout;
- (void)updateTitlesClippingViewMask;
- (void)selectItemAtIndexPath:(id)arg1 animated:(_Bool)arg2 notifyDelegate:(_Bool)arg3;
- (_Bool)isDisplayingGridLayout;
- (void)selectItemForAvatarRecord:(id)arg1 animated:(_Bool)arg2 notifyDelegate:(_Bool)arg3;
- (void)sendSelectionEventToDelegateForItemAtIndexPath:(id)arg1;
- (long long)indexForRecordIdentifier:(id)arg1;
- (void)selectItemAtCenterNotifyDelegate:(_Bool)arg1;
- (void)sessionProviderWillStartCameraSession:(id)arg1;
- (void)sessionProviderDidEndCameraSession:(id)arg1;

@end

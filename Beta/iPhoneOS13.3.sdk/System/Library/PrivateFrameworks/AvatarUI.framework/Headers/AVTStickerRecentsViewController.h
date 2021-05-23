/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <UIKit/UIViewController.h>

#import <AvatarUI/Swift-Protocol.h>

@class AVTClippableImageStore, AVTSerialTaskScheduler, AVTStickerConfigurationProvider, AVTStickerGenerator, AVTStickerRecentsLayout, AVTStickerRecentsMigrator, AVTStickerRecentsOverlayView, AVTUIEnvironment, AVTUIStickerGeneratorPool, CALayer, NSArray, NSObject, NSString, UICollectionView, UICollectionViewFlowLayout;

@protocol AVTAvatarRecord, AVTAvatarStoreInternal, AVTResourceCache, AVTStickerRecentsItem, AVTStickerRecentsViewControllerDelegate, NSObject, OS_dispatch_queue;

@interface AVTStickerRecentsViewController : UIViewController <Swift>

{
    _Bool _hasFetchedDefaultMemoji;
    id <AVTStickerRecentsViewControllerDelegate> _delegate;
    AVTStickerRecentsMigrator *_stickerRecentsMigrator;
    AVTStickerRecentsOverlayView *_overlayView;
    id <NSObject> _avatarStoreChangeObserver;
    id <AVTAvatarRecord> _defaultMemoji;
    AVTClippableImageStore *_imageStore;
    UICollectionViewFlowLayout *_collectionViewLayout;
    UICollectionView *_collectionView;
    id <AVTAvatarStoreInternal> _avatarStore;
    AVTUIEnvironment *_environment;
    id <AVTResourceCache> _cache;
    AVTStickerGenerator *_stickerGenerator;
    NSObject<OS_dispatch_queue> *_recentsWorkQueue;
    NSObject<OS_dispatch_queue> *_renderingQueue;
    NSObject<OS_dispatch_queue> *_encodingQueue;
    AVTStickerConfigurationProvider *_configurationProvider;
    AVTSerialTaskScheduler *_taskScheduler;
    AVTUIStickerGeneratorPool *_generatorPool;
    AVTStickerRecentsLayout *_stickerRecentsLayout;
    id <AVTStickerRecentsItem> _buttonItem;
    NSArray *_stickerItems;
    NSArray *_displayItems;
    CALayer *_edgeMaskLayer;
}

@property (retain, nonatomic) AVTStickerRecentsMigrator *stickerRecentsMigrator;
@property (retain, nonatomic) AVTStickerRecentsOverlayView *overlayView;
@property (retain, nonatomic) id <NSObject> avatarStoreChangeObserver;
@property (nonatomic) _Bool hasFetchedDefaultMemoji;
@property (retain, nonatomic) id <AVTAvatarRecord> defaultMemoji;
@property (retain, nonatomic) AVTClippableImageStore *imageStore;
@property (retain, nonatomic) UICollectionViewFlowLayout *collectionViewLayout;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic, readonly) id <AVTAvatarStoreInternal> avatarStore;
@property (nonatomic, readonly) AVTUIEnvironment *environment;
@property (nonatomic, readonly) id <AVTResourceCache> cache;
@property (nonatomic, readonly) AVTStickerGenerator *stickerGenerator;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *recentsWorkQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *renderingQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *encodingQueue;
@property (retain, nonatomic) AVTStickerConfigurationProvider *configurationProvider;
@property (retain, nonatomic) AVTSerialTaskScheduler *taskScheduler;
@property (retain, nonatomic) AVTUIStickerGeneratorPool *generatorPool;
@property (nonatomic, readonly) AVTStickerRecentsLayout *stickerRecentsLayout;
@property (retain, nonatomic) id <AVTStickerRecentsItem> buttonItem;
@property (retain, nonatomic) NSArray *stickerItems;
@property (retain, nonatomic) NSArray *displayItems;
@property (retain, nonatomic) CALayer *edgeMaskLayer;
@property (weak, nonatomic) id <AVTStickerRecentsViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)layoutForSize:(struct CGSize)arg1;
+ (id)imageStoreWithEnvironment:(id)arg1;
+ (id)stickerCacheWithEnvironment:(id)arg1;
+ (id)stickerForRecentItem:(id)arg1;
+ (id)stickerRecentsController;
+ (id)stickerRecentsControllerForStore:(id)arg1;

- (void)dealloc;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)placeholderItems;
- (void)overlayDidTapContentView:(id)arg1;
- (void)overlayDidTapContinueButton:(id)arg1;
- (void)overlayDidTapCloseButton:(id)arg1;
- (id)initWithAvatarStore:(id)arg1 environment:(id)arg2;
- (void)updateItemSizeForContainerSize:(struct CGSize)arg1;
- (struct UIEdgeInsets)edgeInsetsForContainerSize:(struct CGSize)arg1;
- (void)determineOverlayTypeWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setupRenderingDependentPieces;
- (void)beginObservingAvatarStoreChanges;
- (void)buildRecentsItemsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)fetchDefaultMemojiIfNeeded;
- (id)recentStickersWithCount:(long long)arg1;
- (void)updateDisplayItems;
- (void)dismissOverlayViewAnimated:(_Bool)arg1;
- (void)recentStickersDidChange:(id)arg1;
- (void)endObservingAvatarStoreChanges;

@end

/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

#import <AvatarUI/Swift-Protocol.h>

@class AVTAvatarRecordDataSource, AVTUIEnvironment, AVTUIStickerGeneratorPool, NSArray, NSIndexPath, NSMutableDictionary, NSString, UICollectionView, UIView, _AVTAvatarRecordImageProvider;

@protocol AVTAvatarPickerDelegate, AVTPresenterDelegate, AVTResourceCache, AVTStickerDisclosureValidationDelegate, AVTStickerPagingControllerDelegate, AVTTaskScheduler, OS_dispatch_queue;

@interface AVTStickerPagingController : NSObject <Swift>

{
    _Bool _allowsPeel;
    id <AVTPresenterDelegate> presenterDelegate;
    id <AVTAvatarPickerDelegate> avatarPickerDelegate;
    id <AVTStickerPagingControllerDelegate> _delegate;
    id <AVTStickerDisclosureValidationDelegate> _disclosureValidationDelegate;
    NSObject<OS_dispatch_queue> *_renderingQueue;
    NSObject<OS_dispatch_queue> *_encodingQueue;
    AVTAvatarRecordDataSource *_dataSource;
    AVTUIStickerGeneratorPool *_stickerGeneratorPool;
    AVTUIEnvironment *_environment;
    NSMutableDictionary *_pageForRecords;
    id <AVTTaskScheduler> _taskScheduler;
    id <AVTResourceCache> _cache;
    _AVTAvatarRecordImageProvider *_imageProvider;
    NSArray *_memojiStickerConfigurations;
    UIView *_view;
    UICollectionView *_collectionView;
    NSIndexPath *_pageIndexBeforeSizeChange;
    struct CGPoint _pageContentOffset;
    struct CGPoint _endDraggingTargetContentOffset;
    struct UIEdgeInsets _pageContentInsets;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *renderingQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *encodingQueue;
@property (retain, nonatomic) AVTAvatarRecordDataSource *dataSource;
@property (retain, nonatomic) AVTUIStickerGeneratorPool *stickerGeneratorPool;
@property (retain, nonatomic) AVTUIEnvironment *environment;
@property (retain, nonatomic) NSMutableDictionary *pageForRecords;
@property (nonatomic, readonly) _Bool allowsPeel;
@property (nonatomic, readonly) id <AVTTaskScheduler> taskScheduler;
@property (nonatomic, readonly) id <AVTResourceCache> cache;
@property (nonatomic, readonly) _AVTAvatarRecordImageProvider *imageProvider;
@property (retain, nonatomic) NSArray *memojiStickerConfigurations;
@property (retain, nonatomic) UIView *view;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) struct CGPoint endDraggingTargetContentOffset;
@property (retain, nonatomic) NSIndexPath *pageIndexBeforeSizeChange;
@property (nonatomic) struct UIEdgeInsets pageContentInsets;
@property (nonatomic) struct CGPoint pageContentOffset;
@property (weak, nonatomic) id <AVTStickerPagingControllerDelegate> delegate;
@property (weak, nonatomic) id <AVTStickerDisclosureValidationDelegate> disclosureValidationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <AVTPresenterDelegate> presenterDelegate;
@property (weak, nonatomic) id <AVTAvatarPickerDelegate> avatarPickerDelegate;

+ (id)stickerCacheWithEnvironment:(id)arg1;

- (void)loadView;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)reloadData;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct CGPoint)collectionView:(id)arg1 targetContentOffsetForProposedContentOffset:(struct CGPoint)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)scrollToPageAtIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)stickerSheetController:(id)arg1 didFinishRenderingStickersForRecord:(id)arg2;
- (void)stickerSheetController:(id)arg1 didScrollToContentOffset:(struct CGPoint)arg2;
- (void)stickerSheetController:(id)arg1 scrollView:(id)arg2 willEndDraggingWithTargetContentOffset:(inout struct CGPoint *)arg3;
- (void)stickerSheetController:(id)arg1 didInteractWithStickerAtIndex:(long long)arg2 byPeeling:(_Bool)arg3;
- (void)notifyingContainerViewWillChangeSize:(struct CGSize)arg1;
- (void)notifyingContainerViewDidChangeSize:(struct CGSize)arg1;
- (id)centeredPageWithOffset:(struct CGPoint)arg1;
- (id)sheetControllerForRecord:(id)arg1;
- (id)reloadSheetControllerForRecord:(id)arg1;
- (id)sheetControllerAtIndex:(long long)arg1;
- (long long)pageIndexForAvatarRecordIdentifier:(id)arg1;
- (void)updateForEndingScrollWithTargetContentOffset:(struct CGPoint)arg1;
- (void)scrollToAvatarWithIdentifier:(id)arg1 animated:(_Bool)arg2;
- (id)avatarActionsViewController:(id)arg1 recordUpdateForDeletingRecord:(id)arg2;
- (void)avatarActionsViewControllerDidFinish:(id)arg1;
- (void)selectAvatarRecordWithIdentifier:(id)arg1 animated:(_Bool)arg2;
- (id)initWithRecordDataSource:(id)arg1 recordImageProvider:(id)arg2 environment:(id)arg3 allowsPeel:(_Bool)arg4;
- (void)insertPageForRecord:(id)arg1 atIndex:(long long)arg2;
- (void)deletePageForRecord:(id)arg1 atIndex:(long long)arg2;
- (void)reloadPageForRecord:(id)arg1 atIndex:(long long)arg2;
- (void)wrapAndPresentViewController:(id)arg1 animated:(_Bool)arg2;
- (void)willStartDisplaying;
- (void)willEndDisplaying;
- (id)firstPageItemView;
- (id)collectionViewForPPT;
- (long long)pageIndexForAvatarRecordIdentifierForPPT:(id)arg1;

@end

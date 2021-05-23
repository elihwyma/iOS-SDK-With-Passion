/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

#import <AvatarUI/Swift-Protocol.h>

@class AVTAvatarListCell, AVTAvatarRecordDataSource, AVTCarouselPlusButtonView, AVTCenteringCollectionViewDelegate, AVTRenderingScope, AVTTransitionCoordinator, AVTUIEnvironment, AVTViewSession, AVTZIndexEngagementListCollectionViewLayout, NSArray, NSNumber, NSString, UICollectionView, UIView, _AVTAvatarRecordImageProvider;

@protocol AVTAvatarDisplayingControllerDelegate, AVTAvatarListItem, AVTAvatarRecord, AVTPresenterDelegate, AVTUILogger, AVTViewCarouselLayout;

@interface AVTMultiAvatarController : NSObject <Swift>

{
    _Bool _allowsCreate;
    _Bool _hideImageForDisplayedRecord;
    id <AVTAvatarDisplayingControllerDelegate> delegate;
    id <AVTPresenterDelegate> presenterDelegate;
    double _decelerationRate;
    AVTRenderingScope *_renderingScope;
    UIView *_view;
    UICollectionView *_collectionView;
    AVTZIndexEngagementListCollectionViewLayout *_collectionViewLayout;
    AVTCenteringCollectionViewDelegate *_centeringDelegate;
    NSArray *_recordListItems;
    AVTViewSession *_avtViewSession;
    AVTCarouselPlusButtonView *_addItemView;
    id <AVTAvatarListItem> _addListItem;
    id <AVTAvatarRecord> _displayedRecord;
    AVTAvatarListCell *_liveCell;
    NSNumber *_cachedCanCreateValue;
    AVTTransitionCoordinator *_transitionCoordinator;
    AVTAvatarRecordDataSource *_dataSource;
    AVTUIEnvironment *_environment;
    id <AVTUILogger> _logger;
    _AVTAvatarRecordImageProvider *_thumbnailRenderer;
    id <AVTViewCarouselLayout> _avtViewLayout;
    struct CGPoint _lastContentOffset;
}

@property (retain, nonatomic) UIView *view;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AVTZIndexEngagementListCollectionViewLayout *collectionViewLayout;
@property (retain, nonatomic) AVTCenteringCollectionViewDelegate *centeringDelegate;
@property (retain, nonatomic) NSArray *recordListItems;
@property (retain, nonatomic) AVTViewSession *avtViewSession;
@property (retain, nonatomic) AVTCarouselPlusButtonView *addItemView;
@property (retain, nonatomic) id <AVTAvatarListItem> addListItem;
@property (retain, nonatomic) id <AVTAvatarRecord> displayedRecord;
@property (retain, nonatomic) AVTAvatarListCell *liveCell;
@property (nonatomic) _Bool allowsCreate;
@property (nonatomic) NSNumber *cachedCanCreateValue;
@property (nonatomic, readonly) AVTTransitionCoordinator *transitionCoordinator;
@property (nonatomic, readonly) AVTAvatarRecordDataSource *dataSource;
@property (nonatomic, readonly) AVTUIEnvironment *environment;
@property (nonatomic, readonly) id <AVTUILogger> logger;
@property (nonatomic, readonly) _AVTAvatarRecordImageProvider *thumbnailRenderer;
@property (retain, nonatomic) id <AVTViewCarouselLayout> avtViewLayout;
@property (nonatomic) struct CGPoint lastContentOffset;
@property (nonatomic) _Bool hideImageForDisplayedRecord;
@property (nonatomic) double decelerationRate;
@property (nonatomic, readonly) AVTRenderingScope *renderingScope;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <AVTPresenterDelegate> presenterDelegate;
@property (weak, nonatomic) id <AVTAvatarDisplayingControllerDelegate> delegate;

+ (id)newCollectionViewLayoutForEngagedCellSize:(struct CGSize)arg1 boundsSize:(struct CGSize)arg2 environment:(id)arg3;
+ (id)listItemsForAvatarRecords:(id)arg1;
+ (id)snapshotProviderFocusedOnRecordWithIdentifier:(id)arg1 size:(struct CGSize)arg2 avtViewAspectRatio:(struct CGSize)arg3 dataSource:(id)arg4 environment:(id)arg5;

- (void)dealloc;
- (void)loadView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)reloadData;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (_Bool)isViewLoaded;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)notifyingContainerViewWillChangeSize:(struct CGSize)arg1;
- (void)notifyingContainerViewDidChangeSize:(struct CGSize)arg1;
- (id)initWithDataSource:(id)arg1 environment:(id)arg2 initialAVTViewLayout:(id)arg3;
- (id)getFirstItem;
- (void)preloadAll;
- (void)updateCachedCanCreateValueIfNeeded;
- (void)createAddItemViewIfNeeded;
- (id)indexPathForItemClosestToCenter;
- (unsigned long long)listItemIndexForRecord:(id)arg1;
- (void)transitionCurrentDisplayedRecordAnimated:(_Bool)arg1;
- (void)layoutDidChangeWhileMoving:(_Bool)arg1 offset:(struct CGPoint)arg2;
- (id)listItemsForDisplay;
- (void)scrollToViewForAvatarRecord:(id)arg1 animated:(_Bool)arg2;
- (void)scrollToViewAtIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)notifyDelegateForScrollingTowardItem:(id)arg1 ratio:(double)arg2;
- (void)setDisplayedRecordFromIndex:(unsigned long long)arg1;
- (_Bool)shouldCurrentlyDisplayedRecordTransitionToLive;
- (void)transitionCell:(id)arg1 indexPath:(id)arg2 toStartFocusingAnimated:(_Bool)arg3 session:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)transitionCenterCellIfPresentToStopFocusingAnimated:(_Bool)arg1;
- (void)notifyDelegateForScrollingTowardItemFromOffset:(struct CGPoint)arg1;
- (void)updateDisplayedRecordIfNeeded;
- (void)scrollToDisplayedRecord;
- (void)buildCollectionViewAndConfigureLayoutIfNeeded;
- (void)loadRecordsIfNeeded;
- (void)transitionCenterCellIfPresentToStartFocusing;
- (void)reloadRecordListItems;
- (id)loadRecords;
- (void)transitionCenterCellToStartFocusing:(id)arg1 indexPath:(id)arg2;
- (void)createAvatar;
- (id)cellForRecordItem:(id)arg1;
- (void)transitionCell:(id)arg1 toStopFocusingAnimated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)dataSource:(id)arg1 didAddRecord:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)dataSource:(id)arg1 didEditRecord:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)dataSource:(id)arg1 didRemoveRecord:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)significantRecordChangeInDataSource:(id)arg1;
- (id)initWithDataSource:(id)arg1 environment:(id)arg2;
- (void)useAVTViewFromSession:(id)arg1 withLayout:(id)arg2;
- (void)stopUsingAVTViewSessionSynchronously:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)prepareToTransitionToVisible:(_Bool)arg1 completionHandler:(CDUnknownBlockType *)arg2;
- (void)displayAvatarForRecord:(id)arg1 animated:(_Bool)arg2;
- (void)setAllowsCreate:(_Bool)arg1 animated:(_Bool)arg2;
- (id)recordForItem:(id)arg1;
- (id)viewForSnapshot;

@end

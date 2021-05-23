/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

#import <AvatarUI/Swift-Protocol.h>

@class AVTStickerSheetModel, NSString, UICollectionView, UIImage, UIView;

@protocol AVTAvatarRecord, AVTPresenterDelegate, AVTStickerDisclosureValidationDelegate, AVTStickerSheetControllerDelegate;

@interface AVTStickerSheetController : NSObject <Swift>

{
    _Bool _allowsPeel;
    _Bool _isPageVisible;
    id <AVTPresenterDelegate> presenterDelegate;
    id <AVTStickerSheetControllerDelegate> _delegate;
    id <AVTStickerDisclosureValidationDelegate> _disclosureValidationDelegate;
    UIView *_view;
    UICollectionView *_collectionView;
    AVTStickerSheetModel *_model;
    UIImage *_placeholderImage;
    struct UIEdgeInsets _sectionInsets;
}

@property (retain, nonatomic) UIView *view;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) _Bool isPageVisible;
@property (retain, nonatomic) AVTStickerSheetModel *model;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (nonatomic) struct UIEdgeInsets sectionInsets;
@property (weak, nonatomic) id <AVTStickerSheetControllerDelegate> delegate;
@property (weak, nonatomic) id <AVTStickerDisclosureValidationDelegate> disclosureValidationDelegate;
@property (nonatomic, readonly) id <AVTAvatarRecord> avatarRecord;
@property (nonatomic, readonly) _Bool allowsPeel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <AVTPresenterDelegate> presenterDelegate;

- (void)loadView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)scrollToContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (double)topPadding;
- (CDUnknownBlockType)placeholderProvider;
- (void)lowerTaskPriority:(CDUnknownBlockType)arg1;
- (void)discardStickerItems;
- (void)updateItem:(id)arg1 withStickerResource:(id)arg2 reloadCell:(_Bool)arg3;
- (void)startedTask:(CDUnknownBlockType)arg1 forItem:(id)arg2;
- (void)clearStickerRendererIfNeeded;
- (void)reloadCollectionViewItemForStickerItem:(id)arg1;
- (double)numberOfItemsPerRow;
- (struct CGPoint)maxedContentOffset:(struct CGPoint)arg1;
- (struct CGSize)minimumContentSizeForSize:(struct CGSize)arg1;
- (void)notifyingContainerViewWillChangeSize:(struct CGSize)arg1;
- (void)notifyingContainerViewDidChangeSize:(struct CGSize)arg1;
- (void)stickerCellDidTapSticker:(id)arg1;
- (void)stickerCellDidPeelSticker:(id)arg1;
- (id)initWithStickerSheetModel:(id)arg1 allowsPeel:(_Bool)arg2;
- (void)sheetWillDisappear;
- (void)sheetWillAppear;
- (id)firstStickerView;

@end

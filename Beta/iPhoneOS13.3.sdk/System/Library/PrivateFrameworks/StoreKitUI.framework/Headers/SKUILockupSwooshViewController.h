/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUISwooshViewController.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSArray, NSMutableIndexSet, NSString, NSURL, SKUIItemArtworkContext, SKUISwooshView, SKUIVideoImageDataConsumer, UICollectionView;

@interface SKUILockupSwooshViewController : SKUISwooshViewController <Swift>

{
    SKUIItemArtworkContext *_artworkContext;
    UICollectionView *_collectionView;
    struct SKUILockupStyle _defaultLockupStyle;
    _Bool _delegateWantsWillDisplay;
    _Bool _didInitialReload;
    struct CGSize _expectedImageSize;
    NSMutableIndexSet *_hiddenIconIndexSet;
    NSArray *_lockups;
    struct CGSize _maxCellSize;
    struct CGSize _maxImageSize;
    CDStruct_df87b2ae _metrics;
    _Bool _seeAllHidden;
    long long _seeAllStyle;
    NSString *_seeAllTitle;
    NSURL *_seeAllURL;
    SKUISwooshView *_swooshView;
    long long _swooshType;
    SKUIVideoImageDataConsumer *_videoImageConsumer;
}

@property (nonatomic, getter=isSeeAllHidden) _Bool seeAllHidden;
@property (nonatomic, readonly) SKUIItemArtworkContext *artworkContext;
@property (nonatomic, readonly) SKUIVideoImageDataConsumer *videoImageConsumer;
@property (nonatomic, readonly) NSArray *items;
@property (copy, nonatomic) NSArray *lockups;
@property (nonatomic, readonly) struct CGRect seeAllButtonFrame;
@property (nonatomic, readonly) NSURL *seeAllURL;
@property (nonatomic) long long swooshType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (long long)_swooshTypeForLockups:(id)arg1;

- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)indexPathsForVisibleItems;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (id)initWithItemList:(id)arg1;
- (void)setImage:(id)arg1 forItemAtIndex:(long long)arg2;
- (void)setClientContext:(id)arg1;
- (void)_seeAllAction:(id)arg1;
- (void)setColorScheme:(id)arg1;
- (id)_newLockupComponentWithItem:(id)arg1 defaultStyle:(struct SKUILockupStyle)arg2;
- (struct CGRect)frameForItemAtIndex:(long long)arg1;
- (void)deselectAllItems;
- (id)initWithSwoosh:(id)arg1;
- (id)popImageViewForItemAtIndex:(long long)arg1;
- (void)unhideImages;
- (void)setVideoThumbnail:(id)arg1 forItemAtIndex:(long long)arg2;
- (void)_reloadSizes;
- (CDStruct_df87b2ae)_lockupSwooshMetrics;
- (id)_newArtworkContextForSwooshType:(long long)arg1;
- (struct CGSize)_maximumCellSizeForImageSize:(struct CGSize)arg1;
- (void)setItemsWithLockups:(id)arg1;
- (void)_setExpectedImageSize:(struct CGSize)arg1;

@end

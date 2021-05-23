/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIStorePageSection.h>

@class NSString, SKUIArtwork, SKUIEmbeddedMediaView, SKUIMediaComponent;

__attribute__((visibility("hidden")))
@interface SKUIMediaPageSection : SKUIStorePageSection

{
    SKUIArtwork *_artwork;
    unsigned long long _artworkRequestID;
    struct CGSize _imageSize;
    SKUIEmbeddedMediaView *_mediaView;
}

@property (nonatomic, readonly) SKUIMediaComponent *pageComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)setSectionIndex:(long long)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)initWithPageComponent:(id)arg1;
- (void)willAppearInContext:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize)cellSizeForIndexPath:(id)arg1;
- (long long)numberOfCells;
- (void)prefetchResourcesWithReason:(long long)arg1;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;
- (double)contentInsetAdjustmentForCollectionView:(id)arg1;
- (long long)defaultItemPinningStyle;
- (void)_loadImageWithReason:(long long)arg1;
- (void)mediaView:(id)arg1 playbackStateDidChange:(long long)arg2;

@end

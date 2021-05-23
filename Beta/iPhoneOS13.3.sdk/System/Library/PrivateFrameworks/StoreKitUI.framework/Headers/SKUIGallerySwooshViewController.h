/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUISwooshViewController.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSString, SKUISwooshPageComponent, SKUISwooshView, UICollectionView;

@protocol SKUIGallerySwooshViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SKUIGallerySwooshViewController : SKUISwooshViewController <Swift>

{
    UICollectionView *_collectionView;
    _Bool _delegateWantsWillDisplay;
    SKUISwooshPageComponent *_gallerySwoosh;
    double _itemHeight;
    SKUISwooshView *_swooshView;
}

@property (nonatomic, readonly) SKUISwooshPageComponent *gallerySwoosh;
@property (weak, nonatomic) id <SKUIGallerySwooshViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)indexPathsForVisibleItems;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)setImage:(id)arg1 forItemAtIndex:(long long)arg2;
- (void)setColorScheme:(id)arg1;
- (void)mediaView:(id)arg1 playbackStateDidChange:(long long)arg2;
- (id)_newViewWithMediaComponent:(id)arg1;
- (id)artworkForItemAtIndex:(long long)arg1;
- (void)performActionForItemAtIndex:(long long)arg1 animated:(_Bool)arg2;
- (id)initWithGallerySwoosh:(id)arg1;

@end

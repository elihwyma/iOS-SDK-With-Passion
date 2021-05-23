/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUISwooshViewController.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSArray, NSMutableIndexSet, NSString, SKUISwooshView, UICollectionView;

@interface SKUIBrickSwooshViewController : SKUISwooshViewController <Swift>

{
    NSArray *_bricks;
    UICollectionView *_collectionView;
    _Bool _delegateWantsWillDisplay;
    NSMutableIndexSet *_hiddenImageIndexSet;
    CDStruct_0a66a153 _metrics;
    _Bool _showBrickTitles;
    NSString *_swooshTitle;
    SKUISwooshView *_swooshView;
}

@property (copy, nonatomic) NSArray *bricks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

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
- (void)setImage:(id)arg1 forItemAtIndex:(long long)arg2;
- (void)setClientContext:(id)arg1;
- (void)setColorScheme:(id)arg1;
- (struct CGRect)frameForItemAtIndex:(long long)arg1;
- (void)deselectAllItems;
- (id)initWithSwoosh:(id)arg1;
- (CDStruct_0a66a153)_brickSwooshMetrics;
- (id)popImageViewForItemAtIndex:(long long)arg1;
- (void)unhideImages;

@end

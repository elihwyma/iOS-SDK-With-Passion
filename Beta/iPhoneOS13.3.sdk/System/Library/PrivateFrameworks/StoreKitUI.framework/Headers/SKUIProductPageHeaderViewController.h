/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIViewController.h>

@class NSOperationQueue, NSString, SKUIClientContext, SKUIContentRatingArtworkResourceLoader, SKUIItem, SKUIItemArtworkContext, SKUIItemOffer, SKUIProductPage, SKUIProductPageHeaderFloatingView, SKUIProductPageHeaderView, SSVLoadURLOperation, UIImage, UIPopoverController;

@protocol SKUIProductPageHeaderViewDelegate;

__attribute__((visibility("hidden")))
@interface SKUIProductPageHeaderViewController : UIViewController

{
    UIPopoverController *_activityPopoverController;
    _Bool _askPermission;
    SKUIContentRatingArtworkResourceLoader *_contentRatingArtworkLoader;
    SKUIItemArtworkContext *_artworkContext;
    SKUIClientContext *_clientContext;
    id <SKUIProductPageHeaderViewDelegate> _delegate;
    SKUIProductPageHeaderView *_headerView;
    UIImage *_iconImage;
    SKUIItem *_item;
    long long _itemIdentifier;
    SSVLoadURLOperation *_loadIconOperation;
    SSVLoadURLOperation *_loadUberOperation;
    NSOperationQueue *_operationQueue;
    long long _personalizationState;
    SKUIItemOffer *_personalizedOffer;
    UIImage *_placeholderImage;
    SKUIProductPage *_productPage;
    UIImage *_uberImage;
    _Bool _wantsActivityViewController;
    SKUIProductPageHeaderFloatingView *_floatingView;
    _Bool _performArtistActionOnLoad;
}

@property (nonatomic, readonly) SKUIItem *item;
@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (weak, nonatomic) id <SKUIProductPageHeaderViewDelegate> delegate;
@property (nonatomic) _Bool askPermission;
@property (nonatomic, readonly) UIImage *iconImage;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (nonatomic) long long selectedSectionIndex;
@property (nonatomic, readonly) SKUIProductPageHeaderFloatingView *floatingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)reloadData;
- (id)initWithItem:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (id)_activeItem;
- (void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2;
- (void)itemStateCenterRestrictionsChanged:(id)arg1;
- (void)setProductPage:(id)arg1;
- (void)_destroyPopoverController;
- (void)_itemOfferButtonAction:(id)arg1;
- (id)_artworkContext;
- (id)_segmentedControlTitles;
- (void)_sectionControlAction:(id)arg1;
- (void)_setPersonalizedOffer:(id)arg1;
- (void)_setArtworkWithImage:(id)arg1 error:(id)arg2;
- (void)_loadUberImageIfAvailable;
- (void)_reloadItemStateAnimated:(_Bool)arg1;
- (void)_showActivityViewControllerFromView:(id)arg1;
- (id)_contentRatingResourceLoader;
- (void)_artistButtonAction:(id)arg1;
- (id)_ageBandString;
- (_Bool)_isRestricted;
- (void)_shareButtonAction:(id)arg1;
- (void)_showAskPermissionBanner;
- (void)_setItemState:(id)arg1 animated:(_Bool)arg2;
- (void)_sendDidReloadOffer;
- (void)_setUberWithImage:(id)arg1 error:(id)arg2;
- (void)_showSynthesizedItemStateWithFlag:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)_disableItemOfferButtonWithTitle:(id)arg1 animated:(_Bool)arg2;

@end

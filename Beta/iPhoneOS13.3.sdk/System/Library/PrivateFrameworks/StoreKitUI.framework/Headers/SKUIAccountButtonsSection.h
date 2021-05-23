/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIStorePageSection.h>

@class NSString, SKUIAccountButtonsComponent, SKUIAccountButtonsViewController;

__attribute__((visibility("hidden")))
@interface SKUIAccountButtonsSection : SKUIStorePageSection

{
    SKUIAccountButtonsViewController *_accountButtonsViewController;
}

@property (nonatomic, readonly) SKUIAccountButtonsComponent *pageComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithPageComponent:(id)arg1;
- (id)backgroundColorForIndexPath:(id)arg1;
- (void)willAppearInContext:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize)cellSizeForIndexPath:(id)arg1;
- (long long)numberOfCells;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)accountButtonsViewControllerDidTapECommerceLink:(id)arg1;
- (void)accountButtonsViewControllerDidSignIn:(id)arg1;
- (void)accountButtonsViewControllerDidSignOut:(id)arg1;
- (id)_accountButtonsViewController;

@end

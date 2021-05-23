/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMapTable, NSMutableArray, NSString, SKUIButtonViewElement, SKUIClientContext, SKUINavigationBarButtonsController, SKUINavigationBarContext, SKUINavigationBarViewElement, SKUINavigationPaletteController, UIView, UIViewController;

@protocol SKUINavigationBarControllerDelegate;

__attribute__((visibility("hidden")))
@interface SKUINavigationBarController : NSObject

{
    SKUINavigationBarButtonsController *_buttonsController;
    SKUIClientContext *_clientContext;
    SKUINavigationBarContext *_navigationBarContext;
    SKUINavigationPaletteController *_paletteController;
    UIViewController *_parentViewController;
    NSMutableArray *_reusableSearchBarControllers;
    NSMapTable *_searchBarControllers;
    NSMutableArray *_sections;
    SKUINavigationBarViewElement *_viewElement;
    SKUIButtonViewElement *_titleButtonViewElement;
    id <SKUINavigationBarControllerDelegate> _delegate;
}

@property (retain, nonatomic) SKUINavigationBarViewElement *navigationBarViewElement;
@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (weak, nonatomic) id <SKUINavigationBarControllerDelegate> delegate;
@property (weak, nonatomic) UIViewController *parentViewController;
@property (nonatomic, readonly) UIView *navigationPaletteView;
@property (nonatomic, readonly) NSArray *existingSearchBarControllers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (double)_availableWidth;
- (id)viewForElementIdentifier:(id)arg1;
- (void)layoutCacheDidFinishBatch:(id)arg1;
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;
- (id)initWithNavigationBarViewElement:(id)arg1;
- (void)_viewElementEventNotification:(id)arg1;
- (id)_barButtonItemWithViewElement:(id)arg1;
- (id)titleViewWithViewElement:(id)arg1;
- (id)fallbackTitleView;
- (id)_navigationBarContext;
- (id)barButtonItemForElementIdentifier:(id)arg1;
- (void)detachNavigationItemControllers;
- (id)_addSearchBarControllerWithViewElement:(id)arg1;
- (id)_buttonWithElement:(id)arg1 width:(double)arg2;
- (void)_titleButtonAction:(id)arg1;
- (void)detachFromNavigationItem:(id)arg1;
- (void)attachToNavigationItem:(id)arg1;
- (void)_fullyReloadSections:(id)arg1 withNavigationItem:(id)arg2;
- (id)_attributedStringForButtonText:(id)arg1 type:(long long)arg2 style:(id)arg3;
- (id)_barButtonItemWithButtonViewElement:(id)arg1;
- (id)_barButtonItemWithSearchBarViewElement:(id)arg1;
- (id)_resourceImageForImageElement:(id)arg1;
- (id)_attributedStringForButton:(id)arg1;
- (void)setReusableSearchBarControllers:(id)arg1;
- (void)updateNavigationItem:(id)arg1;

@end

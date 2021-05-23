/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUINavigationBarSectionController.h>

@class SKUISegmentedControlViewElementController;

__attribute__((visibility("hidden")))
@interface SKUINavigationBarSegmentsController : SKUINavigationBarSectionController

{
    SKUISegmentedControlViewElementController *_underlyingController;
}

- (id)view;
- (id)initWithViewElement:(id)arg1;
- (void)reloadAfterDocumentUpdateWithNavigationItem:(id)arg1;
- (void)willAppearInNavigationBar;

@end

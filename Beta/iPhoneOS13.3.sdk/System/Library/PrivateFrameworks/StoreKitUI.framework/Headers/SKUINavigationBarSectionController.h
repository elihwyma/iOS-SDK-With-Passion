/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSString, SKUINavigationBarContext, SKUIViewElementLayoutContext, UIView;

__attribute__((visibility("hidden")))
@interface SKUINavigationBarSectionController : NSObject

{
    SKUINavigationBarContext *_navigationBarContext;
    SKUIViewElementLayoutContext *_viewLayoutContext;
}

@property (nonatomic, readonly) UIView *view;
@property (retain, nonatomic) SKUINavigationBarContext *context;
@property (nonatomic, readonly) SKUIViewElementLayoutContext *viewLayoutContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)viewForElementIdentifier:(id)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)reloadAfterDocumentUpdateWithNavigationItem:(id)arg1;
- (void)willAppearInNavigationBar;
- (void)reloadSectionViews;
- (id)barButtonItemForElementIdentifier:(id)arg1;

@end

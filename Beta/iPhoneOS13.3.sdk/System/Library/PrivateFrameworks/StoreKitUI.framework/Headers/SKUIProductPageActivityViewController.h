/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIActivityViewController.h>

@class SKUIClientContext;

@interface SKUIProductPageActivityViewController : UIActivityViewController

{
    SKUIClientContext *_clientContext;
}

- (id)_titleForActivity:(id)arg1;
- (id)_activityItemsForProductPageItem:(id)arg1 clientContext:(id)arg2;
- (id)_applicationActivitiesForProductPageItem:(id)arg1 clientContext:(id)arg2;
- (id)_activityItemsForProductPageItemProvider:(CDUnknownBlockType)arg1 clientContext:(id)arg2;
- (id)initWithProductPageItem:(id)arg1 clientContext:(id)arg2;
- (id)initWithProductPageItemProvider:(CDUnknownBlockType)arg1 clientContext:(id)arg2;

@end

/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIViewController.h>

@class SKUIClientContext, SKUIColorScheme;

@protocol SKUISwooshViewControllerDelegate;

@interface SKUISwooshViewController : UIViewController

{
    SKUIClientContext *_clientContext;
    SKUIColorScheme *_colorScheme;
    id <SKUISwooshViewControllerDelegate> _delegate;
}

@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (copy, nonatomic) SKUIColorScheme *colorScheme;
@property (weak, nonatomic) id <SKUISwooshViewControllerDelegate> delegate;

- (id)indexPathsForVisibleItems;
- (void)setImage:(id)arg1 forItemAtIndex:(long long)arg2;
- (struct CGRect)frameForItemAtIndex:(long long)arg1;
- (void)deselectAllItems;
- (id)popImageViewForItemAtIndex:(long long)arg1;
- (void)unhideImages;

@end

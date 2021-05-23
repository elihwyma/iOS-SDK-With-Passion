/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UISearchBar.h>

@interface SKUISearchBar : UISearchBar

{
    double _intrinsicWidth;
}

@property (nonatomic) double intrinsicWidth;

- (id)init;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)showsCancelButton;
- (void)setShowsCancelButton:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setShowsCancelButton:(_Bool)arg1;

@end

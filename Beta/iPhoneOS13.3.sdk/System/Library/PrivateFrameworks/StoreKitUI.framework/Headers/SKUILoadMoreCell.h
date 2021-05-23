/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUITableViewCell.h>

@class UIActivityIndicatorView;

__attribute__((visibility("hidden")))
@interface SKUILoadMoreCell : SKUITableViewCell

{
    UIActivityIndicatorView *_indicator;
}

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)startAnimating;
- (void)stopAnimating;

@end

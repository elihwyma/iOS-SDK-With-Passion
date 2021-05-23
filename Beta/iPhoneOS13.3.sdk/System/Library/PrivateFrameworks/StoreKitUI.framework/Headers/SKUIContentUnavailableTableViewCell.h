/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUITableViewCell.h>

@class NSString, _UIContentUnavailableView;

@interface SKUIContentUnavailableTableViewCell : SKUITableViewCell

{
    _UIContentUnavailableView *_view;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;

- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

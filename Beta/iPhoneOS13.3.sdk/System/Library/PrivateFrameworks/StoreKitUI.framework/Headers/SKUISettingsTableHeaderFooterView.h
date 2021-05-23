/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UITableViewHeaderFooterView.h>

@class SKUISettingsHeaderFooterDescriptionView;

__attribute__((visibility("hidden")))
@interface SKUISettingsTableHeaderFooterView : UITableViewHeaderFooterView

{
    SKUISettingsHeaderFooterDescriptionView *_settingsHeaderFooterDescriptionView;
}

- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)displaySettingsHeaderFooterDescriptionView:(id)arg1;

@end

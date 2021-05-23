/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UITableViewCell.h>

@class SKUISettingDescriptionView, UIImageView;

__attribute__((visibility("hidden")))
@interface SKUISettingsTableViewCell : UITableViewCell

{
    struct UIEdgeInsets _contentInset;
    UIImageView *_disclosureChevron;
    _Bool _hasDisclosureChevron;
    SKUISettingDescriptionView *_settingDescriptionView;
}

@property (nonatomic, readonly) SKUISettingDescriptionView *settingDescriptionView;

- (void)prepareForReuse;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)displaySettingDescriptionView:(id)arg1;

@end

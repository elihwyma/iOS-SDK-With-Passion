/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface SKUISettingDescriptionView : UIView

{
    struct UIEdgeInsets _contentInset;
}

@property (nonatomic) struct UIEdgeInsets contentInset;
@property (nonatomic, readonly) _Bool hasDisclosureChevron;

+ (_Bool)prefetchResourcesForSettingDescription:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (struct CGSize)preferredSizeForSettingDescription:(id)arg1 context:(id)arg2;
+ (void)requestLayoutForSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 settingDescription:(id)arg2 context:(id)arg3;

- (struct UIEdgeInsets)layoutMargins;
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)reloadWithSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3;

@end

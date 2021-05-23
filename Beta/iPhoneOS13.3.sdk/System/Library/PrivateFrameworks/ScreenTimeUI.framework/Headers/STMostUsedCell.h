/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <ScreenTimeUI/STUsageCell.h>

@class UIImageView;

__attribute__((visibility("hidden")))
@interface STMostUsedCell : STUsageCell

{
    UIImageView *_allowanceIconView;
}

@property (nonatomic, readonly) UIImageView *allowanceIconView;

- (void)setValue:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)reloadWithSpecifier:(id)arg1 animated:(_Bool)arg2;

@end

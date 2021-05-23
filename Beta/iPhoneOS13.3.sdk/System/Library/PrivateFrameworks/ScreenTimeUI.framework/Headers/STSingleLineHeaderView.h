/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <ScreenTimeUI/STTableViewHeaderFooterView.h>

@class PSSpecifier, UILabel;

__attribute__((visibility("hidden")))
@interface STSingleLineHeaderView : STTableViewHeaderFooterView

{
    UILabel *_titleLabel;
    PSSpecifier *_specifier;
}

@property (nonatomic, readonly) UILabel *titleLabel;
@property (weak, nonatomic) PSSpecifier *specifier;

- (id)initWithSpecifier:(id)arg1;
- (double)preferredHeightForWidth:(double)arg1;
- (void)reloadFromSpecifier;
- (id)initWithSpecifier:(id)arg1 useContentLayoutGuide:(_Bool)arg2;

@end

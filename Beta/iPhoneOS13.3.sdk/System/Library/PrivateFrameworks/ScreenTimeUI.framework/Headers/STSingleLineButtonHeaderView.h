/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <ScreenTimeUI/STSingleLineHeaderView.h>

@class UIButton;

__attribute__((visibility("hidden")))
@interface STSingleLineButtonHeaderView : STSingleLineHeaderView

{
    UIButton *_button;
}

@property (nonatomic, readonly) UIButton *button;

- (void)setSpecifier:(id)arg1;
- (double)preferredHeightForWidth:(double)arg1;
- (void)reloadFromSpecifier;
- (id)initWithSpecifier:(id)arg1 useContentLayoutGuide:(_Bool)arg2;

@end

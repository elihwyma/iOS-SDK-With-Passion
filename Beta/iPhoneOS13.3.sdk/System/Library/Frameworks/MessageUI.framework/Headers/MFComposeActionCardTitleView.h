/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <UIKit/_UINavigationBarTitleView.h>

@class UIButton, UILabel;

@interface MFComposeActionCardTitleView : _UINavigationBarTitleView

{
    UILabel *_titleLabel;
    UIButton *_closeButton;
}

@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, readonly) UIButton *closeButton;

+ (double)heightForTraitCollection:(id)arg1;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateHeightForCurrentTraits;

@end

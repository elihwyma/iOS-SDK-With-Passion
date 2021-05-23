/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <UIKit/UIView.h>

@class NSPersonNameComponentsFormatter, UILabel;

__attribute__((visibility("hidden")))
@interface WDProfileHeaderView : UIView

{
    UIView *_avatarView;
    UILabel *_nameLabel;
    NSPersonNameComponentsFormatter *_nameFormatter;
}

@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) NSPersonNameComponentsFormatter *nameFormatter;
@property (retain, nonatomic) UIView *avatarView;
@property (nonatomic, getter=isNameHidden) _Bool nameHidden;

+ (_Bool)requiresConstraintBasedLayout;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_updateFont;
- (void)setFirstName:(id)arg1 lastName:(id)arg2;

@end

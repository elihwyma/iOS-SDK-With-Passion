/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIListCollectionViewCell.h>

@class NSString, UISwitch, UITextField, VUIDebugViewDefaults, VUILabel, VUISeparatorView, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIDebugCollectionViewDefaultsCell : VUIListCollectionViewCell

{
    VUITextLayout *_titleLayout;
    VUILabel *_titleLabel;
    VUITextLayout *_subtitleLayout;
    VUILabel *_subtitleLabel;
    UISwitch *_defaultsSwitch;
    UITextField *_textField;
    VUIDebugViewDefaults *_defaults;
    VUISeparatorView *_separatorView;
}

@property (retain, nonatomic) VUITextLayout *titleLayout;
@property (retain, nonatomic) VUILabel *titleLabel;
@property (retain, nonatomic) VUITextLayout *subtitleLayout;
@property (retain, nonatomic) VUILabel *subtitleLabel;
@property (retain, nonatomic) UISwitch *defaultsSwitch;
@property (retain, nonatomic) UITextField *textField;
@property (retain, nonatomic) VUIDebugViewDefaults *defaults;
@property (retain, nonatomic) VUISeparatorView *separatorView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)_defaultsSwitchPressed:(id)arg1;
- (void)configureCellWithDefaults:(id)arg1;

@end

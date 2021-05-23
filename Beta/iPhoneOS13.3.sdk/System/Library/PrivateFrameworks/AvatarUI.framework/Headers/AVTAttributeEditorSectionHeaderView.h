/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <UIKit/UICollectionReusableView.h>

@class NSString, UIButton, UILabel;

@protocol AVTAttributeEditorSectionHeaderViewDelegate, AVTAvatarAttributeEditorHeaderPicker;

@interface AVTAttributeEditorSectionHeaderView : UICollectionReusableView

{
    id <AVTAttributeEditorSectionHeaderViewDelegate> _delegate;
    id <AVTAvatarAttributeEditorHeaderPicker> _accessoryPicker;
    UILabel *_label;
    UIButton *_accessoryButton;
}

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIButton *accessoryButton;
@property (copy, nonatomic) NSString *displayString;
@property (weak, nonatomic) id <AVTAttributeEditorSectionHeaderViewDelegate> delegate;
@property (retain, nonatomic) id <AVTAvatarAttributeEditorHeaderPicker> accessoryPicker;

+ (id)reuseIdentifier;

- (_Bool)isRTL;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)pickerButtonTapped;
- (void)updateButtonForSelectedSectionItem;
- (void)createAccessoryButtonIfNeeded;
- (_Bool)shouldPresentAlert;

@end

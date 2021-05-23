/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UICollectionReusableView.h>

@class UIButton, UILabel, UIStackView;

__attribute__((visibility("hidden")))
@interface CNPhotoPickerSectionHeader : UICollectionReusableView

{
    UILabel *_titleLabel;
    UIButton *_actionButton;
    CDUnknownBlockType _actionBlock;
    UIStackView *_stackView;
}

@property (retain, nonatomic) UIStackView *stackView;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, readonly) UIButton *actionButton;
@property (copy, nonatomic) CDUnknownBlockType actionBlock;

+ (id)titleLabelFont;
+ (id)actionButtonFont;
+ (id)reusableIdentifier;
+ (double)heightNeededForAccessibilityLayoutIncludingActionButton:(_Bool)arg1;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setupConstraints;
- (void)updateStyle:(id)arg1;
- (void)updateDynamicStackViewProperties;
- (void)actionButtonPressed:(id)arg1;

@end

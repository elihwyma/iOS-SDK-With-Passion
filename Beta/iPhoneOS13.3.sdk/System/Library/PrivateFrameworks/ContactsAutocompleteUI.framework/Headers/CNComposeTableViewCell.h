/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
 */

#import <AppSupportUI/NUITableViewContainerCell.h>

@class CNComposeRecipient, NSString, NUIContainerStackView, UIColor, UILabel;

@interface CNComposeTableViewCell : NUITableViewContainerCell

{
    CNComposeRecipient *_recipient;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UIColor *_labelColor;
    double _trailingButtonMidlineInsetFromLayoutMargin;
    double _trailingButtonWidth;
    NUIContainerStackView *_labelViewStack;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UIColor *labelColor;
@property (retain, nonatomic) NUIContainerStackView *labelViewStack;
@property (retain, nonatomic) CNComposeRecipient *recipient;
@property (nonatomic) double trailingButtonMidlineInsetFromLayoutMargin;
@property (nonatomic, readonly) double trailingButtonWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)identifier;
+ (Class)containerViewClass;
+ (double)additionalSeparatorInset;
+ (id)axCappedSymbolConfigurationIsBold:(_Bool)arg1;
+ (void)requireIntrinsicSizeForView:(id)arg1;
+ (id)axCappedFontWithTextStyle:(id)arg1 bold:(_Bool)arg2;

- (void)layoutMarginsDidChange;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (struct CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize)arg2 forArrangedSubview:(id)arg3;
- (void)containerViewDidLayoutArrangedSubviews:(id)arg1;
- (id)titleTextStyle;
- (void)labelsChangedWidth:(double)arg1;
- (id)labelWithTextStyle:(id)arg1;
- (void)settrailingButtonMidlineInsetFromLayoutMargin:(double)arg1;

@end

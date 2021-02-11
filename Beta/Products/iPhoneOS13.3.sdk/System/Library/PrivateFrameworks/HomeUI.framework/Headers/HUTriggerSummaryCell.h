/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUTriggerSummaryCell : UITableViewCell <HUCellProtocol, HUDisableableCellProtocol, HUSelectableCellProtocol> {
    bool  _canBeSelected;
    UIColor * _cellColor;
    UIFont * _descriptionFont;
    UIImage * _descriptionIcon;
    UIImageView * _descriptionIconView;
    UILabel * _descriptionLabel;
    NSString * _descriptionText;
    bool  _disabled;
    bool  _hideDescription;
    bool  _hideDescriptionIcon;
    bool  _hideTitle;
    NSArray * _horizontalLabelConstraints;
    HUIconListView * _iconContainerView;
    NSArray * _iconDescriptors;
    HFItem * _item;
    double  _textAlpha;
    UIView * _textContainerView;
    UIFont * _titleFont;
    UILabel * _titleLabel;
    NSString * _titleText;
    NSArray * _verticalLabelConstraints;
}

@property (nonatomic) bool canBeSelected;
@property (nonatomic, retain) UIColor *cellColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIFont *descriptionFont;
@property (nonatomic, retain) UIImage *descriptionIcon;
@property (nonatomic, retain) UIImageView *descriptionIconView;
@property (nonatomic, retain) UILabel *descriptionLabel;
@property (nonatomic, retain) NSString *descriptionText;
@property (getter=isDisabled, nonatomic) bool disabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideDescription;
@property (nonatomic) bool hideDescriptionIcon;
@property (nonatomic) bool hideTitle;
@property (nonatomic, retain) NSArray *horizontalLabelConstraints;
@property (nonatomic, retain) HUIconListView *iconContainerView;
@property (nonatomic, retain) NSArray *iconDescriptors;
@property (nonatomic, retain) HFItem *item;
@property (nonatomic) <HUResizableCellDelegate> *resizingDelegate;
@property (readonly) Class superclass;
@property (nonatomic) double textAlpha;
@property (nonatomic, retain) UIView *textContainerView;
@property (nonatomic, retain) UIFont *titleFont;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) NSString *titleText;
@property (nonatomic, retain) NSArray *verticalLabelConstraints;

- (void).cxx_destruct;
- (void)_addDescriptionIconView;
- (void)_addDescriptionLabel;
- (void)_addTitleLabel;
- (bool)canBeSelected;
- (id)cellColor;
- (id)descriptionFont;
- (id)descriptionIcon;
- (id)descriptionIconView;
- (id)descriptionLabel;
- (id)descriptionText;
- (bool)hideDescription;
- (bool)hideDescriptionIcon;
- (bool)hideTitle;
- (id)horizontalLabelConstraints;
- (id)iconContainerView;
- (id)iconDescriptors;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isDisabled;
- (id)item;
- (void)prepareForReuse;
- (void)setCanBeSelected:(bool)arg1;
- (void)setCellColor:(id)arg1;
- (void)setDescriptionFont:(id)arg1;
- (void)setDescriptionIcon:(id)arg1;
- (void)setDescriptionIconView:(id)arg1;
- (void)setDescriptionLabel:(id)arg1;
- (void)setDescriptionText:(id)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setHideDescription:(bool)arg1;
- (void)setHideDescriptionIcon:(bool)arg1;
- (void)setHideTitle:(bool)arg1;
- (void)setHorizontalLabelConstraints:(id)arg1;
- (void)setIconContainerView:(id)arg1;
- (void)setIconDescriptors:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setTextAlpha:(double)arg1;
- (void)setTextContainerView:(id)arg1;
- (void)setTitleFont:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTitleText:(id)arg1;
- (void)setUpIconContainerViewConstraints;
- (void)setUpTextContainerViewConstraints;
- (void)setVerticalLabelConstraints:(id)arg1;
- (double)textAlpha;
- (id)textContainerView;
- (id)titleFont;
- (id)titleLabel;
- (id)titleText;
- (void)updateConstraints;
- (void)updateHorizontalLabelConstraints;
- (void)updateSelectionUI;
- (void)updateTitle;
- (void)updateUIIconsWithResults:(id)arg1;
- (void)updateUITextWithResults:(id)arg1;
- (void)updateUIWithAnimation:(bool)arg1;
- (void)updateVerticalLabelConstraints;
- (id)verticalLabelConstraints;

@end
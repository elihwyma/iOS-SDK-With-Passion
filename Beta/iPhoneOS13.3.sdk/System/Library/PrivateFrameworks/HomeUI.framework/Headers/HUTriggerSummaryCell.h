/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UITableViewCell.h>

#import <HomeUI/Swift-Protocol.h>

@class HFItem, HUIconListView, NSArray, NSString, UIColor, UIFont, UIImage, UIImageView, UILabel, UIView;

@protocol HUResizableCellDelegate;

@interface HUTriggerSummaryCell : UITableViewCell <Swift>

{
    _Bool _disabled;
    _Bool _canBeSelected;
    _Bool _hideTitle;
    _Bool _hideDescription;
    _Bool _hideDescriptionIcon;
    HFItem *_item;
    NSString *_titleText;
    NSString *_descriptionText;
    UIImage *_descriptionIcon;
    NSArray *_iconDescriptors;
    UIColor *_cellColor;
    NSArray *_verticalLabelConstraints;
    NSArray *_horizontalLabelConstraints;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UIImageView *_descriptionIconView;
    HUIconListView *_iconContainerView;
    UIView *_textContainerView;
    double _textAlpha;
    UIFont *_titleFont;
    UIFont *_descriptionFont;
}

@property (retain, nonatomic) NSArray *verticalLabelConstraints;
@property (retain, nonatomic) NSArray *horizontalLabelConstraints;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIImageView *descriptionIconView;
@property (retain, nonatomic) HUIconListView *iconContainerView;
@property (retain, nonatomic) UIView *textContainerView;
@property (nonatomic) double textAlpha;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIFont *descriptionFont;
@property (retain, nonatomic) NSString *titleText;
@property (nonatomic) _Bool hideTitle;
@property (retain, nonatomic) NSString *descriptionText;
@property (nonatomic) _Bool hideDescription;
@property (retain, nonatomic) UIImage *descriptionIcon;
@property (nonatomic) _Bool hideDescriptionIcon;
@property (retain, nonatomic) NSArray *iconDescriptors;
@property (retain, nonatomic) UIColor *cellColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) HFItem *item;
@property (weak, nonatomic) id <HUResizableCellDelegate> resizingDelegate;
@property (nonatomic, getter=isDisabled) _Bool disabled;
@property (nonatomic) _Bool canBeSelected;

- (void)prepareForReuse;
- (void)updateConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateTitle;
- (void)updateUIWithAnimation:(_Bool)arg1;
- (void)setUpIconContainerViewConstraints;
- (void)setUpTextContainerViewConstraints;
- (void)_addTitleLabel;
- (void)_addDescriptionLabel;
- (void)_addDescriptionIconView;
- (void)updateSelectionUI;
- (void)updateVerticalLabelConstraints;
- (void)updateHorizontalLabelConstraints;
- (void)updateUITextWithResults:(id)arg1;
- (void)updateUIIconsWithResults:(id)arg1;

@end

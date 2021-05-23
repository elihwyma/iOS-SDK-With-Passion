/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUIconCell.h>

@class NSArray, NSString, UIFont, UIImage, UIImageView, UILabel;

@interface HUTitleDescriptionCell : HUIconCell

{
    _Bool _hideTitle;
    _Bool _hideDescription;
    _Bool _hideDescriptionIcon;
    _Bool _adjustsTextColorWhenDisabled;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    NSString *_titleText;
    UIFont *_titleFont;
    unsigned long long _maxNumberOfTitleLines;
    NSString *_descriptionText;
    UIFont *_descriptionFont;
    unsigned long long _maxNumberOfDescriptionLines;
    UIImage *_descriptionIcon;
    double _textAlpha;
    NSArray *_verticalLabelConstraints;
    NSArray *_horizontalLabelConstraints;
    UIImageView *_descriptionIconView;
}

@property (retain, nonatomic) NSArray *verticalLabelConstraints;
@property (retain, nonatomic) NSArray *horizontalLabelConstraints;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, readonly) UILabel *descriptionLabel;
@property (nonatomic, readonly) UIImageView *descriptionIconView;
@property (retain, nonatomic) NSString *titleText;
@property (retain, nonatomic) UIFont *titleFont;
@property (nonatomic) _Bool hideTitle;
@property (nonatomic) unsigned long long maxNumberOfTitleLines;
@property (retain, nonatomic) NSString *descriptionText;
@property (retain, nonatomic) UIFont *descriptionFont;
@property (nonatomic) _Bool hideDescription;
@property (nonatomic) unsigned long long maxNumberOfDescriptionLines;
@property (retain, nonatomic) UIImage *descriptionIcon;
@property (nonatomic) _Bool hideDescriptionIcon;
@property (nonatomic) double textAlpha;
@property (nonatomic) _Bool adjustsTextColorWhenDisabled;

- (void)prepareForReuse;
- (void)updateConstraints;
- (void)setDisabled:(_Bool)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateTitle;
- (void)updateUIWithAnimation:(_Bool)arg1;
- (void)_addTitleLabel;
- (void)_addDescriptionLabel;
- (void)_addDescriptionIconView;
- (void)updateVerticalLabelConstraints;
- (void)updateHorizontalLabelConstraints;

@end

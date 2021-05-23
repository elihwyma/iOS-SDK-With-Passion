/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

@class NSArray, UIColor, UIFont, UILabel, UIStackView;

@protocol HFStringGenerator;

@interface HUTitleDescriptionContentView : UIView

{
    _Bool _disabled;
    UILabel *_titleLabel;
    id <HFStringGenerator> _titleText;
    UIColor *_titleTextColor;
    id <HFStringGenerator> _descriptionText;
    UIColor *_descriptionTextColor;
    UILabel *_descriptionLabel;
    UIStackView *_stackView;
    NSArray *_verticalLabelConstraints;
    NSArray *_horizontalLabelConstraints;
}

@property (nonatomic, readonly) UILabel *descriptionLabel;
@property (nonatomic, readonly) UIStackView *stackView;
@property (retain, nonatomic) NSArray *verticalLabelConstraints;
@property (retain, nonatomic) NSArray *horizontalLabelConstraints;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (retain, nonatomic) id <HFStringGenerator> titleText;
@property (retain, nonatomic) UIColor *titleTextColor;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) id <HFStringGenerator> descriptionText;
@property (retain, nonatomic) UIColor *descriptionTextColor;
@property (retain, nonatomic) UIFont *descriptionFont;
@property (nonatomic, getter=isDisabled) _Bool disabled;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)_setupTitleLabel;
- (void)_setupStackView;
- (void)_setupDescriptionLabel;
- (void)_updateLabel:(id)arg1 withContent:(id)arg2;

@end

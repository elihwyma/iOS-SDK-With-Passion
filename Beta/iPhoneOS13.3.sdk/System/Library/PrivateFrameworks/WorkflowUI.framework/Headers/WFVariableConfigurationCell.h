/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UITableViewCell.h>

@class CAShapeLayer, NSString, UIImageView, UIView;

@protocol WFVariableConfigurationCellSizingDelegate;

@interface WFVariableConfigurationCell : UITableViewCell

{
    _Bool _showsSeparator;
    _Bool _roundsCorners;
    NSString *_titleText;
    NSString *_valueText;
    unsigned long long _roundedCorners;
    unsigned long long _accessory;
    id <WFVariableConfigurationCellSizingDelegate> _sizingDelegate;
    UIImageView *_disclosureImageView;
    CAShapeLayer *_maskLayer;
    UIView *_separatorView;
}

@property (nonatomic, readonly) UIImageView *disclosureImageView;
@property (nonatomic, readonly) CAShapeLayer *maskLayer;
@property (nonatomic, readonly) UIView *separatorView;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *valueText;
@property (nonatomic) _Bool showsSeparator;
@property (nonatomic) _Bool roundsCorners;
@property (nonatomic) unsigned long long roundedCorners;
@property (nonatomic) unsigned long long accessory;
@property (weak, nonatomic) id <WFVariableConfigurationCellSizingDelegate> sizingDelegate;

+ (long long)cellStyle;

- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateMask;

@end

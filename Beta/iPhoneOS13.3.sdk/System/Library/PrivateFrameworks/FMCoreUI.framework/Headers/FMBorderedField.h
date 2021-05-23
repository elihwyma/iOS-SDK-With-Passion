/*
 Image: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
 */

#import <UIKit/UIView.h>

@class FMHorizontalRule, UIColor;

@interface FMBorderedField : UIView

{
    _Bool _isConfigured;
    UIColor *_borderColor;
    FMHorizontalRule *_topRule;
    FMHorizontalRule *_bottomRule;
}

@property (nonatomic) _Bool isConfigured;
@property (retain, nonatomic) FMHorizontalRule *topRule;
@property (retain, nonatomic) FMHorizontalRule *bottomRule;
@property (retain, nonatomic) UIColor *borderColor;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)awakeFromNib;
- (void)prepareForInterfaceBuilder;
- (void)commonSetup;

@end

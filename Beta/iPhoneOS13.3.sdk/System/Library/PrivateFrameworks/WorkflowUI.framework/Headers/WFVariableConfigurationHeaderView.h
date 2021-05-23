/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIView.h>

@class NSString, UIButton, UIImage;

@protocol WFVariableConfigurationHeaderViewDelegate;

@interface WFVariableConfigurationHeaderView : UIView

{
    id <WFVariableConfigurationHeaderViewDelegate> _delegate;
    UIButton *_titleButton;
    UIButton *_typeButton;
}

@property (weak, nonatomic) UIButton *titleButton;
@property (weak, nonatomic) UIButton *typeButton;
@property (retain, nonatomic) UIImage *variableIcon;
@property (copy, nonatomic) NSString *variableTitle;
@property (copy, nonatomic) NSString *variableType;
@property (nonatomic) _Bool showsVariableType;
@property (weak, nonatomic) id <WFVariableConfigurationHeaderViewDelegate> delegate;

+ (id)disclosureImage;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)typeButtonTapped;

@end

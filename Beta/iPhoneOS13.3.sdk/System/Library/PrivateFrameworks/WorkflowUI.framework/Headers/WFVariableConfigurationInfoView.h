/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface WFVariableConfigurationInfoView : UIView

{
    NSString *_heading;
    NSString *_subheading;
    UILabel *_textLabel;
}

@property (weak, nonatomic) UILabel *textLabel;
@property (copy, nonatomic) NSString *heading;
@property (copy, nonatomic) NSString *subheading;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)updateLabel;

@end

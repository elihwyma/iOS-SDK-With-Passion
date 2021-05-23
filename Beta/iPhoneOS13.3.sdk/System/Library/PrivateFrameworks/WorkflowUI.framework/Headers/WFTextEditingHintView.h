/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface WFTextEditingHintView : UIView

{
    NSString *_hintText;
    UIView *_backgroundView;
    UILabel *_hintLabel;
}

@property (weak, nonatomic) UIView *backgroundView;
@property (weak, nonatomic) UILabel *hintLabel;
@property (copy, nonatomic) NSString *hintText;

- (id)initWithFrame:(struct CGRect)arg1;

@end

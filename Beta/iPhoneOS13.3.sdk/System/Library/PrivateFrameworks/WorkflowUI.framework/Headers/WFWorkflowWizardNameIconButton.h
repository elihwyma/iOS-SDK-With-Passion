/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIButton.h>

@class NSData, UIImageView, WFWorkflowIcon;

@interface WFWorkflowWizardNameIconButton : UIButton

{
    WFWorkflowIcon *_icon;
    NSData *_customImageData;
    UIImageView *_backgroundImageView;
}

@property (weak, nonatomic) UIImageView *backgroundImageView;
@property (nonatomic, readonly) WFWorkflowIcon *icon;
@property (nonatomic, readonly) NSData *customImageData;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setIcon:(id)arg1 customImageData:(id)arg2;

@end

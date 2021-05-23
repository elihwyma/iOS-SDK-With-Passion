/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIButton.h>

@class WFModuleOutputModel;

@interface WFModuleOutputButton : UIButton

{
    WFModuleOutputModel *_model;
}

@property (retain, nonatomic) WFModuleOutputModel *model;

- (void)tintColorDidChange;
- (void)updateImages;

@end

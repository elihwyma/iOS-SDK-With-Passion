/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UITextField.h>

@interface WFTableCellTextField : UITextField

{
    struct UIEdgeInsets _edgeInsets;
}

@property (nonatomic) struct UIEdgeInsets edgeInsets;

- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;

@end

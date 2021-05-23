/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UICollectionViewCell.h>

@class UIButton;

@interface WFVariableShortcutsBarButtonCell : UICollectionViewCell

{
    UIButton *_contentButton;
}

@property (nonatomic, readonly) UIButton *contentButton;

+ (id)titleFont;
+ (double)widthWithTitle:(id)arg1 icon:(id)arg2;

- (id)initWithFrame:(struct CGRect)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIImageView.h>

@interface WFCircularImageView : UIImageView

{
    _Bool _circular;
    _Bool _hasBorder;
}

@property (nonatomic, getter=isCircular) _Bool circular;
@property (nonatomic) _Bool hasBorder;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end

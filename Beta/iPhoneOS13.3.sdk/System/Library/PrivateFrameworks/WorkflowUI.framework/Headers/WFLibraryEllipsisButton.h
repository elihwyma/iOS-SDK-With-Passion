/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIButton.h>

@class CALayer;

@interface WFLibraryEllipsisButton : UIButton

{
    CALayer *_backgroundCircleLayer;
}

@property (weak, nonatomic) CALayer *backgroundCircleLayer;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

@end

/*
 Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

#import <UIKit/UIView.h>

@class UILabel;

@interface CPSLabeledValueView : UIView

{
    UILabel *_valueText;
    UILabel *_label;
}

@property (nonatomic, readonly) UILabel *valueText;
@property (nonatomic, readonly) UILabel *label;

- (id)init;
- (void)setTextColor:(id)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, WFVariable;

@interface WFVariableCell : UICollectionViewCell

{
    WFVariable *_variable;
    UIImageView *_imageView;
}

@property (nonatomic, readonly) UIImageView *imageView;
@property (retain, nonatomic) WFVariable *variable;

+ (id)titleFont;
+ (double)widthWithVariable:(id)arg1 height:(double)arg2;

- (id)initWithFrame:(struct CGRect)arg1;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (void)setHighlighted:(_Bool)arg1;
- (void)tintColorDidChange;
- (void)updateVariableImage;

@end

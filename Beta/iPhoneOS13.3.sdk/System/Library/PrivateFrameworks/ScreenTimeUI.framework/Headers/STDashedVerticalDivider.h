/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSLayoutXAxisAnchor, NSLayoutYAxisAnchor, NSString, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface STDashedVerticalDivider : UIView

{
    _Bool _selected;
    NSString *_labelText;
    NSLayoutXAxisAnchor *_dashedLineCenterXAnchor;
    NSLayoutYAxisAnchor *_labelTopAnchor;
    UIImageView *_dashedLine;
    UILabel *_label;
    NSLayoutConstraint *_labelLeftConstraint;
}

@property (retain, nonatomic) UIImageView *dashedLine;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) NSLayoutConstraint *labelLeftConstraint;
@property (readonly) UIImage *dashedLineImage;
@property (copy, nonatomic) NSString *labelText;
@property (readonly) NSLayoutXAxisAnchor *dashedLineCenterXAnchor;
@property (readonly) NSLayoutYAxisAnchor *labelTopAnchor;
@property (nonatomic, getter=isSelected) _Bool selected;

- (id)initWithTintColor:(id)arg1;

@end

/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UIView.h>

@class EKUIDividedGridViewController, NSLayoutConstraint, UIColor, UITextLabel;

@interface EKUIDividedGridViewCell : UIView

{
    UIColor *_bgColor;
    _Bool _selected;
    UITextLabel *_label;
    EKUIDividedGridViewController *_viewController;
    NSLayoutConstraint *_widthConstraint;
}

@property (weak) EKUIDividedGridViewController *viewController;
@property (weak) NSLayoutConstraint *widthConstraint;
@property (retain) UITextLabel *label;
@property (nonatomic) _Bool selected;

- (id)init;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)selectedTextColor;
- (id)initWithBackgroundColor:(id)arg1;

@end

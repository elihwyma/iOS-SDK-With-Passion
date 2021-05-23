/*
 Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

#import <UIKit/UIView.h>

@class UILayoutGuide;

@interface AAUIBuddyView : UIView

{
    UILayoutGuide *_contentLayoutGuide;
}

@property (nonatomic, readonly) UILayoutGuide *contentLayoutGuide;

+ (_Bool)requiresConstraintBasedLayout;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

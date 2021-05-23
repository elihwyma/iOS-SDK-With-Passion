/*
 Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

#import <UIKit/UIView.h>

@class UIStackView;

@interface AAUIServiceIconView : UIView

{
    UIStackView *_stackView;
}

+ (id)iconNames;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)didMoveToWindow;
- (void)_updateStackViewSpacing;

@end

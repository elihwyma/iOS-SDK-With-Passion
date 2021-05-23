/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIButton.h>

@class NSLayoutConstraint;

@interface HKDynamicButton : UIButton

{
    NSLayoutConstraint *_heightConstraint;
}

@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;

- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateForCurrentSizeCategory;

@end

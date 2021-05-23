/*
 Image: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
 */

#import <UIKit/UIButton.h>

@class NSLayoutConstraint;

@interface FM_Workaround_30408319_Button : UIButton

{
    NSLayoutConstraint *_fm_workaround_height_constraint;
}

@property (retain, nonatomic) NSLayoutConstraint *fm_workaround_height_constraint;

- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;
- (void)setAttributedTitle:(id)arg1 forState:(unsigned long long)arg2;

@end

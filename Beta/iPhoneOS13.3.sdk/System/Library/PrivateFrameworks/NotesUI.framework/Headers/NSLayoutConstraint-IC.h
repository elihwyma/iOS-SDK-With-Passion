/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSLayoutConstraint.h>

@interface NSLayoutConstraint (IC)

+ (id)ic_constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 constant:(double)arg7 priority:(float)arg8;
+ (id)ic_widthLayoutConstraintsForView:(struct UIView *)arg1 minValue:(double)arg2 maxValue:(double)arg3;
+ (id)ic_widthLayoutConstraintsForView:(struct UIView *)arg1 minValue:(double)arg2;
+ (id)ic_constraints:(id)arg1 affectingViews:(id)arg2;

@end

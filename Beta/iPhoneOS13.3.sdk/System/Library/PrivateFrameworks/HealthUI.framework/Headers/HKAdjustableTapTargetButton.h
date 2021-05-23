/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIButton.h>

@interface HKAdjustableTapTargetButton : UIButton

{
    _Bool _insetSet;
    struct UIEdgeInsets _hitTargetInsets;
}

@property (nonatomic) struct UIEdgeInsets hitTargetInsets;

- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

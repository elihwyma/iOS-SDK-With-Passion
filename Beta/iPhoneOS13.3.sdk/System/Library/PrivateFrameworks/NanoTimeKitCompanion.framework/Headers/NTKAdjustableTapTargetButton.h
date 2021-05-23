/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIButton.h>

@interface NTKAdjustableTapTargetButton : UIButton

{
    struct UIEdgeInsets _touchEdgeInsets;
}

@property (nonatomic) struct UIEdgeInsets touchEdgeInsets;

- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

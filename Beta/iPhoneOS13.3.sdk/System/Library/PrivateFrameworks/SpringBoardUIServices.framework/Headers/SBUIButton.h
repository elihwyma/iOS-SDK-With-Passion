/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <UIKit/UIButton.h>

@interface SBUIButton : UIButton

{
    struct UIEdgeInsets _hitAreaAdjustments;
}

@property (nonatomic) struct UIEdgeInsets hitAreaAdjustments;

- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

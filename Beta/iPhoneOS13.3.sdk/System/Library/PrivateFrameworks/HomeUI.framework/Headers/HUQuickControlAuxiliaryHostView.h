/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

@protocol HUQuickControlAuxiliaryView;

@interface HUQuickControlAuxiliaryHostView : UIView

{
    UIView<HUQuickControlAuxiliaryView> *_auxiliaryView;
}

@property (retain, nonatomic) UIView<HUQuickControlAuxiliaryView> *auxiliaryView;

- (void)updateConstraints;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

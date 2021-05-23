/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <UIKit/UIView.h>

@class CAShapeLayer;

@interface SearchUICheckView : UIView

{
    CAShapeLayer *_checkLayer;
}

@property (retain, nonatomic) CAShapeLayer *checkLayer;

- (void)didMoveToWindow;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)tlk_updateForAppearance:(id)arg1;

@end

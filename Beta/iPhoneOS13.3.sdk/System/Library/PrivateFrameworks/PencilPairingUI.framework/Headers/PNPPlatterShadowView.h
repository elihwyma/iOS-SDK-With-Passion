/*
 Image: /System/Library/PrivateFrameworks/PencilPairingUI.framework/PencilPairingUI
 */

#import <UIKit/UIView.h>

@class UIBezierPath, UIColor;

@interface PNPPlatterShadowView : UIView

@property (retain, nonatomic) UIColor *shadowColor;
@property (nonatomic) struct CGSize shadowOffset;
@property (nonatomic) double shadowOpacity;
@property (nonatomic) double shadowRadius;
@property (retain, nonatomic) UIBezierPath *shadowPath;

- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;

@end

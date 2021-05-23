/*
 Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

#import <UIKit/UIView.h>

@class UIBezierPath, UIImage;

@interface CNFRegShadowView : UIView

{
    struct CGRect _cachedBounds;
    UIBezierPath *_cachedPath;
    UIImage *_shadowImage;
}

@property (nonatomic) struct CGRect cachedBounds;
@property (retain, nonatomic) UIBezierPath *cachedPath;
@property (retain, nonatomic) UIImage *shadowImage;

- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 shadowImage:(id)arg2;

@end

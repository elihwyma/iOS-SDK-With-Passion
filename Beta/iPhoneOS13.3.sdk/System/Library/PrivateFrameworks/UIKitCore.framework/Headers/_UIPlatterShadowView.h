/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class UIBezierPath, UIColor, _UIShapeView;

__attribute__((visibility("hidden")))
@interface _UIPlatterShadowView : UIView

{
    _Bool _punchOut;
    _UIShapeView *_shadowMaskView;
}

@property (nonatomic, readonly) _UIShapeView *shadowMaskView;
@property (nonatomic) _Bool punchOut;
@property (retain, nonatomic) UIColor *shadowColor;
@property (nonatomic) double shadowOpacity;
@property (nonatomic) struct CGSize shadowOffset;
@property (nonatomic) double shadowRadius;
@property (retain, nonatomic) UIBezierPath *shadowPath;

- (id)initWithShadowPath:(id)arg1;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;

@end

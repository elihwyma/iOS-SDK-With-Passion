/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class UIImage;

@interface _UIFloatingShadowView : UIView

{
    UIView *_shadowView;
    struct CATransform3D _shadowTransform;
    _Bool _shadowEnabled;
    _Bool __disableOutsetShadowPath;
    double _shadowRadius;
    double _shadowOpacity;
    double _shadowVerticalOffset;
    double _shadowExpansion;
    UIImage *_shadowImage;
    double _cornerRadius;
    struct CGSize _shadowSize;
    struct CGRect _shadowContentsCenter;
}

@property (nonatomic, getter=isShadowEnabled) _Bool shadowEnabled;
@property (nonatomic) struct CGSize shadowSize;
@property (nonatomic) double shadowRadius;
@property (nonatomic) double shadowOpacity;
@property (nonatomic) double shadowVerticalOffset;
@property (nonatomic) double shadowExpansion;
@property (retain, nonatomic) UIImage *shadowImage;
@property (nonatomic) struct CGRect shadowContentsCenter;
@property (nonatomic) double cornerRadius;
@property (nonatomic) _Bool _disableOutsetShadowPath;

+ (Class)layerClass;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_updateShadowLayer;
- (void)_setShadowImageIfNeeded;
- (void)_layoutShadow;
- (struct CGPath *)_shadowPathForSize:(struct CGSize)arg1 radius:(double)arg2;

@end

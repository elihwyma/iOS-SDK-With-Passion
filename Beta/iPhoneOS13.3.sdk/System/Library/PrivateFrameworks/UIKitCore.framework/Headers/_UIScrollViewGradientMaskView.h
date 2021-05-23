/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

__attribute__((visibility("hidden")))
@interface _UIScrollViewGradientMaskView : UIView

{
    long long _gradientDirection;
    struct UIEdgeInsets _gradientStartInsets;
    struct UIEdgeInsets _gradientEndInsets;
    struct UIEdgeInsets _gradientIntensities;
}

@property (nonatomic) struct UIEdgeInsets gradientStartInsets;
@property (nonatomic) struct UIEdgeInsets gradientEndInsets;
@property (nonatomic) struct UIEdgeInsets gradientIntensities;
@property (nonatomic) long long gradientDirection;

+ (Class)layerClass;

- (id)initWithFrame:(struct CGRect)arg1;
- (id)gradientLayer;
- (void)updateWithFrame:(struct CGRect)arg1 gradientStartInsets:(struct UIEdgeInsets)arg2 gradientEndInsets:(struct UIEdgeInsets)arg3 gradientIntensities:(struct UIEdgeInsets)arg4;

@end

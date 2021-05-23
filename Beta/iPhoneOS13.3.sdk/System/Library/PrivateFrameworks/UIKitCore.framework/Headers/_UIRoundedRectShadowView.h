/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIShadowView.h>

__attribute__((visibility("hidden")))
@interface _UIRoundedRectShadowView : _UIShadowView

{
    struct UIEdgeInsets _shadowOutsets;
    double _maskCornerRadius;
}

@property (nonatomic, readonly) double maskCornerRadius;

+ (struct UIEdgeInsets)_expansionInsetForShadowImage;
+ (_Bool)_shouldCutoutShadow;

- (id)initWithCornerRadius:(double)arg1;
- (void)layoutSubviews;
- (struct CGRect)frameWithContentWithFrame:(struct CGRect)arg1;
- (void)_loadImageIfNecessary;
- (void)_updateShadowOutsetsIfNecessary;

@end

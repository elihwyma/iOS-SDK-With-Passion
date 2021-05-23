/*
 Image: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
 */

#import <UIKit/UIImageView.h>

@interface PLShadowView : UIImageView

{
    struct UIEdgeInsets _shadowOutsets;
    double _maskCornerRadius;
    CDStruct_b48b9fb5 _shadowAttributes;
}

@property (nonatomic, readonly) CDStruct_b48b9fb5 shadowAttributes;
@property (nonatomic, readonly) double maskCornerRadius;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (void)_dynamicUserInterfaceTraitDidChange;
- (struct CGRect)frameWithContentWithFrame:(struct CGRect)arg1;
- (void)_updateShadowVisualStyling;
- (void)_loadImageIfNecessary;
- (void)_updateShadowOutsetsIfNecessary;
- (id)initWithShadowAttributes:(CDStruct_b48b9fb5)arg1 maskCornerRadius:(double)arg2;

@end

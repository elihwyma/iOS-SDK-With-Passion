/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIButton.h>

@interface CAMIntensityButton : UIButton

{
    double _intensityValue;
    long long _layoutStyle;
    long long _orientation;
    struct UIEdgeInsets _tappableEdgeInsets;
}

@property (nonatomic) double intensityValue;
@property (nonatomic, getter=isActive) _Bool active;
@property (nonatomic) struct UIEdgeInsets tappableEdgeInsets;
@property (nonatomic) long long layoutStyle;
@property (nonatomic) long long orientation;

- (struct UIEdgeInsets)alignmentRectInsets;
- (void)setOrientation:(long long)arg1 animated:(_Bool)arg2;
- (void)setActive:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithLayoutStyle:(long long)arg1;
- (void)_updateColorsAnimated:(_Bool)arg1;

@end

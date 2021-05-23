/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <UIKit/_UILegibilityView.h>

@class NSString, UIImage, _UILegibilitySettings;

@interface SBUILegibilityView : _UILegibilityView

{
    _UILegibilitySettings *_legibilitySettings;
    long long _tintStyle;
    UIImage *_tintImage;
    struct UIEdgeInsets _hitTestEdgeInsets;
}

@property (nonatomic) struct UIEdgeInsets hitTestEdgeInsets;
@property (nonatomic) long long tintStyle;
@property (retain, nonatomic) UIImage *tintImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) double strength;

- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setSettings:(id)arg1 image:(id)arg2 shadowImage:(id)arg3;
- (void)updateForChangedSettings:(id)arg1;
- (id)_tintColorForSettings:(id)arg1;
- (id)initWithSettings:(id)arg1 strength:(double)arg2 image:(id)arg3 tintStyle:(long long)arg4;

@end

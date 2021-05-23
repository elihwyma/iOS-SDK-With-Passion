/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

@class CLKImageProvider, NSString, UIColor, UIImageView;

@interface NTKWorkoutComplicationAnimatedWrapperView : UIView

{
    UIImageView *_imageView;
    UIColor *_color;
    _Bool _usesLegibility;
    CLKImageProvider *_imageProvider;
    UIColor *_overrideColor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) _Bool usesLegibility;
@property (retain, nonatomic) UIColor *overrideColor;
@property (nonatomic, readonly) UIColor *contentColor;
@property (retain, nonatomic) CLKImageProvider *imageProvider;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_updateState;
- (id)initWithAnimationImages:(id)arg1;
- (void)_updateTint;
- (void)_applyAnimationForPauseState:(_Bool)arg1 animated:(_Bool)arg2;

@end

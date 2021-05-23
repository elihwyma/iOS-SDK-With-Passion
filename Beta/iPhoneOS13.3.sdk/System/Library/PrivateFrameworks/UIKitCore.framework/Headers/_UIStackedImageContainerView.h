/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSObject, NSString, UIImage, UIMotionEffectGroup, _UIStackedImageConfiguration;

@protocol UINamedLayerStack;

@interface _UIStackedImageContainerView : UIView

{
    UIMotionEffectGroup *_stackMotionEffects;
    _Bool _installsMotionEffectsWhenFocused;
    UIImage *_stackImage;
    NSObject<UINamedLayerStack> *_constructedStackImage;
    _UIStackedImageConfiguration *_config;
    UIView *_overlayView;
}

@property (retain, nonatomic) UIView *overlayView;
@property (retain, nonatomic) UIImage *stackImage;
@property (retain, nonatomic) NSObject<UINamedLayerStack> *constructedStackImage;
@property (copy, nonatomic) _UIStackedImageConfiguration *config;
@property (nonatomic, getter=isPressed) _Bool pressed;
@property (nonatomic, getter=isStackFocused) _Bool stackFocused;
@property (nonatomic) _Bool installsMotionEffectsWhenFocused;
@property (nonatomic) struct CGPoint focusDirection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)layerClass;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)_applyKeyPathsAndRelativeValues:(id)arg1 forMotionEffect:(id)arg2;
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;
- (void)overlayView:(id)arg1 didChangeClipsToBounds:(_Bool)arg2;
- (void)setStackFocused:(_Bool)arg1 withFocusAnimationCoordinator:(id)arg2;
- (id)_imageContainerLayer;
- (void)_updateContainerLayerImages;
- (void)_setStackFocused:(_Bool)arg1 animated:(_Bool)arg2 focusAnimationCoordinator:(id)arg3;
- (void)_installMotionEffects;
- (void)_uninstallMotionEffects;
- (void)_updateOverlayLayer;

@end

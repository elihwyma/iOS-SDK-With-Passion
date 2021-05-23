/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSettings.h>

@interface PXViewControllerPinchTransitionSettings : PXSettings

{
    _Bool _allowPinchTransitions;
    double _transitionDuration;
    double _backgroundScale;
    double _backgroundParallax;
    double _shadowOpacity;
    double _shadowRadius;
    double _dimmingWhite;
    double _dimmingOpacity;
}

@property (nonatomic) _Bool allowPinchTransitions;
@property (nonatomic) double transitionDuration;
@property (nonatomic) double backgroundScale;
@property (nonatomic) double backgroundParallax;
@property (nonatomic) double shadowOpacity;
@property (nonatomic) double shadowRadius;
@property (nonatomic) double dimmingWhite;
@property (nonatomic) double dimmingOpacity;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end

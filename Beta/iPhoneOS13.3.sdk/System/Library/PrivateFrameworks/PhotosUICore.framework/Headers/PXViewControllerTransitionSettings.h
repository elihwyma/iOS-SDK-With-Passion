/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSettings.h>

@class PXViewControllerPinchTransitionSettings, PXViewControllerSwipeDownTransitionSettings, PXViewControllerZoomTransitionSettings;

@interface PXViewControllerTransitionSettings : PXSettings

{
    PXViewControllerZoomTransitionSettings *_zoomTransitionSettings;
    PXViewControllerPinchTransitionSettings *_pinchTransitionSettings;
    PXViewControllerSwipeDownTransitionSettings *_swipeDownTransitionSettings;
}

@property (retain, nonatomic) PXViewControllerZoomTransitionSettings *zoomTransitionSettings;
@property (retain, nonatomic) PXViewControllerPinchTransitionSettings *pinchTransitionSettings;
@property (retain, nonatomic) PXViewControllerSwipeDownTransitionSettings *swipeDownTransitionSettings;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end

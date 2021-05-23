/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSettings.h>

@class PXSwipeDownSettings;

@interface PXViewControllerSwipeDownTransitionSettings : PXSettings

{
    _Bool _allowSwipeDown;
    double _minimumDimmingOpacity;
    PXSwipeDownSettings *_swipeDownSettings;
}

@property (nonatomic) _Bool allowSwipeDown;
@property (nonatomic) double minimumDimmingOpacity;
@property (retain, nonatomic) PXSwipeDownSettings *swipeDownSettings;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end

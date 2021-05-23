/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSettings.h>

@interface PXViewControllerZoomTransitionSettings : PXSettings

{
    _Bool _showRectsOfInterest;
    _Bool _animateViewControllersViews;
    _Bool _animateEndPointsContents;
    long long _animationType;
    long long _crossfadeType;
    double _transitionDuration;
    double _minimumZoomScale;
    double _maximumZoomScale;
    double _titleCrossfadeAmount;
}

@property (nonatomic) long long animationType;
@property (nonatomic) long long crossfadeType;
@property (nonatomic) double transitionDuration;
@property (nonatomic) double minimumZoomScale;
@property (nonatomic) double maximumZoomScale;
@property (nonatomic) double titleCrossfadeAmount;
@property (nonatomic) _Bool showRectsOfInterest;
@property (nonatomic) _Bool animateViewControllersViews;
@property (nonatomic) _Bool animateEndPointsContents;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end

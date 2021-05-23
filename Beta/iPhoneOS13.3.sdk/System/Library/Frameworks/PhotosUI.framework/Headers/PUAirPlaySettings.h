/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXSettings.h>

__attribute__((visibility("hidden")))
@interface PUAirPlaySettings : PXSettings

{
    _Bool _ignoreMirroredScreens;
    _Bool _ignoreScreenRecordingScreens;
    _Bool _compensateForOverscan;
    unsigned long long _placeholderForSecondScreen;
    unsigned long long _placeholderForMirroredScreen;
    double _minimumZoomForScrollPadding;
    double _maximumZoomForScrollPadding;
    double _simulatedScreenContentWidth;
    double _simulatedScreenContentHeight;
    long long _routeAvailabilityOverride;
}

@property (nonatomic) _Bool ignoreMirroredScreens;
@property (nonatomic) _Bool ignoreScreenRecordingScreens;
@property (nonatomic) _Bool compensateForOverscan;
@property (nonatomic) unsigned long long placeholderForSecondScreen;
@property (nonatomic) unsigned long long placeholderForMirroredScreen;
@property (nonatomic) double minimumZoomForScrollPadding;
@property (nonatomic) double maximumZoomForScrollPadding;
@property (nonatomic) double simulatedScreenContentWidth;
@property (nonatomic) double simulatedScreenContentHeight;
@property (nonatomic) long long routeAvailabilityOverride;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (id)debugDescription;
- (void)setDefaultValues;
- (id)parentSettings;

@end

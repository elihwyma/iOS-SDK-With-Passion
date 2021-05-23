/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSettings.h>

@interface PXFooterSettings : PXSettings

{
    _Bool _shouldAlternateTitleWithGridCycle;
    _Bool _simulateCPLDisabled;
    _Bool _simulateImportantInformation;
    _Bool _simulateAnimatedIconMode;
    float _minimumDisplayedProgress;
    long long _alternateTitleGridCycleCount;
    double _alternateTitleGridCycleDelay;
    double _alternateTitleCyclingInterval;
    double _animationDelay;
    long long _simulatedAnimatedIconMode;
}

@property (nonatomic) _Bool shouldAlternateTitleWithGridCycle;
@property (nonatomic) long long alternateTitleGridCycleCount;
@property (nonatomic) double alternateTitleGridCycleDelay;
@property (nonatomic) double alternateTitleCyclingInterval;
@property (nonatomic) double animationDelay;
@property (nonatomic) float minimumDisplayedProgress;
@property (nonatomic) _Bool simulateCPLDisabled;
@property (nonatomic) _Bool simulateImportantInformation;
@property (nonatomic) _Bool simulateAnimatedIconMode;
@property (nonatomic) long long simulatedAnimatedIconMode;

+ (id)sharedInstance;
+ (id)settingsControllerModule;
+ (void)resetLastShownInfo;

- (void)setDefaultValues;
- (id)parentSettings;

@end

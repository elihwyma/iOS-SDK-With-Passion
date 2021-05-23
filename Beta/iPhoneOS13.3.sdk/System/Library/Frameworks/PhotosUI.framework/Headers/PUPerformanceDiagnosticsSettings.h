/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXSettings.h>

@interface PUPerformanceDiagnosticsSettings : PXSettings

{
    _Bool _shouldTracePerformance;
    double _scrollTestRampUpDuration;
    double _scrollTestCPUWarmupDuration;
    double _scrollTestCPUSustainDuration;
}

@property (nonatomic) _Bool shouldTracePerformance;
@property (nonatomic) double scrollTestRampUpDuration;
@property (nonatomic) double scrollTestCPUWarmupDuration;
@property (nonatomic) double scrollTestCPUSustainDuration;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end

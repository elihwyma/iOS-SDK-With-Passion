/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXSettings.h>

__attribute__((visibility("hidden")))
@interface PUMedusaSettings : PXSettings

{
    double __desiredWidth;
    double __widthDelay;
    double __testStartDelay;
    double __testInterval;
    double __testIncrement;
}

@property (nonatomic) double _desiredWidth;
@property (nonatomic) double _widthDelay;
@property (nonatomic) double _testStartDelay;
@property (nonatomic) double _testInterval;
@property (nonatomic) double _testIncrement;

+ (id)sharedInstance;
+ (id)settingsControllerModule;
+ (void)runSizeTest;

- (id)parentSettings;

@end

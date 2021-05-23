/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSettings.h>

@interface PXApplicationSettings : PXSettings

{
    double _defaultUserInterfaceTimeoutDuration;
}

@property (nonatomic) double defaultUserInterfaceTimeoutDuration;

+ (id)sharedInstance;
+ (id)settingsControllerModule;
+ (id)timeoutPossibleValues;
+ (id)timeoutTitles;

- (void)setDefaultValues;
- (id)parentSettings;

@end

/*
 Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

#import <PhotosPlayer/ISSettings.h>

@class ISPerformanceDiagnosticsSettings, ISPlayerSettings, ISVitalitySettings;

@interface ISRootSettings : ISSettings

{
    ISPlayerSettings *_playerSettings;
    ISVitalitySettings *_vitalitySettings;
    ISPerformanceDiagnosticsSettings *_performanceDiagnosticsSettings;
}

@property (retain, nonatomic) ISPlayerSettings *playerSettings;
@property (retain, nonatomic) ISVitalitySettings *vitalitySettings;
@property (retain, nonatomic) ISPerformanceDiagnosticsSettings *performanceDiagnosticsSettings;

+ (id)sharedInstance;
+ (id)settingsControllerModule;
+ (id)_archiveFileName;

- (void)save;
- (void)setDefaultValues;

@end

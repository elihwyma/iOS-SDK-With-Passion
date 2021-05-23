/*
 Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

#import <PhotosPlayer/ISSettings.h>

__attribute__((visibility("hidden")))
@interface ISPerformanceDiagnosticsSettings : ISSettings

{
    _Bool _shouldTracePerformance;
}

@property (nonatomic) _Bool shouldTracePerformance;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end

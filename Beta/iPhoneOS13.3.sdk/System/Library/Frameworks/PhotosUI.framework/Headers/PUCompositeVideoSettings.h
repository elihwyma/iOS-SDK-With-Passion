/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXSettings.h>

__attribute__((visibility("hidden")))
@interface PUCompositeVideoSettings : PXSettings

{
    _Bool _useFrameBlending;
    long long _cropMode;
    double _stitchingFadeDuration;
    double _nonStitchingFadeDuration;
}

@property (nonatomic) _Bool useFrameBlending;
@property (nonatomic) long long cropMode;
@property (nonatomic) double stitchingFadeDuration;
@property (nonatomic) double nonStitchingFadeDuration;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end

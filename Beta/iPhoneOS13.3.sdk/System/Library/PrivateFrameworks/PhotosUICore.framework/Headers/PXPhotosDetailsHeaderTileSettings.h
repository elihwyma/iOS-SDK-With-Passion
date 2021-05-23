/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSettings.h>

@interface PXPhotosDetailsHeaderTileSettings : PXSettings

{
    _Bool _showAlways;
    _Bool _showSlideshow;
    _Bool _forceMiroCompelling;
    _Bool _fakeMiroViewController;
    double _aspectRatio;
    double _maximumHeightRelativeToScreenHeight;
    double _maximumAbsoluteHeight;
    double _fakeMiroViewAspectRatio;
    double _fakeMiroViewLoadingDuration;
}

@property (nonatomic) double aspectRatio;
@property (nonatomic) double maximumHeightRelativeToScreenHeight;
@property (nonatomic) double maximumAbsoluteHeight;
@property (nonatomic) _Bool showAlways;
@property (nonatomic) _Bool showSlideshow;
@property (nonatomic) _Bool forceMiroCompelling;
@property (nonatomic) _Bool fakeMiroViewController;
@property (nonatomic) double fakeMiroViewAspectRatio;
@property (nonatomic) double fakeMiroViewLoadingDuration;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end

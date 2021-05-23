/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSettings.h>

@interface PXAssetsSceneSettings : PXSettings

{
    _Bool _enableImagePreheating;
    _Bool _showBordersOnAnimatedContent;
    _Bool _animateContentByDefault;
    _Bool _allowLivePhotoPlayback;
    _Bool _playLivePhotosAsLoops;
    _Bool _allowLoopingVideoPlayback;
    _Bool _allowVideoPlayback;
    _Bool _allowAnimatedImagePlayback;
    double _transitionDuration;
}

@property (nonatomic) double transitionDuration;
@property (nonatomic) _Bool enableImagePreheating;
@property (nonatomic) _Bool showBordersOnAnimatedContent;
@property (nonatomic) _Bool animateContentByDefault;
@property (nonatomic) _Bool allowLivePhotoPlayback;
@property (nonatomic) _Bool playLivePhotosAsLoops;
@property (nonatomic) _Bool allowLoopingVideoPlayback;
@property (nonatomic) _Bool allowVideoPlayback;
@property (nonatomic) _Bool allowAnimatedImagePlayback;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end

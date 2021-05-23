/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSettings.h>

@interface PXGridSettings : PXSettings

{
    _Bool _disableSelectionOverlayView;
    _Bool _enableAutomaticTransitionToSelectMode;
    long long _weightingScheme;
}

@property (nonatomic) _Bool disableSelectionOverlayView;
@property (nonatomic) long long weightingScheme;
@property (nonatomic) _Bool enableAutomaticTransitionToSelectMode;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end

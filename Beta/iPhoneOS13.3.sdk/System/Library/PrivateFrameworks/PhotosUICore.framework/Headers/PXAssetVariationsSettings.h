/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSettings.h>

@interface PXAssetVariationsSettings : PXSettings

{
    _Bool _addSimulatedProgressComponent;
    _Bool _simulateLoadingFailure;
    _Bool _simulateSavingFailure;
    _Bool _useNeutrinoRendering;
    _Bool _showStatusInDisclosureLabel;
    _Bool _showLoopBadges;
    _Bool _invalidateCachedPreviews;
    _Bool _useLiveRenderedPreviews;
    double _selectionDetailsDismissalDelay;
    long long _suggestionsScheme;
    long long _layoutStyle;
}

@property (nonatomic) double selectionDetailsDismissalDelay;
@property (nonatomic) long long suggestionsScheme;
@property (nonatomic) _Bool addSimulatedProgressComponent;
@property (nonatomic) long long layoutStyle;
@property (nonatomic) _Bool simulateLoadingFailure;
@property (nonatomic) _Bool simulateSavingFailure;
@property (nonatomic) _Bool useNeutrinoRendering;
@property (nonatomic) _Bool showStatusInDisclosureLabel;
@property (nonatomic) _Bool showLoopBadges;
@property (nonatomic) _Bool invalidateCachedPreviews;
@property (nonatomic) _Bool useLiveRenderedPreviews;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end

/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXSettings.h>

@interface PUPhotosGridSettings : PXSettings

{
    _Bool _badgeAllItemsAsFavorites;
    _Bool _displayAllItemsAsBursts;
    _Bool _simulateLongTitles;
    _Bool _allowDynamicDetailsTitles;
    _Bool _forceJPEGThumbnailsInDefaultGrid;
    _Bool _flashDegradedImages;
    _Bool _useFloatingHeaders;
    _Bool _swipeSelectionEnabled;
    _Bool _shouldExitEditingModeAfterDuplication;
    _Bool _showTimelineScrubbers;
    _Bool _simulateGlobalFooterImportantInformationUpdates;
    double _defaultItemSideSize;
    double _maximumSpacing;
    double _simulatedDetailsAttributesLoadingDelay;
    long long _numberColumnsInDefaultGrid;
    long long _numberOfColumnsInWideGrid;
    double _magnifierRevealPreviewScale;
    double _previewRevealProgressToFreezeMagnifier;
    double _minimumDistanceToUnfreeze;
    double _leftScrubberRate;
    double _rightScrubberRate;
    long long _globalFooterVisibility;
}

@property (nonatomic) double defaultItemSideSize;
@property (nonatomic) double maximumSpacing;
@property (nonatomic) _Bool badgeAllItemsAsFavorites;
@property (nonatomic) _Bool displayAllItemsAsBursts;
@property (nonatomic) _Bool simulateLongTitles;
@property (nonatomic) _Bool allowDynamicDetailsTitles;
@property (nonatomic) double simulatedDetailsAttributesLoadingDelay;
@property (nonatomic) _Bool forceJPEGThumbnailsInDefaultGrid;
@property (nonatomic) long long numberColumnsInDefaultGrid;
@property (nonatomic) long long numberOfColumnsInWideGrid;
@property (nonatomic) _Bool flashDegradedImages;
@property (nonatomic) _Bool useFloatingHeaders;
@property (nonatomic, getter=isSwipeSelectionEnabled) _Bool swipeSelectionEnabled;
@property (nonatomic) double magnifierRevealPreviewScale;
@property (nonatomic) double previewRevealProgressToFreezeMagnifier;
@property (nonatomic) double minimumDistanceToUnfreeze;
@property (nonatomic) _Bool shouldExitEditingModeAfterDuplication;
@property (nonatomic) _Bool showTimelineScrubbers;
@property (nonatomic) double leftScrubberRate;
@property (nonatomic) double rightScrubberRate;
@property (nonatomic) long long globalFooterVisibility;
@property (nonatomic) _Bool simulateGlobalFooterImportantInformationUpdates;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end

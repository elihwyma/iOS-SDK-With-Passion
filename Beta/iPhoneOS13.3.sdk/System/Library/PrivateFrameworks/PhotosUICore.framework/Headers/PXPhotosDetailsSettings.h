/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSettings.h>

@interface PXPhotosDetailsSettings : PXSettings

{
    _Bool _showHeaderWidget;
    _Bool _showAssetsWidget;
    _Bool _showDemoTilingViewWidget;
    _Bool _showVariationsWidget;
    _Bool _showDemoViewWidget;
    _Bool _showDemoDynamicWidget;
    _Bool _showPlacesWidget;
    _Bool _showRelatedPeopleWidget;
    _Bool _showRelatedWidget;
    _Bool _showActionsWidget;
    _Bool _showPeopleInlineCandidateWidget;
    _Bool _showFacesAreaRect;
    _Bool _allowWidgetsContentLoading;
    _Bool _loadAllWidgetsContentAfterDelay;
    _Bool _loadAllWidgetsContentOnScroll;
    _Bool _allowMultiColumnLayout;
    _Bool _allowZoomTransitions;
    _Bool _allowPinchTransitions;
    _Bool _purgeOnMemoryWarning;
    _Bool _useCuratedLibraryLayout;
    _Bool _editorialLayoutEdit;
    _Bool _editorialLayoutAvoidSmallestTile;
    _Bool _allowEditorialLayoutStressTest;
    _Bool _enableDebugCurationBadge;
    _Bool _placesWidgetShowOnlyPlaceholder;
    _Bool _peopleWidgetDisableSocialGroup;
    _Bool _addToTabSimulate;
    double _defaultPriorityWidgetsLoadingDelay;
    long long _detailViewsToKeepLoaded;
    long long _curationAlgorithm;
    long long _editorialLayoutColumns;
    long long _editorialLayoutTargetRowsForChunk;
    long long _editorialLayoutActivityFeedItemCountThreshold;
    double _assetsWidgetPlaceholderAspectRatio;
    long long _debugBadgeInfoType;
    long long _peopleWidgetMaximumNumberOfPeople;
    double _addToTabOpacity;
    double _addToTabDuration;
    double _addToTabTranslationDelay;
    double _addToTabScaleDelay;
    double _addToTabRotationDelay;
    double _addToTabFadeOutDelay;
    double _addToTabEndRotation;
}

@property (nonatomic) _Bool showHeaderWidget;
@property (nonatomic) _Bool showAssetsWidget;
@property (nonatomic) _Bool showDemoTilingViewWidget;
@property (nonatomic) _Bool showVariationsWidget;
@property (nonatomic) _Bool showDemoViewWidget;
@property (nonatomic) _Bool showDemoDynamicWidget;
@property (nonatomic) _Bool showPlacesWidget;
@property (nonatomic) _Bool showRelatedPeopleWidget;
@property (nonatomic) _Bool showRelatedWidget;
@property (nonatomic) _Bool showActionsWidget;
@property (nonatomic) _Bool showPeopleInlineCandidateWidget;
@property (nonatomic) _Bool showFacesAreaRect;
@property (nonatomic) _Bool allowWidgetsContentLoading;
@property (nonatomic) _Bool loadAllWidgetsContentAfterDelay;
@property (nonatomic) _Bool loadAllWidgetsContentOnScroll;
@property (nonatomic) double defaultPriorityWidgetsLoadingDelay;
@property (nonatomic) _Bool allowMultiColumnLayout;
@property (nonatomic) _Bool allowZoomTransitions;
@property (nonatomic) _Bool allowPinchTransitions;
@property (nonatomic) _Bool purgeOnMemoryWarning;
@property (nonatomic) long long detailViewsToKeepLoaded;
@property (nonatomic) long long curationAlgorithm;
@property (nonatomic) _Bool useCuratedLibraryLayout;
@property (nonatomic) _Bool editorialLayoutEdit;
@property (nonatomic) long long editorialLayoutColumns;
@property (nonatomic) long long editorialLayoutTargetRowsForChunk;
@property (nonatomic) _Bool editorialLayoutAvoidSmallestTile;
@property (nonatomic) long long editorialLayoutActivityFeedItemCountThreshold;
@property (nonatomic) double assetsWidgetPlaceholderAspectRatio;
@property (nonatomic) _Bool allowEditorialLayoutStressTest;
@property (nonatomic) _Bool enableDebugCurationBadge;
@property (nonatomic) long long debugBadgeInfoType;
@property (nonatomic) _Bool placesWidgetShowOnlyPlaceholder;
@property (nonatomic) _Bool peopleWidgetDisableSocialGroup;
@property (nonatomic) long long peopleWidgetMaximumNumberOfPeople;
@property (nonatomic) _Bool addToTabSimulate;
@property (nonatomic) double addToTabOpacity;
@property (nonatomic) double addToTabDuration;
@property (nonatomic) double addToTabTranslationDelay;
@property (nonatomic) double addToTabScaleDelay;
@property (nonatomic) double addToTabRotationDelay;
@property (nonatomic) double addToTabFadeOutDelay;
@property (nonatomic) double addToTabEndRotation;

+ (id)sharedInstance;
+ (id)settingsControllerModule;
+ (id)transientProperties;

- (void)setDefaultValues;
- (id)parentSettings;
- (struct PXAssetBadgeInfo)debugBadgeInfo;

@end

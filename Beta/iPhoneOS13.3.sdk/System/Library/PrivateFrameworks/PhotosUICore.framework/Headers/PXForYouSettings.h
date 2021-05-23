/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSettings.h>

@interface PXForYouSettings : PXSettings

{
    _Bool _showForYouSettingsAtTopLevel;
    _Bool _showMemories;
    _Bool _showSharedAlbumActivity;
    _Bool _showCMMSuggestions;
    _Bool _showCMMInvitations;
    _Bool _showEditSuggestions;
    _Bool _showRecentInterestSuggestions;
    _Bool _showQuestions;
    _Bool _showFooter;
    _Bool _showSampleSuggestionGadgets;
    _Bool _showVerticalSampleGadgets;
    _Bool _showHorizontalGadget;
    _Bool _allowVideoPlayback;
    _Bool _allowLoopPlayback;
    _Bool _allowGIFPlayback;
    _Bool _useMockData;
    _Bool _forceDisplayReportJunk;
    _Bool _navigateToActivityPost;
    _Bool _forcePortraitBias;
    _Bool _useSquareSharedAlbumActivity;
    _Bool _disableSharedAlbumTopMargin;
    _Bool _alwaysShowSuggestionRenderingOverlay;
    _Bool _showFeaturedPhotosBadges;
    _Bool _delayEditRenders;
    _Bool _useCachedEditRenders;
    unsigned long long _maxSimultaneousVideoCount;
    double _minimumVisibilityForVideoPlayback;
    long long _sortingAlgorithm;
    unsigned long long _maxMemoriesToFetch;
}

@property (nonatomic) _Bool showForYouSettingsAtTopLevel;
@property (nonatomic) _Bool showMemories;
@property (nonatomic) _Bool showSharedAlbumActivity;
@property (nonatomic) _Bool showCMMSuggestions;
@property (nonatomic) _Bool showCMMInvitations;
@property (nonatomic) _Bool showEditSuggestions;
@property (nonatomic) _Bool showRecentInterestSuggestions;
@property (nonatomic) _Bool showQuestions;
@property (nonatomic) _Bool showFooter;
@property (nonatomic) _Bool showSampleSuggestionGadgets;
@property (nonatomic) _Bool showVerticalSampleGadgets;
@property (nonatomic) _Bool showHorizontalGadget;
@property (nonatomic) _Bool allowVideoPlayback;
@property (nonatomic) _Bool allowLoopPlayback;
@property (nonatomic) _Bool allowGIFPlayback;
@property (nonatomic) unsigned long long maxSimultaneousVideoCount;
@property (nonatomic) double minimumVisibilityForVideoPlayback;
@property (nonatomic) _Bool useMockData;
@property (nonatomic) _Bool forceDisplayReportJunk;
@property (nonatomic) _Bool navigateToActivityPost;
@property (nonatomic) _Bool forcePortraitBias;
@property (nonatomic) _Bool useSquareSharedAlbumActivity;
@property (nonatomic) _Bool disableSharedAlbumTopMargin;
@property (nonatomic) _Bool alwaysShowSuggestionRenderingOverlay;
@property (nonatomic) _Bool showFeaturedPhotosBadges;
@property (nonatomic) _Bool delayEditRenders;
@property (nonatomic) _Bool useCachedEditRenders;
@property (nonatomic) long long sortingAlgorithm;
@property (nonatomic) unsigned long long maxMemoriesToFetch;

+ (id)sharedInstance;
+ (id)settingsControllerModule;
+ (id)keyPathsAffectingGadgetVisibility;

- (void)setDefaultValues;
- (id)parentSettings;

@end

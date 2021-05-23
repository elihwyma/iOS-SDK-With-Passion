/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSettings.h>

@interface PXSharingSettings : PXSettings

{
    _Bool _showConfidentialityWarnings;
    _Bool _disableMailDrop;
    _Bool _showInternalGIFExport;
    _Bool _forceNonCMMActivitiesToBeVisibleForCMM;
    _Bool _sharingSuggestionsWidgetAllStreamEnabled;
    _Bool _sharingSuggestionsWidgetHeuristicsEnabled;
    _Bool _sharingSuggestionsWidgetLearningEnabled;
    _Bool _sharingSuggestionsWidgetCoreDuetEnabled;
    _Bool _enableNewShareSheet;
    _Bool _enableNewActionShareSheet;
    _Bool _enableOneUpAnimation;
    _Bool _allowFallbacksWhilePreparing;
    _Bool _performPreYukonColorSpaceConversions;
    _Bool _disableMetadataCorrections;
    _Bool _forceDateTimeMetadataBaking;
    _Bool _forceLocationMetadataBaking;
    _Bool _sendAssetURLsToMessages;
    _Bool _simulateDownloadFailure;
    _Bool _simulateMaxFilesizeLimitForGIFsInSharedAlbumsError;
    _Bool _simulatePhotoRemakingError;
    _Bool _simulateLivePhotoBundlingError;
    _Bool _simulateCPLNotReadyError;
    _Bool _simulateMismatchedExportCounts;
    _Bool _showSingleVideoDurationInShareSheetHeader;
    _Bool _showLivePhotoCountInShareSheetHeader;
    _Bool _showSecondaryActionSheet;
    _Bool _showGlobalLivenessExclusionSwitch;
    _Bool _showGlobalLocationExclusionSwitch;
    _Bool _excludeLivenessByDefaultWhenSharing;
    _Bool _excludeLocationByDefaultWhenSharing;
    _Bool _showSendAsOriginalsForCMM;
    _Bool _showSendAsOriginalsForIndividualItems;
    _Bool _sendAsOriginalsByDefaultWhenSharing;
    _Bool _savePhotosBundlesToFilesWithoutExtractingMedia;
    _Bool _debugRevealCMMShadowActivities;
    double _cornerRadius;
    unsigned long long _firstRotationAngle;
    unsigned long long _rotationAngle;
    unsigned long long _verticalAdjustment;
    unsigned long long _maximumNumberOfItems;
    double _shadowRadius;
    double _shadowOpacity;
    double _minShadowOffset;
    double _maxShadowOffset;
    unsigned long long _maxMessagesAssetLimit;
    unsigned long long _maxMailPhotoLimit;
    unsigned long long _confidentialityWarningsVersion;
    long long _locationBakingComparisonStrategy;
    long long _sharingHeaderLocationDisplayStyle;
}

@property (nonatomic) double cornerRadius;
@property (nonatomic) unsigned long long firstRotationAngle;
@property (nonatomic) unsigned long long rotationAngle;
@property (nonatomic) unsigned long long verticalAdjustment;
@property (nonatomic) unsigned long long maximumNumberOfItems;
@property (nonatomic) double shadowRadius;
@property (nonatomic) double shadowOpacity;
@property (nonatomic) double minShadowOffset;
@property (nonatomic) double maxShadowOffset;
@property (nonatomic) _Bool showConfidentialityWarnings;
@property (nonatomic) _Bool disableMailDrop;
@property (nonatomic) unsigned long long maxMessagesAssetLimit;
@property (nonatomic) unsigned long long maxMailPhotoLimit;
@property (nonatomic) _Bool showInternalGIFExport;
@property (nonatomic) _Bool forceNonCMMActivitiesToBeVisibleForCMM;
@property (nonatomic) unsigned long long confidentialityWarningsVersion;
@property (nonatomic) _Bool sharingSuggestionsWidgetAllStreamEnabled;
@property (nonatomic) _Bool sharingSuggestionsWidgetHeuristicsEnabled;
@property (nonatomic) _Bool sharingSuggestionsWidgetLearningEnabled;
@property (nonatomic) _Bool sharingSuggestionsWidgetCoreDuetEnabled;
@property (nonatomic) _Bool enableNewShareSheet;
@property (nonatomic) _Bool enableNewActionShareSheet;
@property (nonatomic) _Bool enableOneUpAnimation;
@property (nonatomic) _Bool allowFallbacksWhilePreparing;
@property (nonatomic) _Bool performPreYukonColorSpaceConversions;
@property (nonatomic) long long locationBakingComparisonStrategy;
@property (nonatomic) _Bool disableMetadataCorrections;
@property (nonatomic) _Bool forceDateTimeMetadataBaking;
@property (nonatomic) _Bool forceLocationMetadataBaking;
@property (nonatomic) _Bool sendAssetURLsToMessages;
@property (nonatomic) _Bool simulateDownloadFailure;
@property (nonatomic) _Bool simulateMaxFilesizeLimitForGIFsInSharedAlbumsError;
@property (nonatomic) _Bool simulatePhotoRemakingError;
@property (nonatomic) _Bool simulateLivePhotoBundlingError;
@property (nonatomic) _Bool simulateCPLNotReadyError;
@property (nonatomic) _Bool simulateMismatchedExportCounts;
@property (nonatomic) _Bool showSingleVideoDurationInShareSheetHeader;
@property (nonatomic) _Bool showLivePhotoCountInShareSheetHeader;
@property (nonatomic) long long sharingHeaderLocationDisplayStyle;
@property (nonatomic) _Bool showSecondaryActionSheet;
@property (nonatomic) _Bool showGlobalLivenessExclusionSwitch;
@property (nonatomic) _Bool showGlobalLocationExclusionSwitch;
@property (nonatomic) _Bool excludeLivenessByDefaultWhenSharing;
@property (nonatomic) _Bool excludeLocationByDefaultWhenSharing;
@property (nonatomic) _Bool showSendAsOriginalsForCMM;
@property (nonatomic) _Bool showSendAsOriginalsForIndividualItems;
@property (nonatomic) _Bool sendAsOriginalsByDefaultWhenSharing;
@property (nonatomic) _Bool savePhotosBundlesToFilesWithoutExtractingMedia;
@property (nonatomic) _Bool debugRevealCMMShadowActivities;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (id)debugDescription;
- (void)setDefaultValues;
- (id)parentSettings;
- (void)defaultValueDidChangeForKey:(id)arg1;

@end

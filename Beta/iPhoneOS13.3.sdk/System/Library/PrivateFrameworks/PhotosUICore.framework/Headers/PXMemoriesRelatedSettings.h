/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSettings.h>

@interface PXMemoriesRelatedSettings : PXSettings

{
    _Bool _enableFeedbackUI;
    _Bool _enableFeedbackComboUI;
    _Bool _enableMemoriesLivingOnFeedback;
    _Bool _enableManualRefreshUI;
    _Bool _fakePeopleProximity;
    _Bool _recoverBlacklistedMemories;
    _Bool _useUnifiedFont;
    _Bool _showMemoryTitleLayer;
    _Bool _enableIPadWideHeader;
    double _refreshPhotoKitTimeout;
    double _widgetRefreshTimeInterval;
    long long _minimumNumberOfCuratedAssetsForInterestingMoments;
    long long _minimumNumberOfCuratedAssetsForMemories;
    long long _minimumNumberOfCuratedAssetsForMovieHeader;
    unsigned long long _deleteBehavior;
    long long _subtitleFontSize;
}

@property (nonatomic) _Bool enableFeedbackUI;
@property (nonatomic) _Bool enableFeedbackComboUI;
@property (nonatomic) _Bool enableMemoriesLivingOnFeedback;
@property (nonatomic) _Bool enableManualRefreshUI;
@property (nonatomic) _Bool fakePeopleProximity;
@property (nonatomic) double refreshPhotoKitTimeout;
@property (nonatomic) double widgetRefreshTimeInterval;
@property (nonatomic) long long minimumNumberOfCuratedAssetsForInterestingMoments;
@property (nonatomic) long long minimumNumberOfCuratedAssetsForMemories;
@property (nonatomic) long long minimumNumberOfCuratedAssetsForMovieHeader;
@property (nonatomic) unsigned long long deleteBehavior;
@property (nonatomic) _Bool recoverBlacklistedMemories;
@property (nonatomic) _Bool useUnifiedFont;
@property (nonatomic) _Bool showMemoryTitleLayer;
@property (nonatomic) _Bool enableIPadWideHeader;
@property (nonatomic) long long subtitleFontSize;

+ (id)sharedInstance;
+ (id)settingsControllerModule;
+ (void)_presentAlertWithTitle:(id)arg1 andMessage:(id)arg2 inModuleController:(id)arg3;
+ (void)_presentAlertForMemoriesGenerationResult:(id)arg1 error:(id)arg2 inModuleController:(id)arg3;

- (void)setDefaultValues;
- (id)parentSettings;
- (void)performPostSaveActions;

@end

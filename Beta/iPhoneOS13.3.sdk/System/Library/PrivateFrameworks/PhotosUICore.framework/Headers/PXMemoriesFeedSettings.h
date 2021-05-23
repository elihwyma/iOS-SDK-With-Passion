/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSettings.h>

@interface PXMemoriesFeedSettings : PXSettings

{
    _Bool _useSlowAnimations;
    _Bool _forceReloadAfterRefresh;
    _Bool _disableRoundedOverlays;
    _Bool _displayContentDuringGraphRebuild;
    _Bool _alwaysShowOnboarding;
    long long _dataSourceType;
    long long _memoryGroupingMethod;
    double _memoryGroupingInterval;
    double _additionalContentThreshold;
    unsigned long long _groupsPerBatch;
    long long _favoriteMemoriesSortOrder;
    long long _sharingBehavior;
}

@property (nonatomic) long long dataSourceType;
@property (nonatomic) _Bool useSlowAnimations;
@property (nonatomic) _Bool forceReloadAfterRefresh;
@property (nonatomic) _Bool disableRoundedOverlays;
@property (nonatomic) _Bool displayContentDuringGraphRebuild;
@property (nonatomic) _Bool alwaysShowOnboarding;
@property (nonatomic) long long memoryGroupingMethod;
@property (nonatomic) double memoryGroupingInterval;
@property (nonatomic) double additionalContentThreshold;
@property (nonatomic) unsigned long long groupsPerBatch;
@property (nonatomic) long long favoriteMemoriesSortOrder;
@property (nonatomic) long long sharingBehavior;

+ (id)sharedInstance;
+ (id)settingsControllerModule;
+ (id)_resetRejectedMemories;

- (void)setDefaultValues;
- (id)parentSettings;
- (long long)_defaultDataSourceType;

@end

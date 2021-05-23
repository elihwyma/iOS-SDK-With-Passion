/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSettings.h>

@interface PXRelatedSettings : PXSettings

{
    _Bool _enableDiversity;
    _Bool _passKeyAsset;
    _Bool _simulateSlowFetches;
    long long _implementation;
    long long _limit;
    long long _preferredInitialNumberOfEntriesDisplayed;
    double _polaroidFadeDuration;
}

@property (nonatomic) long long implementation;
@property (nonatomic) long long limit;
@property (nonatomic) long long preferredInitialNumberOfEntriesDisplayed;
@property (nonatomic) _Bool enableDiversity;
@property (nonatomic) _Bool passKeyAsset;
@property (nonatomic) _Bool simulateSlowFetches;
@property (nonatomic) double polaroidFadeDuration;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end

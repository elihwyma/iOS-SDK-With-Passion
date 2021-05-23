/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXSettings.h>

@interface PUFeedSettings : PXSettings

{
    _Bool _useJPEGImageFormats;
    _Bool _shouldUseJPEGFastFormatForMediumTiles;
    _Bool _shouldUseJPEGFastFormatForLargeTiles;
    _Bool _useQualityImageFormats;
    _Bool _useSpeedometerFeedback;
    _Bool _shouldPreheatCoreData;
    _Bool _shouldPreheatAssets;
    _Bool _shouldPreheatComments;
    _Bool _forceDefaultPreheatManager;
    _Bool _ignoresCaptions;
    _Bool _parallaxEnabled;
    _Bool _allowsInfiniteScrolling;
    _Bool _forceAllItemsAsVideo;
    _Bool _forceLivePhotoBadges;
    _Bool _simulateSharedStreamsEnabled;
    _Bool _vitalityEnabled;
    _Bool _showGroupIDHeaders;
    _Bool _loopsEnabled;
    double _smallTileSizeTolerance;
    long long _maximumScrollRegimeForQualityImageFormats;
    double _speedometerMediumUpperThreshold;
    double _speedometerMediumLowerThreshold;
    double _speedometerFastUpperThreshold;
    double _speedometerFastLowerThreshold;
    double _preheatingMinimumScrollFactor;
    double _slowScrollPreheatingWindowSize;
    double _mediumScrollPreheatingWindowSize;
    double _fastScrollPreheatingWindowSize;
    long long _feedContent;
    long long _initialWindowSize;
    long long _testInitialWindowSize;
    long long _parallaxModel;
    double _parallaxFactor;
    long long _infiniteScrollingWindowSizeIncrement;
}

@property (nonatomic) _Bool useJPEGImageFormats;
@property (nonatomic) double smallTileSizeTolerance;
@property (nonatomic) _Bool shouldUseJPEGFastFormatForMediumTiles;
@property (nonatomic) _Bool shouldUseJPEGFastFormatForLargeTiles;
@property (nonatomic) _Bool useQualityImageFormats;
@property (nonatomic) long long maximumScrollRegimeForQualityImageFormats;
@property (nonatomic) double speedometerMediumUpperThreshold;
@property (nonatomic) double speedometerMediumLowerThreshold;
@property (nonatomic) double speedometerFastUpperThreshold;
@property (nonatomic) double speedometerFastLowerThreshold;
@property (nonatomic) _Bool useSpeedometerFeedback;
@property (nonatomic) double preheatingMinimumScrollFactor;
@property (nonatomic) double slowScrollPreheatingWindowSize;
@property (nonatomic) double mediumScrollPreheatingWindowSize;
@property (nonatomic) double fastScrollPreheatingWindowSize;
@property (nonatomic) _Bool shouldPreheatCoreData;
@property (nonatomic) _Bool shouldPreheatAssets;
@property (nonatomic) _Bool shouldPreheatComments;
@property (nonatomic) _Bool forceDefaultPreheatManager;
@property (nonatomic) long long feedContent;
@property (nonatomic) long long initialWindowSize;
@property (nonatomic) long long testInitialWindowSize;
@property (nonatomic) _Bool ignoresCaptions;
@property (nonatomic) _Bool parallaxEnabled;
@property (nonatomic) long long parallaxModel;
@property (nonatomic) double parallaxFactor;
@property (nonatomic) _Bool allowsInfiniteScrolling;
@property (nonatomic) long long infiniteScrollingWindowSizeIncrement;
@property (nonatomic) _Bool forceAllItemsAsVideo;
@property (nonatomic) _Bool forceLivePhotoBadges;
@property (nonatomic) _Bool simulateSharedStreamsEnabled;
@property (nonatomic) _Bool vitalityEnabled;
@property (nonatomic) _Bool showGroupIDHeaders;
@property (nonatomic) _Bool loopsEnabled;

+ (id)sharedInstance;
+ (id)_localizedStrings;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end

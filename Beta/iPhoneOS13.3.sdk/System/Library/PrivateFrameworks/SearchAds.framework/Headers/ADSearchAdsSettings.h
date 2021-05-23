/*
 Image: /System/Library/PrivateFrameworks/SearchAds.framework/SearchAds
 */

#import <AdCore/ADSingleton.h>

@class ADClientSettingsResponse, NSArray, NSString, NSURL;

@interface ADSearchAdsSettings : ADSingleton

{
    _Bool _isTest;
    _Bool _isBaseline;
    _Bool _isCustomTemplate;
    _Bool _isRequestedImage;
    _Bool _isRequestedRating;
    NSURL *_defaultToroServerURL;
    NSURL *_defaultAdTargetingServerURL;
    NSString *_algoID;
    NSArray *_userKeyboards;
    double _requestedLocationAccuracy;
    double _locationGridSpacing;
    NSString *_requestedText;
    NSString *_requestedIcon;
    NSString *_templateType;
    double _reverseGeolocationRefreshThresholdInMeters;
    double _clickExpirationThresholdInSeconds;
    double _frequencyCapExpirationInSeconds;
    unsigned long long _maxFrequencyCapElements;
    unsigned long long _maxClickCapElements;
    ADClientSettingsResponse *_clientSettings;
}

@property (retain, nonatomic) ADClientSettingsResponse *clientSettings;
@property (retain, nonatomic) NSURL *defaultToroServerURL;
@property (retain, nonatomic) NSURL *defaultAdTargetingServerURL;
@property (retain, nonatomic) NSString *algoID;
@property (retain, nonatomic) NSArray *userKeyboards;
@property (nonatomic) double requestedLocationAccuracy;
@property (nonatomic) double locationGridSpacing;
@property (nonatomic) _Bool isTest;
@property (nonatomic) _Bool isBaseline;
@property (nonatomic) _Bool isCustomTemplate;
@property (nonatomic) _Bool isRequestedImage;
@property (nonatomic) _Bool isRequestedRating;
@property (retain, nonatomic) NSString *requestedText;
@property (retain, nonatomic) NSString *requestedIcon;
@property (retain, nonatomic) NSString *templateType;
@property (nonatomic) double reverseGeolocationRefreshThresholdInMeters;
@property (nonatomic) double clickExpirationThresholdInSeconds;
@property (nonatomic) double frequencyCapExpirationInSeconds;
@property (nonatomic) unsigned long long maxFrequencyCapElements;
@property (nonatomic) unsigned long long maxClickCapElements;

+ (id)sharedInstance;

- (id)init;
- (void)refresh;
- (void)restoreClientSettings;
- (void)applyClientSettings;
- (void)refreshClientSettings:(CDUnknownBlockType)arg1;
- (void)checkDefaultsAndSetInternalSettingsOverrides;
- (void)overrideMaxFrequencyCapElements:(unsigned long long)arg1;
- (void)overrideFrequencyCapExpiration:(double)arg1;
- (void)overrideMaxToroClickElements:(unsigned long long)arg1;
- (void)overrideToroClickExpiration:(double)arg1;
- (void)overrideRevGeoThreshold:(double)arg1;
- (void)expireClientSettings;
- (double)clientSettingsExpirationDate;

@end

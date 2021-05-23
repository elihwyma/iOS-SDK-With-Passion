/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSDictionary, NSNumber, NSString, NSURL, NSUserDefaults;

@interface PARBag : NSObject

{
    NSData *_bagData;
    NSString *_userAgent;
    NSString *_clientName;
    NSUserDefaults *_userDefaults;
}

@property (copy, nonatomic, readonly) NSString *userAgent;
@property (copy, nonatomic, readonly) NSString *clientName;
@property (copy, nonatomic, readonly) NSDictionary *rawBag;
@property (nonatomic, readonly) NSUserDefaults *userDefaults;
@property (nonatomic, readonly, getter=isEnabled) _Bool enabled;
@property (copy, nonatomic, readonly) NSString *version;
@property (copy, nonatomic, readonly) NSString *releaseTag;
@property (copy, nonatomic, readonly) NSDictionary *resources;
@property (nonatomic, readonly) NSNumber *minSearchRenderTimeout;
@property (nonatomic, readonly) NSNumber *searchRenderTimeout;
@property (nonatomic, readonly) NSNumber *otherRenderTimeout;
@property (nonatomic, readonly) NSNumber *minSuggestionRenderTimeout;
@property (nonatomic, readonly) double timeoutIntervalForRequest;
@property (nonatomic, readonly) NSArray *supportedGeoLocationSources;
@property (nonatomic, readonly) NSArray *downloadResourcesList;
@property (nonatomic, readonly) _Bool sendGeoEnvironmentHeader;
@property (nonatomic, readonly) NSArray *subscriptionProviderDomainWhitelist;
@property (nonatomic, readonly) NSArray *subscriptionProviderBundleIdentifierWhitelist;
@property (nonatomic, readonly) double subscriptionTTL;
@property (nonatomic, readonly) double minimumIntervalBetweenQueriesFromBag;
@property (nonatomic, readonly) NSURL *warmURL;
@property (nonatomic, readonly) NSURL *searchURL;
@property (nonatomic, readonly) NSURL *feedbackURL;
@property (nonatomic, readonly) NSURL *crowdsourcingURL;
@property (nonatomic, readonly) NSURL *flightURL;
@property (copy, nonatomic, readonly) NSString *customFlight;
@property (nonatomic, readonly) unsigned long long minimumQueryLength;
@property (nonatomic, readonly) unsigned long long maximumCachedResultsToSend;
@property (nonatomic, readonly) unsigned long long maximumCachedQueriesToSend;
@property (nonatomic, readonly) long long abTest2WeekZoneSize;
@property (nonatomic, readonly) _Bool feedbackEnabled;
@property (nonatomic, readonly) _Bool imageTimingFeedbackEnabled;
@property (copy, nonatomic, readonly) NSArray *skuUploadWhitelist;
@property (copy, nonatomic, readonly) NSArray *recentlyUsedAppIdentifierWhitelist;
@property (copy, nonatomic, readonly) NSArray *enabledDomains;
@property (copy, nonatomic, readonly) NSString *firstUseDescriptionText;
@property (copy, nonatomic, readonly) NSString *firstUseLearnMoreText;
@property (copy, nonatomic, readonly) NSString *firstUseLearnMoreURL;
@property (copy, nonatomic, readonly) NSString *firstUseContinueText;
@property (nonatomic, readonly) NSDictionary *maximumCustomFeedbackSizes;
@property (nonatomic, readonly) double safariLast1hour;
@property (nonatomic, readonly) double safariLast1day;
@property (nonatomic, readonly) double safariLast1week;
@property (nonatomic, readonly) double safariLast1month;
@property (nonatomic, readonly) double safariAll;
@property (nonatomic, readonly) double safariDecay;
@property (nonatomic, readonly) double safariMostRecent;
@property (nonatomic, readonly) double minThresholdToSend;
@property (nonatomic, readonly) _Bool smartHistoryEnabled;
@property (nonatomic, readonly) unsigned long long smartHistoryTimeout;
@property (nonatomic, readonly) unsigned long long smartHistoryMaxRows;
@property (nonatomic, readonly) unsigned long long smartHistoryCompletionReturnCount;
@property (nonatomic, readonly) unsigned long long smartHistorySampleThreshold;
@property (nonatomic, readonly) _Bool smartHistoryFeatureFeedbackEnabled;
@property (nonatomic, readonly) unsigned long long smartHistoryMinimumQueryLength;
@property (nonatomic, readonly) _Bool sampleClientTiming;
@property (nonatomic, readonly) _Bool sampleFeatures;
@property (nonatomic, readonly) _Bool collectScores;
@property (nonatomic, readonly) _Bool collectAnonymousMetadata;
@property (nonatomic, readonly) NSArray *anonymousMetadataPreference;
@property (nonatomic, readonly) _Bool use2LayerRanking;
@property (nonatomic, readonly) NSArray *suggestionRankerModel;
@property (nonatomic, readonly) _Bool disableAsTypedSuggestion;
@property (nonatomic, readonly) NSDictionary *tuscanyConfiguration;
@property (nonatomic, readonly) NSNumber *eagerFeedbackSamplingPercentage;
@property (nonatomic, readonly) NSNumber *feedbackMaxAgeInDays;
@property (copy, nonatomic, readonly) NSString *parsecFeedbackFormat;
@property (nonatomic, readonly) NSNumber *duetExpertCustomFeedbackSamplingPercentage;
@property (nonatomic, readonly) NSNumber *cohortsLookbackInDays;
@property (nonatomic, readonly) long long protocolVersion;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)valueForKey:(id)arg1;
- (double)expirationDate;
- (id)bagURL;
- (id)initWithURL:(id)arg1 userAgent:(id)arg2 userDefaults:(id)arg3;
- (id)initWithData:(id)arg1 userAgent:(id)arg2 userDefaults:(id)arg3;
- (id)valueForKey:(id)arg1 override:(_Bool)arg2;
- (_Bool)bag_boolForKey:(id)arg1;
- (id)bag_stringForKey:(id)arg1;
- (id)bag_dictionaryForKey:(id)arg1;
- (id)bag_numberForKey:(id)arg1;
- (id)bag_arrayForKey:(id)arg1;
- (id)bag_URLForKey:(id)arg1;
- (id)_bag_objectOfClass:(Class)arg1 forKey:(id)arg2 override:(_Bool)arg3;
- (id)_bag_objectOfClass:(Class)arg1 forKey:(id)arg2;
- (id)initWithData:(id)arg1 userAgent:(id)arg2;
- (id)initWithURL:(id)arg1 userDefaults:(id)arg2;
- (id)initWithURL:(id)arg1 userAgent:(id)arg2;
- (id)initWithBag:(id)arg1 userAgent:(id)arg2;
- (_Bool)isRefreshDisabled;
- (id)personalizationParameters;
- (unsigned long long)maximumSizeForFeedbackType:(id)arg1;
- (id)urlForIdentifier:(id)arg1;

@end

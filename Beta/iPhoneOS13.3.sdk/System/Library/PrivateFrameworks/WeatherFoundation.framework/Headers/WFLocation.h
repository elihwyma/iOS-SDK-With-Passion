/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <NSObject.h>

#import <WeatherFoundation/Swift-Protocol.h>

@class CLLocation, NSDate, NSString, NSTimeZone;

@interface WFLocation : NSObject <Swift>

{
    NSString *_city;
    NSString *_county;
    NSString *_state;
    NSString *_stateAbbreviation;
    NSString *_country;
    NSString *_countryAbbreviation;
    CLLocation *_geoLocation;
    NSString *_locationID;
    NSTimeZone *_timeZone;
    long long _archiveVersion;
    NSString *_weatherDisplayName;
    NSString *_displayName;
    NSDate *_creationDate;
}

@property (nonatomic, readonly) NSString *wf_weatherChannelGeocodeValue;
@property long long archiveVersion;
@property (copy, nonatomic) NSString *city;
@property (copy, nonatomic) NSString *county;
@property (copy, nonatomic) NSString *state;
@property (copy, nonatomic) NSString *stateAbbreviation;
@property (copy, nonatomic) NSString *country;
@property (copy, nonatomic) NSString *countryAbbreviation;
@property (copy, nonatomic) NSString *weatherDisplayName;
@property (copy, nonatomic) CLLocation *geoLocation;
@property (copy, nonatomic) NSString *locationID;
@property (copy, nonatomic) NSTimeZone *timeZone;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSDate *creationDate;
@property (nonatomic, readonly) _Bool shouldQueryForAirQualityData;

+ (_Bool)supportsSecureCoding;
+ (long long)currentArchiveVersion;
+ (id)knownKeys;
+ (id)locationsByConsolidatingDuplicates:(id)arg1 originalOrder:(id)arg2;
+ (id)locationsByConsolidatingDuplicatesInBucket:(id)arg1;
+ (id)locationsByFilteringDuplicates:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlacemark:(id)arg1;
- (id)initWithMapItem:(id)arg1;
- (id)summary;
- (id)sunriseForDate:(id)arg1;
- (id)sunsetForDate:(id)arg1;
- (_Bool)isDay;
- (id)initWithMapItem:(id)arg1 isCurrentLocation:(_Bool)arg2;
- (id)summaryThatIsCompact:(_Bool)arg1;
- (_Bool)isDayForDate:(id)arg1;
- (id)countriesSupportAQI;
- (id)initWithSearchResponse:(id)arg1;
- (id)localDataRepresentation;
- (id)initWithLocalDataRepresentation:(id)arg1;
- (id)cloudDictionaryRepresentation;
- (id)initWithCloudDictionaryRepresentation:(id)arg1;

@end

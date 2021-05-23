/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

#import <GeoServices/Swift-Protocol.h>

@class GEOCacheInvalidationData, GEOMapItemIdentifier, NSArray, NSDateInterval, NSString, NSTimeZone;

@interface GEOPOIEvent : NSObject <Swift>

{
    GEOCacheInvalidationData *_invalidationData;
    _Bool _updateRequired;
    GEOMapItemIdentifier *_identifier;
    NSString *_localizedName;
    CDStruct_2c43369c _centerCoordinate;
    long long _expectedAttendance;
    NSArray *_categories;
    NSArray *_relatedPOIIdentifiers;
    NSDateInterval *_dateInterval;
    NSTimeZone *_timeZone;
    NSArray *_hours;
    NSArray *_performers;
}

@property (retain, nonatomic) GEOCacheInvalidationData *invalidationData;
@property (retain, nonatomic) GEOMapItemIdentifier *identifier;
@property (retain, nonatomic) NSString *localizedName;
@property (nonatomic) CDStruct_c3b9c2ee centerCoordinate;
@property (nonatomic) long long expectedAttendance;
@property (retain, nonatomic) NSArray *categories;
@property (retain, nonatomic) NSArray *relatedPOIIdentifiers;
@property (retain, nonatomic) NSDateInterval *dateInterval;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (retain, nonatomic) NSArray *hours;
@property (retain, nonatomic) NSArray *performers;
@property (nonatomic, readonly, getter=isUpdateRequired) _Bool updateRequired;

+ (_Bool)supportsSecureCoding;
+ (_Bool)isUpdateRequiredForInvalidationData:(id)arg1;
+ (_Bool)isUpdateRequiredForInvalidationToken:(id)arg1 error:(id *)arg2;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlace:(id)arg1;
- (void)geoPOIEventCommonInit;
- (_Bool)configureWithComponents:(id)arg1;
- (_Bool)configureWithPOIComponent:(id)arg1;
- (_Bool)configureWithPlaceInfoComponent:(id)arg1;
- (id)dateIntervalFromDateTimeRanges:(id)arg1;
- (id)initWithMapItemIdentifier:(id)arg1;
- (id)invalidationToken;

@end

/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSDate, NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDDepartureFrequency : PBCodable

{
    PBUnknownFields *_unknownFields;
    unsigned int _displayDepartureFrequency;
    unsigned int _earliestDepartureTime;
    unsigned int _latestDepartureTime;
    unsigned int _maxDepartureFrequency;
    unsigned int _minDepartureFrequency;
    _Bool _isEstimated;
    struct {
        unsigned int has_displayDepartureFrequency:1;
        unsigned int has_earliestDepartureTime:1;
        unsigned int has_latestDepartureTime:1;
        unsigned int has_maxDepartureFrequency:1;
        unsigned int has_minDepartureFrequency:1;
        unsigned int has_isEstimated:1;
    } _flags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSDate *firstTimeInFrequency;
@property (nonatomic, readonly) NSDate *lastTimeInFrequency;
@property (nonatomic, readonly) double frequencyForSorting;
@property (nonatomic, readonly) long long frequencyType;
@property (nonatomic, readonly) _Bool isEstimate;
@property (nonatomic, readonly) long long displayFrequency;
@property (nonatomic, readonly) long long minFrequency;
@property (nonatomic, readonly) long long maxFrequency;
@property (nonatomic) _Bool hasMinDepartureFrequency;
@property (nonatomic) unsigned int minDepartureFrequency;
@property (nonatomic) _Bool hasMaxDepartureFrequency;
@property (nonatomic) unsigned int maxDepartureFrequency;
@property (nonatomic) _Bool hasEarliestDepartureTime;
@property (nonatomic) unsigned int earliestDepartureTime;
@property (nonatomic) _Bool hasLatestDepartureTime;
@property (nonatomic) unsigned int latestDepartureTime;
@property (nonatomic) _Bool hasIsEstimated;
@property (nonatomic) _Bool isEstimated;
@property (nonatomic) _Bool hasDisplayDepartureFrequency;
@property (nonatomic) unsigned int displayDepartureFrequency;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (_Bool)isValidAtDate:(id)arg1;

@end

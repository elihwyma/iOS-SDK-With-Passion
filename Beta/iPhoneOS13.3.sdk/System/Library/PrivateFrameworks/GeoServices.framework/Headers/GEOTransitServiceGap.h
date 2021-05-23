/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOFormattedString, NSDate, NSString, PBUnknownFields;

@protocol GEOServerFormattedString;

@interface GEOTransitServiceGap : PBCodable

{
    PBUnknownFields *_unknownFields;
    GEOFormattedString *_displayMessage;
    unsigned int _absEndTime;
    unsigned int _absStartTime;
    unsigned int _appearsBeforeSuggestedRouteIndex;
    struct {
        unsigned int has_absEndTime:1;
        unsigned int has_absStartTime:1;
        unsigned int has_appearsBeforeSuggestedRouteIndex:1;
    } _flags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) unsigned long long routeListInsertBeforeIndex;
@property (nonatomic, readonly) id <GEOServerFormattedString> displayMessagFormatString;
@property (nonatomic) _Bool hasAppearsBeforeSuggestedRouteIndex;
@property (nonatomic) unsigned int appearsBeforeSuggestedRouteIndex;
@property (nonatomic) _Bool hasAbsStartTime;
@property (nonatomic) unsigned int absStartTime;
@property (nonatomic) _Bool hasAbsEndTime;
@property (nonatomic) unsigned int absEndTime;
@property (nonatomic, readonly) _Bool hasDisplayMessage;
@property (retain, nonatomic) GEOFormattedString *displayMessage;
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

@end

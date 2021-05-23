/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSArray, NSMutableArray, NSString, PBUnknownFields;

@interface GEOTransitVehiclePositionInfo : PBCodable

{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_departureEntrys;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long firstTripID;
@property (nonatomic, readonly) unsigned long long tripIDForNextUpcomingDeparture;
@property (copy, nonatomic, readonly) NSArray *tripIDs;
@property (copy, nonatomic, readonly) NSArray *upcomingTripIDs;
@property (retain, nonatomic) NSMutableArray *departureEntrys;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)departureEntryType;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)addDepartureEntry:(id)arg1;
- (unsigned long long)departureEntrysCount;
- (void)clearDepartureEntrys;
- (id)departureEntryAtIndex:(unsigned long long)arg1;

@end

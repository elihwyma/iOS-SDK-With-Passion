/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class PBUnknownFields;

@interface GEOTransitEnterExitInfo : PBCodable

{
    PBUnknownFields *_unknownFields;
    unsigned int _accessPointIndex;
    unsigned int _stopIndex;
    unsigned int _transferTime;
    _Bool _displayStop;
    _Bool _uncertainArrival;
    struct {
        unsigned int has_accessPointIndex:1;
        unsigned int has_stopIndex:1;
        unsigned int has_transferTime:1;
        unsigned int has_displayStop:1;
        unsigned int has_uncertainArrival:1;
    } _flags;
}

@property (nonatomic) _Bool hasAccessPointIndex;
@property (nonatomic) unsigned int accessPointIndex;
@property (nonatomic) _Bool hasStopIndex;
@property (nonatomic) unsigned int stopIndex;
@property (nonatomic) _Bool hasDisplayStop;
@property (nonatomic) _Bool displayStop;
@property (nonatomic) _Bool hasTransferTime;
@property (nonatomic) unsigned int transferTime;
@property (nonatomic) _Bool hasUncertainArrival;
@property (nonatomic) _Bool uncertainArrival;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;

@end

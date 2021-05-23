/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPBTransitIncidentEntityFilter, NSSet, NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPBTransitIncidentEntity : PBCodable

{
    PBUnknownFields *_unknownFields;
    unsigned long long _affectedMuid;
    GEOPBTransitIncidentEntityFilter *_filter;
    struct {
        unsigned int has_affectedMuid:1;
    } _flags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long muid;
@property (nonatomic, readonly) _Bool hasNextStopIDs;
@property (nonatomic, readonly) NSSet *nextStopIDs;
@property (nonatomic) _Bool hasAffectedMuid;
@property (nonatomic) unsigned long long affectedMuid;
@property (nonatomic, readonly) _Bool hasFilter;
@property (retain, nonatomic) GEOPBTransitIncidentEntityFilter *filter;
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

/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOMapItemStorage, GEOSharedNavETAInfo, GEOSharedNavRouteInfo, GEOSharedNavSenderInfo, NSString, PBDataReader, PBUnknownFields;

@interface GEOSharedNavState : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOMapItemStorage *_destinationInfo;
    GEOSharedNavETAInfo *_etaInfo;
    NSString *_groupIdentifier;
    double _localUpdatedTimestamp;
    GEOSharedNavRouteInfo *_routeInfo;
    GEOSharedNavSenderInfo *_senderInfo;
    double _updatedTimestamp;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _protocolVersion;
    int _referenceFrame;
    unsigned int _transportType;
    _Bool _arrived;
    _Bool _closed;
    _Bool _muted;
    struct {
        unsigned int has_localUpdatedTimestamp:1;
        unsigned int has_updatedTimestamp:1;
        unsigned int has_protocolVersion:1;
        unsigned int has_referenceFrame:1;
        unsigned int has_transportType:1;
        unsigned int has_arrived:1;
        unsigned int has_closed:1;
        unsigned int has_muted:1;
        unsigned int read_unknownFields:1;
        unsigned int read_destinationInfo:1;
        unsigned int read_etaInfo:1;
        unsigned int read_groupIdentifier:1;
        unsigned int read_routeInfo:1;
        unsigned int read_senderInfo:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_destinationInfo:1;
        unsigned int wrote_etaInfo:1;
        unsigned int wrote_groupIdentifier:1;
        unsigned int wrote_localUpdatedTimestamp:1;
        unsigned int wrote_routeInfo:1;
        unsigned int wrote_senderInfo:1;
        unsigned int wrote_updatedTimestamp:1;
        unsigned int wrote_protocolVersion:1;
        unsigned int wrote_referenceFrame:1;
        unsigned int wrote_transportType:1;
        unsigned int wrote_arrived:1;
        unsigned int wrote_closed:1;
        unsigned int wrote_muted:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasDestinationInfo;
@property (retain, nonatomic) GEOMapItemStorage *destinationInfo;
@property (nonatomic, readonly) _Bool hasEtaInfo;
@property (retain, nonatomic) GEOSharedNavETAInfo *etaInfo;
@property (nonatomic, readonly) _Bool hasRouteInfo;
@property (retain, nonatomic) GEOSharedNavRouteInfo *routeInfo;
@property (nonatomic, readonly) _Bool hasSenderInfo;
@property (retain, nonatomic) GEOSharedNavSenderInfo *senderInfo;
@property (nonatomic, readonly) _Bool hasGroupIdentifier;
@property (retain, nonatomic) NSString *groupIdentifier;
@property (nonatomic) _Bool hasArrived;
@property (nonatomic) _Bool arrived;
@property (nonatomic) _Bool hasClosed;
@property (nonatomic) _Bool closed;
@property (nonatomic) _Bool hasReferenceFrame;
@property (nonatomic) int referenceFrame;
@property (nonatomic) _Bool hasMuted;
@property (nonatomic) _Bool muted;
@property (nonatomic) _Bool hasUpdatedTimestamp;
@property (nonatomic) double updatedTimestamp;
@property (nonatomic) _Bool hasTransportType;
@property (nonatomic) unsigned int transportType;
@property (nonatomic) _Bool hasProtocolVersion;
@property (nonatomic) unsigned int protocolVersion;
@property (nonatomic) _Bool hasLocalUpdatedTimestamp;
@property (nonatomic) double localUpdatedTimestamp;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)clearSensitiveFields;
- (id)referenceFrameAsString:(int)arg1;
- (int)StringAsReferenceFrame:(id)arg1;
- (void)_readDestinationInfo;
- (void)_readEtaInfo;
- (void)_readRouteInfo;
- (void)_readSenderInfo;
- (void)_readGroupIdentifier;

@end

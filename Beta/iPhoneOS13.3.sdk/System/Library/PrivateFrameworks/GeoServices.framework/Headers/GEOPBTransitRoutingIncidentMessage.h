/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPBTransitRoutingIncidentMessage : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_9f2792e4 _transitIncidentIndexs;
    NSString *_routingMessage;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _routingIncidentMessageIndex;
    struct {
        unsigned int has_routingIncidentMessageIndex:1;
        unsigned int read_unknownFields:1;
        unsigned int read_transitIncidentIndexs:1;
        unsigned int read_routingMessage:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_transitIncidentIndexs:1;
        unsigned int wrote_routingMessage:1;
        unsigned int wrote_routingIncidentMessageIndex:1;
    } _flags;
}

@property (nonatomic) _Bool hasRoutingIncidentMessageIndex;
@property (nonatomic) unsigned int routingIncidentMessageIndex;
@property (nonatomic, readonly) _Bool hasRoutingMessage;
@property (retain, nonatomic) NSString *routingMessage;
@property (nonatomic, readonly) unsigned long long transitIncidentIndexsCount;
@property (nonatomic, readonly) unsigned int *transitIncidentIndexs;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;

- (id)init;
- (void)dealloc;
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
- (void)_readRoutingMessage;
- (void)_readTransitIncidentIndexs;
- (void)_addNoFlagsTransitIncidentIndex:(unsigned int)arg1;
- (void)clearTransitIncidentIndexs;
- (unsigned int)transitIncidentIndexAtIndex:(unsigned long long)arg1;
- (void)addTransitIncidentIndex:(unsigned int)arg1;
- (void)setTransitIncidentIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;

@end

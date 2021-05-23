/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSData, NSUUID, PBDataReader, PBUnknownFields;

@interface GEOTransitRouteIdentifier : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSData *_clientRouteHandle;
    NSData *_serverRouteHandle;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_clientRouteHandle:1;
        unsigned int read_serverRouteHandle:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_clientRouteHandle:1;
        unsigned int wrote_serverRouteHandle:1;
    } _flags;
}

@property (nonatomic, readonly) NSUUID *clientRouteID;
@property (nonatomic, readonly) _Bool hasServerRouteHandle;
@property (retain, nonatomic) NSData *serverRouteHandle;
@property (nonatomic, readonly) _Bool hasClientRouteHandle;
@property (retain, nonatomic) NSData *clientRouteHandle;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (id)routeIdentiferForComposedRoute:(id)arg1;

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
- (void)_readServerRouteHandle;
- (void)_readClientRouteHandle;

@end

/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString, PBDataReader, PBUnknownFields;

@interface GEOSharedNavSenderInfo : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_fromDisplayName;
    NSString *_fromIdentifier;
    NSString *_localContactIdentifier;
    NSString *_localName;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_fromDisplayName:1;
        unsigned int read_fromIdentifier:1;
        unsigned int read_localContactIdentifier:1;
        unsigned int read_localName:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_fromDisplayName:1;
        unsigned int wrote_fromIdentifier:1;
        unsigned int wrote_localContactIdentifier:1;
        unsigned int wrote_localName:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasLocalName;
@property (retain, nonatomic) NSString *localName;
@property (nonatomic, readonly) _Bool hasLocalContactIdentifier;
@property (retain, nonatomic) NSString *localContactIdentifier;
@property (nonatomic, readonly) _Bool hasFromIdentifier;
@property (retain, nonatomic) NSString *fromIdentifier;
@property (nonatomic, readonly) _Bool hasFromDisplayName;
@property (retain, nonatomic) NSString *fromDisplayName;
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
- (void)_readLocalName;
- (void)_readLocalContactIdentifier;
- (void)_readFromIdentifier;
- (void)_readFromDisplayName;

@end

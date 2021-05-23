/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString, PBDataReader, PBUnknownFields;

@interface GEOMapItemAddressBookAttributes : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_addressIdentifier;
    NSString *_name;
    NSString *_spokenName;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _addressType;
    _Bool _isMe;
    struct {
        unsigned int has_addressType:1;
        unsigned int has_isMe:1;
        unsigned int read_unknownFields:1;
        unsigned int read_addressIdentifier:1;
        unsigned int read_name:1;
        unsigned int read_spokenName:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_addressIdentifier:1;
        unsigned int wrote_name:1;
        unsigned int wrote_spokenName:1;
        unsigned int wrote_addressType:1;
        unsigned int wrote_isMe:1;
    } _flags;
}

@property (nonatomic) _Bool hasAddressType;
@property (nonatomic) int addressType;
@property (nonatomic, readonly) _Bool hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic, readonly) _Bool hasSpokenName;
@property (retain, nonatomic) NSString *spokenName;
@property (nonatomic) _Bool hasIsMe;
@property (nonatomic) _Bool isMe;
@property (nonatomic, readonly) _Bool hasAddressIdentifier;
@property (retain, nonatomic) NSString *addressIdentifier;
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
- (void)_readName;
- (void)_readSpokenName;
- (void)_readAddressIdentifier;
- (id)addressTypeAsString:(int)arg1;
- (int)StringAsAddressType:(id)arg1;

@end

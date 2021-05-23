/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <ProtocolBuffer/PBCodable.h>

@class GEOMapItemStorage, NSMutableArray, NSString, PBUnknownFields;

@interface MSPPinnedPlaceStorage : PBCodable

{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_contactStorages;
    NSString *_customName;
    NSString *_identifier;
    GEOMapItemStorage *_mapItemStorage;
    NSString *_originatingAddressString;
    int _type;
    _Bool _hidden;
    struct {
        unsigned int type:1;
        unsigned int hidden:1;
    } _has;
}

@property (nonatomic) _Bool hasType;
@property (nonatomic) int type;
@property (nonatomic, readonly) _Bool hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic, readonly) _Bool hasCustomName;
@property (retain, nonatomic) NSString *customName;
@property (nonatomic, readonly) _Bool hasMapItemStorage;
@property (retain, nonatomic) GEOMapItemStorage *mapItemStorage;
@property (retain, nonatomic) NSMutableArray *contactStorages;
@property (nonatomic) _Bool hasHidden;
@property (nonatomic) _Bool hidden;
@property (nonatomic, readonly) _Bool hasOriginatingAddressString;
@property (retain, nonatomic) NSString *originatingAddressString;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)contactStorageType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)typeAsString:(int)arg1;
- (int)StringAsType:(id)arg1;
- (void)addContactStorage:(id)arg1;
- (unsigned long long)contactStoragesCount;
- (void)clearContactStorages;
- (id)contactStorageAtIndex:(unsigned long long)arg1;

@end

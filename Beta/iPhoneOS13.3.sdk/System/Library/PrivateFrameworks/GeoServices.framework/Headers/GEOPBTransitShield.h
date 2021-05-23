/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPBTransitShield : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_shieldColor;
    NSString *_shieldText;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _shieldEnumValue;
    struct {
        unsigned int has_shieldEnumValue:1;
        unsigned int read_unknownFields:1;
        unsigned int read_shieldColor:1;
        unsigned int read_shieldText:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_shieldColor:1;
        unsigned int wrote_shieldText:1;
        unsigned int wrote_shieldEnumValue:1;
    } _flags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long shieldType;
@property (nonatomic, readonly) NSString *shieldText;
@property (nonatomic, readonly) NSString *shieldColorString;
@property (nonatomic, readonly) _Bool hasShieldText;
@property (retain, nonatomic) NSString *shieldText;
@property (nonatomic) _Bool hasShieldEnumValue;
@property (nonatomic) unsigned int shieldEnumValue;
@property (nonatomic, readonly) _Bool hasShieldColor;
@property (retain, nonatomic) NSString *shieldColor;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readShieldText;
- (void)_readShieldColor;

@end

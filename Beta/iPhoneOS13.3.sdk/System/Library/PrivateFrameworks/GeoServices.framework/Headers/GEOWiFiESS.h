/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, NSString, PBDataReader;

@interface GEOWiFiESS : PBCodable

{
    PBDataReader *_reader;
    CDStruct_95bda58d _attributes;
    CDStruct_95bda58d _authTraits;
    NSMutableArray *_bss;
    NSString *_identifier;
    NSString *_name;
    NSMutableArray *_qualities;
    long long _uniqueIdentifier;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_uniqueIdentifier:1;
        unsigned int read_attributes:1;
        unsigned int read_authTraits:1;
        unsigned int read_bss:1;
        unsigned int read_identifier:1;
        unsigned int read_name:1;
        unsigned int read_qualities:1;
        unsigned int wrote_attributes:1;
        unsigned int wrote_authTraits:1;
        unsigned int wrote_bss:1;
        unsigned int wrote_identifier:1;
        unsigned int wrote_name:1;
        unsigned int wrote_qualities:1;
        unsigned int wrote_uniqueIdentifier:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSMutableArray *bss;
@property (nonatomic, readonly) _Bool hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic, readonly) unsigned long long authTraitsCount;
@property (nonatomic, readonly) int *authTraits;
@property (retain, nonatomic) NSMutableArray *qualities;
@property (nonatomic, readonly) unsigned long long attributesCount;
@property (nonatomic, readonly) int *attributes;
@property (nonatomic) _Bool hasUniqueIdentifier;
@property (nonatomic) long long uniqueIdentifier;

+ (_Bool)isValid:(id)arg1;
+ (Class)qualitiesType;
+ (Class)bssType;

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
- (void)_readName;
- (void)_readQualities;
- (void)_addNoFlagsQualities:(id)arg1;
- (unsigned long long)qualitiesCount;
- (void)clearQualities;
- (id)qualitiesAtIndex:(unsigned long long)arg1;
- (void)addQualities:(id)arg1;
- (void)_readIdentifier;
- (void)_readBss;
- (void)_addNoFlagsBss:(id)arg1;
- (void)_readAuthTraits;
- (void)_addNoFlagsAuthTraits:(int)arg1;
- (void)_readAttributes;
- (void)_addNoFlagsAttributes:(int)arg1;
- (unsigned long long)bssCount;
- (void)clearBss;
- (id)bssAtIndex:(unsigned long long)arg1;
- (void)addBss:(id)arg1;
- (void)clearAuthTraits;
- (int)authTraitsAtIndex:(unsigned long long)arg1;
- (void)addAuthTraits:(int)arg1;
- (void)clearAttributes;
- (int)attributesAtIndex:(unsigned long long)arg1;
- (void)addAttributes:(int)arg1;
- (void)setAuthTraits:(int *)arg1 count:(unsigned long long)arg2;
- (id)authTraitsAsString:(int)arg1;
- (int)StringAsAuthTraits:(id)arg1;
- (void)setAttributes:(int *)arg1 count:(unsigned long long)arg2;
- (id)attributesAsString:(int)arg1;
- (int)StringAsAttributes:(id)arg1;

@end

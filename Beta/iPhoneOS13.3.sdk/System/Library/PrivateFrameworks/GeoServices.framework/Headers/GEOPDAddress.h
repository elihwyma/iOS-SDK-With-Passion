/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAddress : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_localizedAddress;
    NSMutableArray *_spokenNavigationAddress;
    NSMutableArray *_spokenStructuredAddress;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _knownAccuracy;
    struct {
        unsigned int has_knownAccuracy:1;
        unsigned int read_unknownFields:1;
        unsigned int read_localizedAddress:1;
        unsigned int read_spokenNavigationAddress:1;
        unsigned int read_spokenStructuredAddress:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_localizedAddress:1;
        unsigned int wrote_spokenNavigationAddress:1;
        unsigned int wrote_spokenStructuredAddress:1;
        unsigned int wrote_knownAccuracy:1;
    } _flags;
}

@property (retain, nonatomic) NSMutableArray *localizedAddress;
@property (retain, nonatomic) NSMutableArray *spokenNavigationAddress;
@property (retain, nonatomic) NSMutableArray *spokenStructuredAddress;
@property (nonatomic) _Bool hasKnownAccuracy;
@property (nonatomic) int knownAccuracy;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)localizedAddressType;
+ (Class)spokenNavigationAddressType;
+ (Class)spokenStructuredAddressType;

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
- (void)_readLocalizedAddress;
- (void)_addNoFlagsLocalizedAddress:(id)arg1;
- (void)_readSpokenNavigationAddress;
- (void)_addNoFlagsSpokenNavigationAddress:(id)arg1;
- (void)_readSpokenStructuredAddress;
- (void)_addNoFlagsSpokenStructuredAddress:(id)arg1;
- (unsigned long long)localizedAddressCount;
- (void)clearLocalizedAddress;
- (id)localizedAddressAtIndex:(unsigned long long)arg1;
- (void)addLocalizedAddress:(id)arg1;
- (unsigned long long)spokenNavigationAddressCount;
- (void)clearSpokenNavigationAddress;
- (id)spokenNavigationAddressAtIndex:(unsigned long long)arg1;
- (void)addSpokenNavigationAddress:(id)arg1;
- (unsigned long long)spokenStructuredAddressCount;
- (void)clearSpokenStructuredAddress;
- (id)spokenStructuredAddressAtIndex:(unsigned long long)arg1;
- (void)addSpokenStructuredAddress:(id)arg1;
- (id)knownAccuracyAsString:(int)arg1;
- (int)StringAsKnownAccuracy:(id)arg1;

@end

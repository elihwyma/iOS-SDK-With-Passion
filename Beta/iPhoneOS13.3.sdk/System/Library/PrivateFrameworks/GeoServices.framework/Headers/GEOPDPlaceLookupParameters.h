/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPlaceLookupParameters : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_62a50c50 _muids;
    NSMutableArray *_identifiers;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _resultProviderId;
    _Bool _enablePartialClientization;
    struct {
        unsigned int has_resultProviderId:1;
        unsigned int has_enablePartialClientization:1;
        unsigned int read_unknownFields:1;
        unsigned int read_muids:1;
        unsigned int read_identifiers:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_muids:1;
        unsigned int wrote_identifiers:1;
        unsigned int wrote_resultProviderId:1;
        unsigned int wrote_enablePartialClientization:1;
    } _flags;
}

@property (retain, nonatomic) NSMutableArray *identifiers;
@property (nonatomic) _Bool hasResultProviderId;
@property (nonatomic) int resultProviderId;
@property (nonatomic, readonly) unsigned long long muidsCount;
@property (nonatomic, readonly) unsigned long long *muids;
@property (nonatomic) _Bool hasEnablePartialClientization;
@property (nonatomic) _Bool enablePartialClientization;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)identifierType;
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
- (void)_readMuids;
- (void)_addNoFlagsMuid:(unsigned long long)arg1;
- (void)_addNoFlagsIdentifier:(id)arg1;
- (void)clearMuids;
- (unsigned long long)muidAtIndex:(unsigned long long)arg1;
- (void)addMuid:(unsigned long long)arg1;
- (unsigned long long)identifiersCount;
- (void)clearIdentifiers;
- (id)identifierAtIndex:(unsigned long long)arg1;
- (void)addIdentifier:(id)arg1;
- (void)_readIdentifiers;
- (void)setMuids:(unsigned long long *)arg1 count:(unsigned long long)arg2;
- (id)initWithIdentifiers:(id)arg1 resultProviderID:(int)arg2;

@end

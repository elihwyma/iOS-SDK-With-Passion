/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOServiceVersion : PBCodable

{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_versionDomains;
    unsigned int _minimumVersion;
    struct {
        unsigned int has_minimumVersion:1;
    } _flags;
}

@property (retain, nonatomic) NSMutableArray *versionDomains;
@property (nonatomic) _Bool hasMinimumVersion;
@property (nonatomic) unsigned int minimumVersion;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)versionDomainType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)addVersionDomain:(id)arg1;
- (unsigned long long)versionDomainsCount;
- (void)clearVersionDomains;
- (id)versionDomainAtIndex:(unsigned long long)arg1;

@end

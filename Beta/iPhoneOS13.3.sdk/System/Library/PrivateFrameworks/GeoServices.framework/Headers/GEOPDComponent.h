/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDAttribution, GEOPDSource, NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDComponent : PBCodable

{
    PBUnknownFields *_unknownFields;
    GEOPDAttribution *_attribution;
    GEOPDSource *_source;
    double _timestampFirstSeen;
    NSMutableArray *_values;
    NSMutableArray *_versionDomains;
    int _cacheControl;
    int _startIndex;
    int _status;
    unsigned int _ttl;
    int _type;
    int _valuesAvailable;
    unsigned int _version;
    struct {
        unsigned int has_timestampFirstSeen:1;
        unsigned int has_cacheControl:1;
        unsigned int has_startIndex:1;
        unsigned int has_status:1;
        unsigned int has_ttl:1;
        unsigned int has_type:1;
        unsigned int has_valuesAvailable:1;
        unsigned int has_version:1;
    } _flags;
}

@property (nonatomic) _Bool hasTimestampFirstSeen;
@property (nonatomic) double timestampFirstSeen;
@property (nonatomic) _Bool hasType;
@property (nonatomic) int type;
@property (nonatomic) _Bool hasStatus;
@property (nonatomic) int status;
@property (nonatomic) _Bool hasTtl;
@property (nonatomic) unsigned int ttl;
@property (nonatomic) _Bool hasStartIndex;
@property (nonatomic) int startIndex;
@property (nonatomic) _Bool hasValuesAvailable;
@property (nonatomic) int valuesAvailable;
@property (nonatomic, readonly) _Bool hasAttribution;
@property (retain, nonatomic) GEOPDAttribution *attribution;
@property (retain, nonatomic) NSMutableArray *values;
@property (retain, nonatomic) NSMutableArray *versionDomains;
@property (nonatomic) _Bool hasVersion;
@property (nonatomic) unsigned int version;
@property (nonatomic, readonly) _Bool hasSource;
@property (retain, nonatomic) GEOPDSource *source;
@property (nonatomic) _Bool hasCacheControl;
@property (nonatomic) int cacheControl;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)valueType;
+ (_Bool)isValid:(id)arg1;
+ (Class)versionDomainType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (id)valueAtIndex:(unsigned long long)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addValue:(id)arg1;
- (id)typeAsString:(int)arg1;
- (int)StringAsType:(id)arg1;
- (id)statusAsString:(int)arg1;
- (unsigned long long)valuesCount;
- (void)clearValues;
- (int)StringAsStatus:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (id)cacheControlAsString:(int)arg1;
- (int)StringAsCacheControl:(id)arg1;
- (_Bool)statusCodeIsValid;
- (void)addVersionDomain:(id)arg1;
- (unsigned long long)versionDomainsCount;
- (void)clearVersionDomains;
- (id)versionDomainAtIndex:(unsigned long long)arg1;

@end

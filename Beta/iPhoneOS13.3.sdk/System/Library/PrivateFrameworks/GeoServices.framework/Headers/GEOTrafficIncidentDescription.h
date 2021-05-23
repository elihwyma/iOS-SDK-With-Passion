/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOTrafficIncidentDescription : PBCodable

{
    PBDataReader *_reader;
    NSString *_incidentDescription;
    NSString *_language;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_incidentDescription:1;
        unsigned int read_language:1;
        unsigned int wrote_incidentDescription:1;
        unsigned int wrote_language:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasLanguage;
@property (retain, nonatomic) NSString *language;
@property (nonatomic, readonly) _Bool hasIncidentDescription;
@property (retain, nonatomic) NSString *incidentDescription;

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
- (void)_readLanguage;
- (void)_readIncidentDescription;

@end

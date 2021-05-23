/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

__attribute__((visibility("hidden")))
@interface GEOPDStorefrontBundleId : PBCodable

{
    unsigned long long _identifier;
    unsigned long long _timestamp;
    struct {
        unsigned int has_identifier:1;
        unsigned int has_timestamp:1;
    } _flags;
}

@property (nonatomic) _Bool hasIdentifier;
@property (nonatomic) unsigned long long identifier;
@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

+ (_Bool)isValid:(id)arg1;

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

@end

/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOTrafficTrafficIncidentsMetaData : PBCodable

{
    NSString *_archiveId;
    unsigned long long _archiveTime;
    struct {
        unsigned int has_archiveTime:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasArchiveId;
@property (retain, nonatomic) NSString *archiveId;
@property (nonatomic) _Bool hasArchiveTime;
@property (nonatomic) unsigned long long archiveTime;

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

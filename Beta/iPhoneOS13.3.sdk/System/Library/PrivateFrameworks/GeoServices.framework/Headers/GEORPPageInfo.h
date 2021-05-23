/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSData, PBUnknownFields;

@interface GEORPPageInfo : PBCodable

{
    PBUnknownFields *_unknownFields;
    NSData *_nextPageToken;
    unsigned int _pageSize;
    struct {
        unsigned int has_pageSize:1;
    } _flags;
}

@property (nonatomic) _Bool hasPageSize;
@property (nonatomic) unsigned int pageSize;
@property (nonatomic, readonly) _Bool hasNextPageToken;
@property (retain, nonatomic) NSData *nextPageToken;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

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
- (void)clearUnknownFields:(_Bool)arg1;

@end

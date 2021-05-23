/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString, PBUnknownFields;

@interface GEOAbAssignInfo : PBCodable

{
    PBUnknownFields *_unknownFields;
    NSString *_abAssignId;
    unsigned long long _createdAtTimestamp;
    unsigned long long _relativeTimestamp;
    struct {
        unsigned int has_createdAtTimestamp:1;
        unsigned int has_relativeTimestamp:1;
    } _flags;
}

@property (nonatomic) _Bool hasCreatedAtTimestamp;
@property (nonatomic) unsigned long long createdAtTimestamp;
@property (nonatomic, readonly) _Bool hasAbAssignId;
@property (retain, nonatomic) NSString *abAssignId;
@property (nonatomic) _Bool hasRelativeTimestamp;
@property (nonatomic) unsigned long long relativeTimestamp;
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
- (id)initWithAbAssignId:(id)arg1 createdAtDate:(id)arg2;
- (void)refreshRelativeTimeStampWithEventTime:(double)arg1;
- (void)refreshRelativeTimeStamp;

@end

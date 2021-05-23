/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDComponentFilter, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDComponentInfo : PBCodable

{
    PBUnknownFields *_unknownFields;
    GEOPDComponentFilter *_filter;
    unsigned int _count;
    unsigned int _startIndex;
    int _type;
    int _urgency;
    _Bool _includeSource;
    struct {
        unsigned int has_count:1;
        unsigned int has_startIndex:1;
        unsigned int has_type:1;
        unsigned int has_urgency:1;
        unsigned int has_includeSource:1;
    } _flags;
}

@property (nonatomic) _Bool hasType;
@property (nonatomic) int type;
@property (nonatomic) _Bool hasStartIndex;
@property (nonatomic) unsigned int startIndex;
@property (nonatomic) _Bool hasCount;
@property (nonatomic) unsigned int count;
@property (nonatomic, readonly) _Bool hasFilter;
@property (retain, nonatomic) GEOPDComponentFilter *filter;
@property (nonatomic) _Bool hasIncludeSource;
@property (nonatomic) _Bool includeSource;
@property (nonatomic) _Bool hasUrgency;
@property (nonatomic) int urgency;
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
- (id)typeAsString:(int)arg1;
- (int)StringAsType:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (id)urgencyAsString:(int)arg1;
- (int)StringAsUrgency:(id)arg1;
- (id)initWithType:(int)arg1 count:(unsigned int)arg2;

@end

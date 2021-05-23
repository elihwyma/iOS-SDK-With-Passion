/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, PBUnknownFields;

@interface GEOSearchSubstring : PBCodable

{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_spanDatas;
    int _beginIndex;
    int _endIndex;
    int _stringType;
}

@property (nonatomic) int stringType;
@property (nonatomic) int beginIndex;
@property (nonatomic) int endIndex;
@property (retain, nonatomic) NSMutableArray *spanDatas;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)spanDataType;

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
- (void)addSpanData:(id)arg1;
- (unsigned long long)spanDatasCount;
- (void)clearSpanDatas;
- (id)spanDataAtIndex:(unsigned long long)arg1;
- (id)stringTypeAsString:(int)arg1;
- (int)StringAsStringType:(id)arg1;

@end

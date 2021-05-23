/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, PBUnknownFields;

@interface GEORPDebugSettings : PBCodable

{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_keywords;
    int _mode;
    struct {
        unsigned int has_mode:1;
    } _flags;
}

@property (nonatomic) _Bool hasMode;
@property (nonatomic) int mode;
@property (retain, nonatomic) NSMutableArray *keywords;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)keywordsType;

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
- (void)addKeywords:(id)arg1;
- (unsigned long long)keywordsCount;
- (void)clearKeywords;
- (id)keywordsAtIndex:(unsigned long long)arg1;
- (id)modeAsString:(int)arg1;
- (int)StringAsMode:(id)arg1;

@end

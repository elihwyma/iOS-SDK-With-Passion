/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray;

@interface GEORPSuggestionEntry : PBCodable

{
    NSMutableArray *_displayLines;
    unsigned int _serverSearchCompletionEntryIndex;
    unsigned int _serverSearchCompletionSectionIndex;
    int _type;
    struct {
        unsigned int has_serverSearchCompletionEntryIndex:1;
        unsigned int has_serverSearchCompletionSectionIndex:1;
        unsigned int has_type:1;
    } _flags;
}

@property (nonatomic) _Bool hasType;
@property (nonatomic) int type;
@property (retain, nonatomic) NSMutableArray *displayLines;
@property (nonatomic) _Bool hasServerSearchCompletionSectionIndex;
@property (nonatomic) unsigned int serverSearchCompletionSectionIndex;
@property (nonatomic) _Bool hasServerSearchCompletionEntryIndex;
@property (nonatomic) unsigned int serverSearchCompletionEntryIndex;

+ (_Bool)isValid:(id)arg1;
+ (Class)displayLineType;

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
- (void)addDisplayLine:(id)arg1;
- (unsigned long long)displayLinesCount;
- (void)clearDisplayLines;
- (id)displayLineAtIndex:(unsigned long long)arg1;

@end

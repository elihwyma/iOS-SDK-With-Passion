/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString;

@interface GEOSubactionMetaData : PBCodable

{
    NSString *_displayedString;
    int _selectedSubactionIndex;
    int _subactionType;
    struct {
        unsigned int has_selectedSubactionIndex:1;
        unsigned int has_subactionType:1;
    } _flags;
}

@property (nonatomic) _Bool hasSelectedSubactionIndex;
@property (nonatomic) int selectedSubactionIndex;
@property (nonatomic) _Bool hasSubactionType;
@property (nonatomic) int subactionType;
@property (nonatomic, readonly) _Bool hasDisplayedString;
@property (retain, nonatomic) NSString *displayedString;

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
- (id)subactionTypeAsString:(int)arg1;
- (int)StringAsSubactionType:(id)arg1;

@end

/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <ProtocolBuffer/PBCodable.h>

#import <MediaPlayer/Swift-Protocol.h>

@class NSMutableArray;

@interface MPPMediaQuery : PBCodable <Swift>

{
    int _entityOrder;
    NSMutableArray *_filterPredicates;
    int _groupingType;
    NSMutableArray *_staticEntityIdentifiers;
    int _staticEntityType;
    _Bool _filteringDisabled;
    _Bool _includeNonLibraryEntities;
    struct {
        unsigned int entityOrder:1;
        unsigned int groupingType:1;
        unsigned int staticEntityType:1;
        unsigned int filteringDisabled:1;
        unsigned int includeNonLibraryEntities:1;
    } _has;
}

@property (retain, nonatomic) NSMutableArray *filterPredicates;
@property (nonatomic) _Bool hasGroupingType;
@property (nonatomic) int groupingType;
@property (nonatomic) _Bool hasFilteringDisabled;
@property (nonatomic) _Bool filteringDisabled;
@property (nonatomic) _Bool hasEntityOrder;
@property (nonatomic) int entityOrder;
@property (retain, nonatomic) NSMutableArray *staticEntityIdentifiers;
@property (nonatomic) _Bool hasStaticEntityType;
@property (nonatomic) int staticEntityType;
@property (nonatomic) _Bool hasIncludeNonLibraryEntities;
@property (nonatomic) _Bool includeNonLibraryEntities;

+ (Class)filterPredicatesType;
+ (Class)staticEntityIdentifiersType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)clearFilterPredicates;
- (void)addFilterPredicates:(id)arg1;
- (unsigned long long)filterPredicatesCount;
- (id)filterPredicatesAtIndex:(unsigned long long)arg1;
- (id)groupingTypeAsString:(int)arg1;
- (int)StringAsGroupingType:(id)arg1;
- (id)entityOrderAsString:(int)arg1;
- (int)StringAsEntityOrder:(id)arg1;
- (void)clearStaticEntityIdentifiers;
- (void)addStaticEntityIdentifiers:(id)arg1;
- (unsigned long long)staticEntityIdentifiersCount;
- (id)staticEntityIdentifiersAtIndex:(unsigned long long)arg1;
- (id)staticEntityTypeAsString:(int)arg1;
- (int)StringAsStaticEntityType:(id)arg1;

@end

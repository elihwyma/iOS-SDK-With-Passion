/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray;

@interface GEOMapsTransitWidget : PBCodable

{
    NSMutableArray *_transitIncidentItems;
    int _tappedItemIndex;
    int _transitMessageType;
    _Bool _everExpanded;
    _Bool _initiallyExpanded;
    struct {
        unsigned int has_tappedItemIndex:1;
        unsigned int has_transitMessageType:1;
        unsigned int has_everExpanded:1;
        unsigned int has_initiallyExpanded:1;
    } _flags;
}

@property (nonatomic) _Bool hasTransitMessageType;
@property (nonatomic) int transitMessageType;
@property (retain, nonatomic) NSMutableArray *transitIncidentItems;
@property (nonatomic) _Bool hasInitiallyExpanded;
@property (nonatomic) _Bool initiallyExpanded;
@property (nonatomic) _Bool hasEverExpanded;
@property (nonatomic) _Bool everExpanded;
@property (nonatomic) _Bool hasTappedItemIndex;
@property (nonatomic) int tappedItemIndex;

+ (_Bool)isValid:(id)arg1;
+ (Class)transitIncidentItemType;

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
- (void)addTransitIncidentItem:(id)arg1;
- (unsigned long long)transitIncidentItemsCount;
- (void)clearTransitIncidentItems;
- (id)transitIncidentItemAtIndex:(unsigned long long)arg1;
- (id)transitMessageTypeAsString:(int)arg1;
- (int)StringAsTransitMessageType:(id)arg1;

@end

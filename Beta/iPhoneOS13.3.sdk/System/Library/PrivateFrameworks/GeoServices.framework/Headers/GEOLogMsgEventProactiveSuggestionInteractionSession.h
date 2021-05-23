/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray;

@interface GEOLogMsgEventProactiveSuggestionInteractionSession : PBCodable

{
    NSMutableArray *_proactiveItems;
    int _duration;
    int _interactedItemIndex;
    int _listType;
    struct {
        unsigned int has_duration:1;
        unsigned int has_interactedItemIndex:1;
        unsigned int has_listType:1;
    } _flags;
}

@property (nonatomic) _Bool hasListType;
@property (nonatomic) int listType;
@property (retain, nonatomic) NSMutableArray *proactiveItems;
@property (nonatomic) _Bool hasDuration;
@property (nonatomic) int duration;
@property (nonatomic) _Bool hasInteractedItemIndex;
@property (nonatomic) int interactedItemIndex;

+ (_Bool)isValid:(id)arg1;
+ (Class)proactiveItemType;

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
- (id)listTypeAsString:(int)arg1;
- (int)StringAsListType:(id)arg1;
- (void)addProactiveItem:(id)arg1;
- (unsigned long long)proactiveItemsCount;
- (void)clearProactiveItems;
- (id)proactiveItemAtIndex:(unsigned long long)arg1;

@end

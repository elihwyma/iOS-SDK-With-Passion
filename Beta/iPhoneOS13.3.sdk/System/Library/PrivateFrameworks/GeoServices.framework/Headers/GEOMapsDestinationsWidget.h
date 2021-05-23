/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray;

@interface GEOMapsDestinationsWidget : PBCodable

{
    NSMutableArray *_proactiveItems;
    int _tappedItemIndex;
    _Bool _everExpanded;
    _Bool _initiallyExpanded;
    struct {
        unsigned int has_tappedItemIndex:1;
        unsigned int has_everExpanded:1;
        unsigned int has_initiallyExpanded:1;
    } _flags;
}

@property (retain, nonatomic) NSMutableArray *proactiveItems;
@property (nonatomic) _Bool hasInitiallyExpanded;
@property (nonatomic) _Bool initiallyExpanded;
@property (nonatomic) _Bool hasEverExpanded;
@property (nonatomic) _Bool everExpanded;
@property (nonatomic) _Bool hasTappedItemIndex;
@property (nonatomic) int tappedItemIndex;

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
- (void)addProactiveItem:(id)arg1;
- (unsigned long long)proactiveItemsCount;
- (void)clearProactiveItems;
- (id)proactiveItemAtIndex:(unsigned long long)arg1;

@end

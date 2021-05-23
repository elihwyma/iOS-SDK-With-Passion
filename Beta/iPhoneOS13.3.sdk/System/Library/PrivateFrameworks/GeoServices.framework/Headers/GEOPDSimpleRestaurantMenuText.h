/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSimpleRestaurantMenuText : PBCodable

{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_menuGroups;
}

@property (retain, nonatomic) NSMutableArray *menuGroups;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)menuGroupType;

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
- (void)addMenuGroup:(id)arg1;
- (unsigned long long)menuGroupsCount;
- (void)clearMenuGroups;
- (id)menuGroupAtIndex:(unsigned long long)arg1;

@end

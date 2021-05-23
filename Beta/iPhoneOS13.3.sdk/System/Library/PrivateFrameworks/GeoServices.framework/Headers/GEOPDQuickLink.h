/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDQuickLink : PBCodable

{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_quickLinkItems;
}

@property (retain, nonatomic) NSMutableArray *quickLinkItems;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)quickLinkItemType;

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
- (void)addQuickLinkItem:(id)arg1;
- (unsigned long long)quickLinkItemsCount;
- (void)clearQuickLinkItems;
- (id)quickLinkItemAtIndex:(unsigned long long)arg1;

@end

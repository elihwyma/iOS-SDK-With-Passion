/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPictureItemContainer : PBCodable

{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_pictureItems;
    _Bool _allowFullScreenPhoto;
    struct {
        unsigned int has_allowFullScreenPhoto:1;
    } _flags;
}

@property (retain, nonatomic) NSMutableArray *pictureItems;
@property (nonatomic) _Bool hasAllowFullScreenPhoto;
@property (nonatomic) _Bool allowFullScreenPhoto;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)pictureItemType;

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
- (void)addPictureItem:(id)arg1;
- (unsigned long long)pictureItemsCount;
- (void)clearPictureItems;
- (id)pictureItemAtIndex:(unsigned long long)arg1;

@end

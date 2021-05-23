/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString, PBUnknownFields;

@interface MSPCollectionStorage : PBCodable

{
    PBUnknownFields *_unknownFields;
    NSString *_collectionDescription;
    NSData *_image;
    NSString *_imageURL;
    NSData *_itemData;
    NSString *_title;
}

@property (nonatomic, readonly) _Bool hasTitle;
@property (retain, nonatomic) NSString *title;
@property (nonatomic, readonly) _Bool hasImage;
@property (retain, nonatomic) NSData *image;
@property (nonatomic, readonly) _Bool hasImageURL;
@property (retain, nonatomic) NSString *imageURL;
@property (nonatomic, readonly) _Bool hasCollectionDescription;
@property (retain, nonatomic) NSString *collectionDescription;
@property (nonatomic, readonly) _Bool hasItemData;
@property (retain, nonatomic) NSData *itemData;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end

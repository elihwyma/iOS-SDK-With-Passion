/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, PBUnknownFields;

@interface MSPCollectionItemStorage : PBCodable

{
    PBUnknownFields *_unknownFields;
    NSData *_contents;
    NSData *_contentsTimestamp;
    NSData *_position;
    NSData *_positionTimestamp;
    NSData *_storageIdentifier;
}

@property (nonatomic, readonly) _Bool hasStorageIdentifier;
@property (retain, nonatomic) NSData *storageIdentifier;
@property (nonatomic, readonly) _Bool hasContents;
@property (retain, nonatomic) NSData *contents;
@property (nonatomic, readonly) _Bool hasContentsTimestamp;
@property (retain, nonatomic) NSData *contentsTimestamp;
@property (nonatomic, readonly) _Bool hasPosition;
@property (retain, nonatomic) NSData *position;
@property (nonatomic, readonly) _Bool hasPositionTimestamp;
@property (retain, nonatomic) NSData *positionTimestamp;
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

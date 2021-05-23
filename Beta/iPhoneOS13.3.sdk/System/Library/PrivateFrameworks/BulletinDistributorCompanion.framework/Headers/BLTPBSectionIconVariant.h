/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface BLTPBSectionIconVariant : PBCodable

{
    unsigned int _format;
    NSData *_imageData;
    _Bool _precomposed;
    struct {
        unsigned int precomposed:1;
    } _has;
}

@property (nonatomic) unsigned int format;
@property (nonatomic, readonly) _Bool hasImageData;
@property (retain, nonatomic) NSData *imageData;
@property (nonatomic) _Bool hasPrecomposed;
@property (nonatomic) _Bool precomposed;

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

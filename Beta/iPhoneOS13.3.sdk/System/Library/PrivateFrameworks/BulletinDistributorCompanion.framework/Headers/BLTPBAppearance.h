/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <ProtocolBuffer/PBCodable.h>

@class BLTPBImage, NSString;

@interface BLTPBAppearance : PBCodable

{
    BLTPBImage *_image;
    NSString *_title;
    _Bool _destructive;
    struct {
        unsigned int destructive:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasTitle;
@property (retain, nonatomic) NSString *title;
@property (nonatomic, readonly) _Bool hasImage;
@property (retain, nonatomic) BLTPBImage *image;
@property (nonatomic) _Bool hasDestructive;
@property (nonatomic) _Bool destructive;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end

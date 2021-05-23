/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@interface _MRColorProtobuf : PBCodable

{
    float _alpha;
    float _blue;
    float _green;
    float _red;
    struct {
        unsigned int alpha:1;
        unsigned int blue:1;
        unsigned int green:1;
        unsigned int red:1;
    } _has;
}

@property (nonatomic) _Bool hasRed;
@property (nonatomic) float red;
@property (nonatomic) _Bool hasGreen;
@property (nonatomic) float green;
@property (nonatomic) _Bool hasBlue;
@property (nonatomic) float blue;
@property (nonatomic) _Bool hasAlpha;
@property (nonatomic) float alpha;

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

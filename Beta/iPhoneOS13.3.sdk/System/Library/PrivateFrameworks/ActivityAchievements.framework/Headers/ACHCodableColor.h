/*
 Image: /System/Library/PrivateFrameworks/ActivityAchievements.framework/ActivityAchievements
 */

#import <ProtocolBuffer/PBCodable.h>

@interface ACHCodableColor : PBCodable

{
    double _blue;
    double _green;
    double _red;
    struct {
        unsigned int blue:1;
        unsigned int green:1;
        unsigned int red:1;
    } _has;
}

@property (nonatomic) _Bool hasRed;
@property (nonatomic) double red;
@property (nonatomic) _Bool hasGreen;
@property (nonatomic) double green;
@property (nonatomic) _Bool hasBlue;
@property (nonatomic) double blue;

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

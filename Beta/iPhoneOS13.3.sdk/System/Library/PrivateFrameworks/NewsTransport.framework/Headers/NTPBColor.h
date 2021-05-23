/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@interface NTPBColor : PBCodable

{
    double _a;
    double _b;
    double _g;
    double _r;
    struct {
        unsigned int a:1;
        unsigned int b:1;
        unsigned int g:1;
        unsigned int r:1;
    } _has;
}

@property (nonatomic) _Bool hasR;
@property (nonatomic) double r;
@property (nonatomic) _Bool hasG;
@property (nonatomic) double g;
@property (nonatomic) _Bool hasB;
@property (nonatomic) double b;
@property (nonatomic) _Bool hasA;
@property (nonatomic) double a;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end

/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <ProtocolBuffer/PBCodable.h>

@interface HMPBEncodeOption : PBCodable

{
    _Bool _isSPI;
    _Bool _isXPC;
    struct {
        unsigned int isSPI:1;
        unsigned int isXPC:1;
    } _has;
}

@property (nonatomic) _Bool hasIsXPC;
@property (nonatomic) _Bool isXPC;
@property (nonatomic) _Bool hasIsSPI;
@property (nonatomic) _Bool isSPI;

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

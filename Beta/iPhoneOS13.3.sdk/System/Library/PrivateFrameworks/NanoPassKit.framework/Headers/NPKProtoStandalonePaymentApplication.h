/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBCodable.h>

@interface NPKProtoStandalonePaymentApplication : PBCodable

{
    int _state;
    struct {
        unsigned int state:1;
    } _has;
}

@property (nonatomic) _Bool hasState;
@property (nonatomic) int state;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)stateAsString:(int)arg1;
- (int)StringAsState:(id)arg1;

@end
